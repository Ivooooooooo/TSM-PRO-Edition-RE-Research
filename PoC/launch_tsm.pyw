"""TSM PRO auth launcher.

Starts a local fake auth relay (mitmproxy addon), points the Windows proxy at
it for just long enough to log in, launches TSM PRO Edition without activating
its window, fills any credentials and clicks Login.  Once the client is in,
the system proxy is restored so nothing else on the PC is affected.

Run with pythonw.exe (no console):
    pythonw.exe launch_tsm.pyw
Optional:
    --hidden      run on a private desktop (for testing)
    --no-auto     do not auto-fill/click Login
    --keep-proxy  leave the system proxy on until the app closes
"""

import ctypes
import ctypes.wintypes as wt
import json
import os
import shutil
import socket
import struct
import subprocess
import sys
import time
import traceback
import winreg

HERE = os.path.dirname(os.path.abspath(__file__))
LOG_DIR = os.path.join(HERE, "logs")
APP = os.path.abspath(os.environ.get("TSM_EXE") or os.path.join(HERE, "..", "Binaries", "TSM-PRO-Edition.packed.exe"))
APP_CWD = os.path.dirname(APP)
VENV_SCRIPTS = os.path.join(os.environ.get("LOCALAPPDATA", ""), "Programs", "Python", "Python313", "Scripts")
MITM = shutil.which("mitmdump") or os.path.join(VENV_SCRIPTS, "mitmdump.exe")
CONF = os.path.abspath(os.environ.get("TSM_MITM_CONF") or os.path.join(HERE, "certs"))
PROXY_HOST = "127.0.0.1"
PROXY_PORT = 8080
PROXY_SERVER = f"{PROXY_HOST}:{PROXY_PORT}"
INTERNET_SETTINGS = r"Software\Microsoft\Windows\CurrentVersion\Internet Settings"
BACKUP = os.path.join(HERE, "proxy_backup.json")
RUN_LOG = os.path.join(LOG_DIR, "launcher.log")

u = ctypes.WinDLL("user32", use_last_error=True)
k = ctypes.WinDLL("kernel32", use_last_error=True)
wininet = ctypes.WinDLL("wininet", use_last_error=True)
k.OpenProcess.restype = wt.HANDLE
k.OpenProcess.argtypes = [wt.DWORD, wt.BOOL, wt.DWORD]
k.ReadProcessMemory.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t, ctypes.POINTER(ctypes.c_size_t)]
k.WriteProcessMemory.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t, ctypes.POINTER(ctypes.c_size_t)]
k.VirtualProtectEx.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_size_t, wt.DWORD, ctypes.POINTER(wt.DWORD)]
k.GetExitCodeProcess.argtypes = [wt.HANDLE, ctypes.POINTER(wt.DWORD)]

MODELS_SYNC = 0x13587CC  # call to the HTTP helper inside TsmModelsPlugin sync
THEMIDA_EXIT = 0x7B45AA0  # push 0xDEADC0DE; ... call ExitProcess

u.CreateDesktopW.restype = wt.HANDLE
u.CreateDesktopW.argtypes = [wt.LPCWSTR, wt.LPCWSTR, ctypes.c_void_p, wt.DWORD, wt.DWORD, ctypes.c_void_p]
u.CloseDesktop.argtypes = [wt.HANDLE]
k.CreateProcessW.restype = wt.BOOL
k.CreateProcessW.argtypes = [wt.LPCWSTR, wt.LPWSTR, ctypes.c_void_p, ctypes.c_void_p, wt.BOOL,
                             wt.DWORD, ctypes.c_void_p, wt.LPCWSTR, ctypes.c_void_p, ctypes.c_void_p]
k.TerminateProcess.argtypes = [wt.HANDLE, wt.UINT]
k.CloseHandle.argtypes = [wt.HANDLE]
k.WaitForSingleObject.argtypes = [wt.HANDLE, wt.DWORD]
k.GetExitCodeProcess.argtypes = [wt.HANDLE, ctypes.POINTER(wt.DWORD)]
k.VirtualAllocEx.restype = ctypes.c_void_p
k.VirtualAllocEx.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_size_t, wt.DWORD, wt.DWORD]

