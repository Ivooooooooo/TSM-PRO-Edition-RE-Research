import ctypes
import ctypes.wintypes as wt
import os
import struct
import subprocess
import sys
import time

sys.path.insert(0, r"\\Desktop\Sandbox\tools")
import hidden_launch as hl

k32 = hl.k
k32.ReadProcessMemory.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t, ctypes.POINTER(ctypes.c_size_t)]
k32.WriteProcessMemory.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t, ctypes.POINTER(ctypes.c_size_t)]
k32.VirtualProtectEx.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_size_t, wt.DWORD, ctypes.POINTER(wt.DWORD)]
k32.VirtualAllocEx.restype = ctypes.c_void_p
k32.VirtualAllocEx.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_size_t, wt.DWORD, wt.DWORD]

LOGIN_ENTRY = 0x135C684
CONTINUE = 0x135C68F


def rpm(h, addr, n):
    buf = ctypes.create_string_buffer(n)
    got = ctypes.c_size_t(0)
    if not k32.ReadProcessMemory(h, ctypes.c_void_p(addr), buf, n, ctypes.byref(got)):
        return None
    return buf.raw[: got.value]


def wpm(h, addr, data):
    old = wt.DWORD(0)
    k32.VirtualProtectEx(h, ctypes.c_void_p(addr), len(data), 0x40, ctypes.byref(old))
    w = ctypes.c_size_t(0)
    k32.WriteProcessMemory(h, ctypes.c_void_p(addr), data, len(data), ctypes.byref(w))
    return w.value


def qba(h, addr, label):
    raw = rpm(h, addr, 4)
    if not raw or len(raw) < 4:
        print(label, "unreadable"); return
    d = struct.unpack("<I", raw)[0]
    if d == 0:
        print(label, "null"); return
    hdr = rpm(h, d, 16)
    if not hdr or len(hdr) < 16:
        print(label, "bad d"); return
    ref, size, alloc, offset = struct.unpack("<iiII", hdr)
    data = rpm(h, d + offset, min(max(size, 0), 512))
    print(f"{label} d={d:#x} size={size} data={data!r}", flush=True)


def set_proxy(enable, server="127.0.0.1:8080"):
    import winreg
    k = winreg.OpenKey(winreg.HKEY_CURRENT_USER, r"Software\Microsoft\Windows\CurrentVersion\Internet Settings", 0, winreg.KEY_SET_VALUE)
    winreg.SetValueEx(k, "ProxyEnable", 0, winreg.REG_DWORD, 1 if enable else 0)
    if enable:
        winreg.SetValueEx(k, "ProxyServer", 0, winreg.REG_SZ, server)
        winreg.SetValueEx(k, "ProxyOverride", 0, winreg.REG_SZ, "<local>")
    winreg.CloseKey(k)


def main():
    md = r"\\AppData\Local\Programs\Python\Python313\Scripts\mitmdump.exe"
    conf = r"\\Desktop\Sandbox\malware-lab\mitmconf"
    proxy = subprocess.Popen([md, "--listen-host", "127.0.0.1", "--listen-port", "8080",
                              "-s", r"\\Desktop\Sandbox\tools\fake_login_crypto.py",
                              "--set", f"confdir={conf}", "-q"],
                             stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    time.sleep(4)

    name = "TSMExfil2"
    hdesk = hl.u.CreateDesktopW(name, None, None, 0, 0x000F01FF, None)
    pid, ph = hl.launch(name, r'"\\Desktop\Sandbox\host-run\TSM-PRO-Edition.exe"',
                        r"\\Desktop\Sandbox\host-run")
    print("pid", pid, flush=True)
    time.sleep(15)
    h = k32.OpenProcess(0x1F0FFF, False, pid)
    mem = k32.VirtualAllocEx(h, None, 0x2000, 0x3000, 0x40)
    stub = int(mem)
    scratch = stub + 0x1000

    code = bytearray()
    code += b"\x89\x0d" + struct.pack("<I", scratch)
    code += bytes.fromhex("5589e55756538d75d089cf")
    rel = CONTINUE - (stub + len(code) + 5)
    code += b"\xe9" + struct.pack("<i", rel)
    wpm(h, stub, bytes(code))

    rel2 = stub - (LOGIN_ENTRY + 5)
    wpm(h, LOGIN_ENTRY, b"\xe9" + struct.pack("<i", rel2) + b"\x90" * 10)

    set_proxy(True)
    time.sleep(1)
    wrk_pid, wrk_h = hl.launch(name, r'powershell.exe -NoProfile -ExecutionPolicy Bypass -File "\\Desktop\Sandbox\host-run\ui_worker.ps1"',
                               r"\\Desktop\Sandbox\host-run")

    this = 0
    for _ in range(300):
        raw = rpm(h, scratch, 4)
        if raw and len(raw) == 4:
            v = struct.unpack("<I", raw)[0]
            if v:
                this = v
                break
        time.sleep(0.05)
    print("this", hex(this), flush=True)
    time.sleep(10)
    if this:
        for off in (8, 0xc, 0x10, 0x14, 0x5c, 0x64):
            qba(h, this + off, f"+{off:#x}")
        import struct as _s
        b = rpm(h, this + 0x48, 1)
        print("flag +0x48 =", b.hex() if b else None, flush=True)
        b2 = rpm(h, this + 0x49, 1)
        print("byte +0x49 =", b2.hex() if b2 else None, flush=True)

    set_proxy(False)
    proxy.terminate()
    hl.k.TerminateProcess(ph, 0)
    hl.k.TerminateProcess(wrk_h, 0)
    hl.k.CloseHandle(ph)
    hl.k.CloseHandle(wrk_h)
    hl.u.CloseDesktop(hdesk)


main()
