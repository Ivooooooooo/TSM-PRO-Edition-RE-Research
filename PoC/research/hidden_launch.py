import ctypes
import ctypes.wintypes as wt
import os
import subprocess
import sys
import time

sys.stdout.reconfigure(encoding="utf-8", errors="replace")

u = ctypes.WinDLL("user32", use_last_error=True)
k = ctypes.WinDLL("kernel32", use_last_error=True)

u.CreateDesktopW.restype = wt.HANDLE
u.CreateDesktopW.argtypes = [wt.LPCWSTR, wt.LPCWSTR, ctypes.c_void_p, wt.DWORD, wt.DWORD, ctypes.c_void_p]
u.CloseDesktop.argtypes = [wt.HANDLE]

k.CreateProcessW.restype = wt.BOOL
k.CreateProcessW.argtypes = [wt.LPCWSTR, wt.LPWSTR, ctypes.c_void_p, ctypes.c_void_p, wt.BOOL,
                             wt.DWORD, ctypes.c_void_p, wt.LPCWSTR, ctypes.c_void_p, ctypes.c_void_p]
k.TerminateProcess.argtypes = [wt.HANDLE, wt.UINT]
k.CloseHandle.argtypes = [wt.HANDLE]


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


def launch(desktop, cmdline, cwd):
    si = STARTUPINFO()
    si.cb = ctypes.sizeof(STARTUPINFO)
    si.lpDesktop = desktop
    si.dwFlags = 0x1
    si.wShowWindow = 0
    pi = PROCESS_INFORMATION()
    buf = ctypes.create_unicode_buffer(cmdline)
    if not k.CreateProcessW(None, buf, None, None, False, 0, None, cwd, ctypes.byref(si), ctypes.byref(pi)):
        raise ctypes.WinError(ctypes.get_last_error())
    k.CloseHandle(pi.hThread)
    return pi.dwProcessId, pi.hProcess


def main():
    name = "TSMHidden"
    hdesk = u.CreateDesktopW(name, None, None, 0, 0x000F01FF, None)
    if not hdesk:
        raise ctypes.WinError(ctypes.get_last_error())
    print("desktop", name, hdesk, flush=True)

    out = r"\\Desktop\Sandbox\host-run\hiddendesktop"
    os.makedirs(out, exist_ok=True)
    status = os.path.join(out, "status.txt")
    if os.path.exists(status):
        os.remove(status)

    app_pid, app_h = launch(name, r'"\\Desktop\Sandbox\host-run\TSM-PRO-Edition.exe"',
                            r"\\Desktop\Sandbox\host-run")
    print("app pid", app_pid, flush=True)
    time.sleep(1)
    wrk_pid, wrk_h = launch(name, r'powershell.exe -NoProfile -ExecutionPolicy Bypass -File "\\Desktop\Sandbox\host-run\ui_worker.ps1"',
                            r"\\Desktop\Sandbox\host-run")
    print("worker pid", wrk_pid, flush=True)

    clicked = False
    for _ in range(180):
        if os.path.exists(status):
            try:
                txt = open(status, encoding="utf-8-sig", errors="replace").read()
            except Exception:
                txt = ""
            if "invoked" in txt or "no window" in txt or "invoke err" in txt:
                clicked = True
                break
        time.sleep(1)
    print("status:\n" + open(status, encoding="utf-8-sig", errors="replace").read() if os.path.exists(status) else "no status", flush=True)

    time.sleep(15)
    scan = os.path.join(out, "scan.txt")
    if os.path.exists(scan):
        os.remove(scan)
    r = subprocess.run([sys.executable, r"\\Desktop\Sandbox\tools\memscan.py", str(app_pid), scan,
                        os.path.join(out, "regions"), '"Serial":"', "'Token'", "registered", "RES_DEC",
                        "RES_ENC", "enc_hdr", "enc_data"],
                       capture_output=True, text=True, timeout=300)
    print("memscan rc", r.returncode, r.stdout.strip(), r.stderr.strip(), flush=True)

    k.TerminateProcess(app_h, 0)
    k.TerminateProcess(wrk_h, 0)
    k.CloseHandle(app_h)
    k.CloseHandle(wrk_h)
    u.CloseDesktop(hdesk)


if __name__ == "__main__":
    main()