psapi = ctypes.WinDLL("psapi", use_last_error=True)
psapi.EnumProcessModulesEx.argtypes = [wt.HANDLE, ctypes.POINTER(wt.HMODULE), wt.DWORD, ctypes.POINTER(wt.DWORD), wt.DWORD]
psapi.GetModuleBaseNameW.argtypes = [wt.HANDLE, wt.HMODULE, wt.LPWSTR, wt.DWORD]
psapi.GetModuleInformation.argtypes = [wt.HANDLE, wt.HMODULE, ctypes.c_void_p, wt.DWORD]


class MODULEINFO(ctypes.Structure):
    _fields_ = [("lpBaseOfDll", ctypes.c_void_p), ("SizeOfImage", wt.DWORD), ("EntryPoint", ctypes.c_void_p)]


class STARTUPINFO(ctypes.Structure):
    _fields_ = [
        ("cb", wt.DWORD), ("lpReserved", wt.LPWSTR), ("lpDesktop", wt.LPWSTR), ("lpTitle", wt.LPWSTR),
        ("dwX", wt.DWORD), ("dwY", wt.DWORD), ("dwXSize", wt.DWORD), ("dwYSize", wt.DWORD),
        ("dwXCountChars", wt.DWORD), ("dwYCountChars", wt.DWORD), ("dwFillAttribute", wt.DWORD),
        ("dwFlags", wt.DWORD), ("wShowWindow", wt.WORD), ("cbReserved2", wt.WORD),
        ("lpReserved2", ctypes.c_void_p), ("hStdInput", wt.HANDLE), ("hStdOutput", wt.HANDLE),
        ("hStdError", wt.HANDLE),
    ]


class PROCESS_INFORMATION(ctypes.Structure):
    _fields_ = [("hProcess", wt.HANDLE), ("hThread", wt.HANDLE), ("dwProcessId", wt.DWORD), ("dwThreadId", wt.DWORD)]


def log(msg):
    os.makedirs(LOG_DIR, exist_ok=True)
    line = f"{time.strftime('%H:%M:%S')} {msg}"
    try:
        with open(RUN_LOG, "a", encoding="utf-8") as f:
            f.write(line + "\n")
    except OSError:
        pass


def spawn(cmdline, desktop=None, cwd=None, show=0, hidden=True):
    si = STARTUPINFO()
    si.cb = ctypes.sizeof(STARTUPINFO)
    if desktop:
        si.lpDesktop = desktop
    si.dwFlags = 0x1  # STARTF_USESHOWWINDOW
    si.wShowWindow = show
    flags = 0x08000000 if hidden else 0  # CREATE_NO_WINDOW
    pi = PROCESS_INFORMATION()
    buf = ctypes.create_unicode_buffer(cmdline)
    ok = k.CreateProcessW(None, buf, None, None, False, flags, None, cwd or HERE,
                          ctypes.byref(si), ctypes.byref(pi))
    if not ok:
        raise ctypes.WinError(ctypes.get_last_error())
    k.CloseHandle(pi.hThread)
    return pi.dwProcessId, pi.hProcess


def read_proxy():
    out = {}
    try:
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, INTERNET_SETTINGS, 0, winreg.KEY_READ) as key:
            for name in ("ProxyEnable", "ProxyServer", "ProxyOverride", "AutoConfigURL"):
                try:
                    val, typ = winreg.QueryValueEx(key, name)
                    out[name] = {"value": val, "type": typ}
                except FileNotFoundError:
                    pass
    except OSError:
        pass
    return out


def apply_proxy_values(values):
    with winreg.OpenKey(winreg.HKEY_CURRENT_USER, INTERNET_SETTINGS, 0, winreg.KEY_SET_VALUE) as key:
        for name, item in values.items():
            winreg.SetValueEx(key, name, 0, item["type"], item["value"])


