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
k32.OpenProcess.restype = wt.HANDLE
k32.OpenProcess.argtypes = [wt.DWORD, wt.BOOL, wt.DWORD]
k32.VirtualQueryEx.restype = ctypes.c_size_t
k32.VirtualQueryEx.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t]

VTABLE = 0x760BC04
FLAG_STORE = 0x135D1E8
FORCE_CALL = 0x135DEE8
MEM_COMMIT = 0x1000


class MBI(ctypes.Structure):
    _fields_ = [("BaseAddress", ctypes.c_void_p), ("AllocationBase", ctypes.c_void_p),
                ("AllocationProtect", wt.DWORD), ("PartitionId", wt.WORD), ("RegionSize", ctypes.c_size_t),
                ("State", wt.DWORD), ("Protect", wt.DWORD), ("Type", wt.DWORD)]


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


def find_objects(h):
    out = []
    addr = 0
    pat = struct.pack("<I", VTABLE)
    while addr < 0x7FFFFFFF:
        mbi = MBI()
        if not k32.VirtualQueryEx(h, ctypes.c_void_p(addr), ctypes.byref(mbi), ctypes.sizeof(mbi)):
            break
        base = mbi.BaseAddress or 0
        size = mbi.RegionSize
        if mbi.State == MEM_COMMIT and mbi.Type == 0x20000 and (mbi.Protect & 0xFF) in (0x04, 0x40) and 0 < size <= 0x4000000:
            data = rpm(h, base, size)
            if data:
                i = data.find(pat)
                while i >= 0:
                    if i + 0x60 <= len(data):
                        out.append(base + i)
                    i = data.find(pat, i + 1)
        addr = base + size
        if addr <= 0:
            break
    return out


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

    name = "TSMProbe"
    hdesk = hl.u.CreateDesktopW(name, None, None, 0, 0x000F01FF, None)
    pid, ph = hl.launch(name, r'"\\Desktop\Sandbox\host-run\TSM-PRO-Edition.exe"',
                        r"\\Desktop\Sandbox\host-run")
    print("pid", pid, flush=True)
    time.sleep(18)
    h = k32.OpenProcess(0x1F0FFF, False, pid)
    print("flag store patch", wpm(h, FLAG_STORE, bytes.fromhex("c6474801")), flush=True)
    print("je patch", wpm(h, FORCE_CALL, b"\x90\x90"), flush=True)

    set_proxy(True)
    time.sleep(1)
    wrk_pid, wrk_h = hl.launch(name, r'powershell.exe -NoProfile -ExecutionPolicy Bypass -File "\\Desktop\Sandbox\host-run\ui_worker.ps1"',
                               r"\\Desktop\Sandbox\host-run")

    for wait in (6, 10, 15):
        time.sleep(wait)
        objs = find_objects(h)
        print(f"objects={len(objs)}", flush=True)
        for o in objs[:5]:
            f = rpm(h, o + 0x48, 1)
            b1c = rpm(h, o + 0x1c, 1)
            d = rpm(h, o + 0x0C, 4)
            print("  ", hex(o), "flag48", f.hex() if f else None, "b1c", b1c.hex() if b1c else None,
                  "f0c", d.hex() if d else None, flush=True)

    set_proxy(False)
    proxy.terminate()
    hl.k.TerminateProcess(ph, 0)
    hl.k.TerminateProcess(wrk_h, 0)
    hl.k.CloseHandle(ph)
    hl.k.CloseHandle(wrk_h)
    hl.u.CloseDesktop(hdesk)


main()