def delete_proxy_value(name):
    try:
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, INTERNET_SETTINGS, 0, winreg.KEY_SET_VALUE) as key:
            winreg.DeleteValue(key, name)
    except OSError:
        pass


def notify_proxy():
    wininet.InternetSetOptionW(None, 39, None, 0)  # SETTINGS_CHANGED
    wininet.InternetSetOptionW(None, 37, None, 0)  # REFRESH


def save_and_set_proxy():
    current = read_proxy()
    if os.path.exists(BACKUP):
        # Keep the oldest real backup, in case a previous run crashed.
        pass
    else:
        with open(BACKUP, "w", encoding="utf-8") as f:
            json.dump(current, f)
    log("proxy saved: " + json.dumps(current))
    apply_proxy_values({
        "ProxyEnable": {"value": 1, "type": winreg.REG_DWORD},
        "ProxyServer": {"value": PROXY_SERVER, "type": winreg.REG_SZ},
        "ProxyOverride": {"value": "<local>", "type": winreg.REG_SZ},
    })
    notify_proxy()
    log("proxy enabled -> " + PROXY_SERVER)


def restore_proxy():
    if not os.path.exists(BACKUP):
        log("no proxy backup; leaving settings alone")
        return
    try:
        with open(BACKUP, encoding="utf-8") as f:
            saved = json.load(f)
    except (OSError, ValueError):
        log("bad proxy backup")
        return
    managed = ("ProxyEnable", "ProxyServer", "ProxyOverride")
    for name in managed:
        if name in saved:
            apply_proxy_values({name: saved[name]})
        else:
            delete_proxy_value(name)
    if "AutoConfigURL" in saved:
        apply_proxy_values({"AutoConfigURL": saved["AutoConfigURL"]})
    notify_proxy()
    try:
        os.remove(BACKUP)
    except OSError:
        pass
    log("proxy restored: " + json.dumps(saved))


def disable_models_sync(pid, timeout=35):
    """Patch TsmModelsPlugin's sync entry so it returns immediately.

    The app keeps all of its UI/features; only the server model-catalogue
    request is skipped, so it cannot fail with "failed auth" or block on an
    empty model list.
    """
    h = k.OpenProcess(0x1F0FFF, False, pid)
    if not h:
        return False
    try:
        expected = b"\xe8\x33\x18\x6b\xff"  # call 0xa0a004 (HTTP helper)
        patch = b"\x31\xc0\x90\x90\x90"     # xor eax,eax; nops => HTTP failure
        end = time.time() + timeout
        while time.time() < end:
            buf = ctypes.create_string_buffer(5)
            got = ctypes.c_size_t(0)
            if k.ReadProcessMemory(h, ctypes.c_void_p(MODELS_SYNC), buf, 5, ctypes.byref(got)):
                if buf.raw[:5] == expected:
                    old = wt.DWORD(0)
                    k.VirtualProtectEx(h, ctypes.c_void_p(MODELS_SYNC), 5, 0x40, ctypes.byref(old))
                    w = ctypes.c_size_t(0)
                    k.WriteProcessMemory(h, ctypes.c_void_p(MODELS_SYNC), patch, 5, ctypes.byref(w))
                    return w.value == 5
            time.sleep(0.5)
        return False
    finally:
        k.CloseHandle(h)


def disable_themida_exit(pid, timeout=35):
    """Neutralize Themida's 0xDEADC0DE tamper-exit stub."""
    h = k.OpenProcess(0x1F0FFF, False, pid)
    if not h:
        return False
    try:
        expected = b"\x68\xde\xc0\xad\xde"  # push 0xDEADC0DE
        patch = b"\x31\xc0\xc3"             # xor eax,eax; ret
        end = time.time() + timeout
        while time.time() < end:
            buf = ctypes.create_string_buffer(5)
            got = ctypes.c_size_t(0)
            if k.ReadProcessMemory(h, ctypes.c_void_p(THEMIDA_EXIT), buf, 5, ctypes.byref(got)):
                if buf.raw[:5] == expected:
                    old = wt.DWORD(0)
                    k.VirtualProtectEx(h, ctypes.c_void_p(THEMIDA_EXIT), 3, 0x40, ctypes.byref(old))
                    w = ctypes.c_size_t(0)
                    k.WriteProcessMemory(h, ctypes.c_void_p(THEMIDA_EXIT), patch, 3, ctypes.byref(w))
                    return w.value == 3
            time.sleep(0.5)
        return False
    finally:
        k.CloseHandle(h)


def _export_rva(dll_path, func):
    try:
        import pefile
        pe = pefile.PE(dll_path, fast_load=True)
        pe.parse_data_directories(directories=[pefile.DIRECTORY_ENTRY['IMAGE_DIRECTORY_ENTRY_EXPORT']])
        for exp in pe.DIRECTORY_ENTRY_EXPORT.symbols:
            if exp.name and exp.name.decode(errors="replace").lower() == func.lower():
                return exp.address
    except Exception:
        return None
    return None


def _module_base(pid, name):
    h = k.OpenProcess(0x0410, False, pid)
    if not h:
        return None
    try:
        mods = (wt.HMODULE * 1024)()
        needed = wt.DWORD()
        if not psapi.EnumProcessModulesEx(h, mods, ctypes.sizeof(mods), ctypes.byref(needed), 0x03):
            return None
        count = needed.value // ctypes.sizeof(wt.HMODULE)
        for i in range(count):
            buf = ctypes.create_unicode_buffer(260)
            if psapi.GetModuleBaseNameW(h, mods[i], buf, 260):
                if buf.value.lower() == name.lower():
                    mi = MODULEINFO()
                    if psapi.GetModuleInformation(h, mods[i], ctypes.byref(mi), ctypes.sizeof(mi)):
                        return int(mi.lpBaseOfDll)
    finally:
        k.CloseHandle(h)
    return None


def hook_messagebox(pid):
    """Inline-hook MessageBoxW/A in the target process so Themida's
    tamper dialog returns IDOK instead of showing and killing the app.
    This touches only user32.dll (not the Themida-checked module)."""
    base = _module_base(pid, "USER32.dll")
    if not base:
        return False
    dll = os.path.join(os.environ.get("WINDIR", r"C:\Windows"), "SysWOW64", "user32.dll")
    h = k.OpenProcess(0x1F0FFF, False, pid)
    if not h:
        return False
    ok = False
    try:
        stub = int(k.VirtualAllocEx(h, None, 0x100, 0x3000, 0x40))
        if not stub:
            return False
        # mov eax, 1 (IDOK); ret 16  (stdcall, 4 args)
        code = b"\xB8\x01\x00\x00\x00\xC2\x10\x00"
        w = ctypes.c_size_t(0)
        k.WriteProcessMemory(h, ctypes.c_void_p(stub), code, len(code), ctypes.byref(w))
        for func in ("MessageBoxW", "MessageBoxA"):
            rva = _export_rva(dll, func)
            if not rva:
                continue
            target = base + rva
            rel = stub - (target + 5)
            patch = b"\xE9" + struct.pack("<i", rel)
            old = wt.DWORD(0)
            k.VirtualProtectEx(h, ctypes.c_void_p(target), 5, 0x40, ctypes.byref(old))
            if k.WriteProcessMemory(h, ctypes.c_void_p(target), patch, 5, ctypes.byref(w)) and w.value == 5:
                ok = True
    finally:
        k.CloseHandle(h)
    return ok


def hook_exitprocess(pid):
    """Inline-hook ExitProcess: swallow only 0xDEADC0DE exits, let all
    normal exits through.  Keeps the app alive when Themida's tamper check
    tries to kill it."""
    base = _module_base(pid, "KERNEL32.dll")
    if not base:
        return False
    dll = os.path.join(os.environ.get("WINDIR", r"C:\Windows"), "SysWOW64", "kernel32.dll")
    rva = _export_rva(dll, "ExitProcess")
    if not rva:
        return False
    target = base + rva
    h = k.OpenProcess(0x1F0FFF, False, pid)
    if not h:
        return False
    try:
        orig = ctypes.create_string_buffer(5)
        got = ctypes.c_size_t(0)
        if not k.ReadProcessMemory(h, ctypes.c_void_p(target), orig, 5, ctypes.byref(got)):
            return False
        original = orig.raw[:5]
        stub = int(k.VirtualAllocEx(h, None, 0x100, 0x3000, 0x40))
        if not stub:
            return False
        code = bytearray()
        code += b"\x8B\x44\x24\x04"              # mov eax,[esp+4]
        code += b"\x3D\xDE\xC0\xAD\xDE"          # cmp eax,0xDEADC0DE
        code += b"\x75\x05"                      # jne +5 (to original bytes)
        code += b"\x31\xC0"                      # xor eax,eax
        code += b"\xC2\x04\x00"                  # ret 4
        code += original                         # original prologue
        rel = (target + 5) - (stub + len(code) + 5)
        code += b"\xE9" + struct.pack("<i", rel)  # jmp target+5
        w = ctypes.c_size_t(0)
        k.WriteProcessMemory(h, ctypes.c_void_p(stub), bytes(code), len(code), ctypes.byref(w))
        patch = b"\xE9" + struct.pack("<i", stub - (target + 5))
        old = wt.DWORD(0)
        k.VirtualProtectEx(h, ctypes.c_void_p(target), 5, 0x40, ctypes.byref(old))
        if k.WriteProcessMemory(h, ctypes.c_void_p(target), patch, 5, ctypes.byref(w)) and w.value == 5:
            return True
    finally:
        k.CloseHandle(h)
    return False


def port_open(host, port, timeout=0.25):
    try:
        with socket.create_connection((host, port), timeout=timeout):
            return True
    except OSError:
        return False


def wait_port(host, port, seconds=20):
    end = time.time() + seconds
    while time.time() < end:
        if port_open(host, port):
            return True
        time.sleep(0.35)
    return False


def main():
    args = sys.argv[1:]
    hidden = "--hidden" in args
    auto = "--no-auto" not in args
    keep_proxy = "--keep-proxy" in args
    compat_invoker = "--compat-invoker" in args
    no_models = "--no-models" in args
    patch_themida = "--patch-themida" in args
    show_normal = "--show-normal" in args
    proxy_grace = 6
    if "--proxy-grace" in args:
        try:
            proxy_grace = int(args[args.index("--proxy-grace") + 1])
        except (IndexError, ValueError):
            proxy_grace = 6
    test_seconds = 0
    if "--test-seconds" in args:
        try:
            test_seconds = int(args[args.index("--test-seconds") + 1])
        except (IndexError, ValueError):
            test_seconds = 0

    os.makedirs(LOG_DIR, exist_ok=True)
    for fn in ("login_served.txt", "login_status.txt", "requests.log"):
        try:
            os.remove(os.path.join(LOG_DIR, fn))
        except OSError:
            pass

    if not os.path.exists(APP):
        log("app not found: " + APP)
        return 1
    if not os.path.exists(MITM):
        log("mitmdump not found: " + MITM)
        return 1

    if port_open(PROXY_HOST, PROXY_PORT):
        log("port 8080 already in use; aborting")
        return 1

    log("starting auth relay")
    mitm = subprocess.Popen(
        [MITM, "--listen-host", PROXY_HOST, "--listen-port", str(PROXY_PORT),
         "-s", os.path.join(HERE, "auth_addon.py"),
         "--set", f"confdir={CONF}", "-q"],
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
        creationflags=0x08000000,
    )
    if not wait_port(PROXY_HOST, PROXY_PORT, 25):
        log("auth relay did not start")
        try:
            mitm.terminate()
        except Exception:
            pass
        return 1
    log("auth relay listening")

    save_and_set_proxy()

    desktop = None
    hdesk = None
    if hidden:
        name = "TSMAuthHidden"
        hdesk = u.CreateDesktopW(name, None, None, 0, 0x000F01FF, None)
        if not hdesk:
            log("CreateDesktop failed")
            return 1
        desktop = name
        show = 1  # visible inside the private desktop, invisible to the user
    else:
        # Minimized/no-activate by default; --show-normal forces a visible
        # window (needed on some Themida builds to create the Qt window).
        show = 1 if show_normal else 7

    if compat_invoker:
        # The original manifest says requireAdministrator.  For the auth/model
        # UI we do not need device access, so let AppCompat run it as invoker.
        os.environ["__COMPAT_LAYER"] = "RunAsInvoker"
        log("compat layer: RunAsInvoker")

    log("launching app")
    app_pid, app_h = spawn(f'"{APP}"', desktop=desktop, cwd=APP_CWD, show=show, hidden=False)
    log(f"app pid {app_pid}")

    if patch_themida:
        log("waiting for unpack to disable Themida exit stub")
        log("Themida exit disabled: " + str(disable_themida_exit(app_pid)))
        log("Themida message boxes hooked: " + str(hook_messagebox(app_pid)))
        log("ExitProcess hook: " + str(hook_exitprocess(app_pid)))

    if no_models:
        log("waiting for unpack to disable models sync")
        log("models sync disabled: " + str(disable_models_sync(app_pid)))

    worker_h = None
    if auto:
        worker_h = None
        ps = f'powershell.exe -NoProfile -ExecutionPolicy Bypass -File "{os.path.join(HERE, "login_worker.ps1")}" -OutDir "{LOG_DIR}"'
        try:
            wrk_pid, worker_h = spawn(ps, desktop=desktop, cwd=HERE, show=0, hidden=True)
            log(f"login worker pid {wrk_pid}")
        except Exception:
            log("worker launch failed:\n" + traceback.format_exc())

    restored = False
    status_file = os.path.join(LOG_DIR, "login_status.txt")
    mark_file = os.path.join(LOG_DIR, "login_served.txt")
    start = time.time()
    while time.time() - start < 180:
        exited = k.WaitForSingleObject(app_h, 0) == 0
        if exited:
            code = wt.DWORD(0)
            k.GetExitCodeProcess(app_h, ctypes.byref(code))
            log(f"app exited early code=0x{code.value:08X}")
            break
        main_ok = False
        if os.path.exists(status_file):
            try:
                if "main=True" in open(status_file, encoding="utf-8-sig", errors="replace").read():
                    main_ok = True
            except OSError:
                pass
        if (main_ok or os.path.exists(mark_file)) and not restored:
            log(f"login served; keeping proxy for {proxy_grace}s")
            time.sleep(max(0, proxy_grace))
            if not keep_proxy:
                restore_proxy()
                restored = True
        if restored and main_ok:
            break
        time.sleep(0.7)

    if not restored and not keep_proxy:
        restore_proxy()
        restored = True

    # Keep the relay alive until the app closes (the app may keep the proxy
    # cached and make later calls).
    test_deadline = (time.time() + test_seconds) if test_seconds else 0
    while k.WaitForSingleObject(app_h, 1000) != 0:
        if test_deadline and time.time() >= test_deadline:
            log("test window elapsed; closing app")
            k.TerminateProcess(app_h, 0)
            break

    code = wt.DWORD(0)
    k.GetExitCodeProcess(app_h, ctypes.byref(code))
    log(f"app closed code=0x{code.value:08X}; cleaning up")
    try:
        mitm.terminate()
        mitm.wait(timeout=5)
    except Exception:
        pass
    if worker_h:
        try:
            k.TerminateProcess(worker_h, 0)
            k.CloseHandle(worker_h)
        except Exception:
            pass
    try:
        k.CloseHandle(app_h)
    except Exception:
        pass
    if hdesk:
        u.CloseDesktop(hdesk)
    if not restored:
        restore_proxy()
    log("done")
    return 0


if __name__ == "__main__":
    try:
        sys.exit(main())
    except SystemExit:
        raise
    except Exception:
        log("fatal:\n" + traceback.format_exc())
        try:
            restore_proxy()
        except Exception:
            pass
        sys.exit(1)
