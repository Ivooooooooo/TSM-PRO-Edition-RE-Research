import ctypes
import ctypes.wintypes as wt
import os
import struct
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
k32.CreateRemoteThread.restype = wt.HANDLE
k32.CreateRemoteThread.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_size_t, ctypes.c_void_p, ctypes.c_void_p, wt.DWORD, ctypes.c_void_p]
k32.WaitForSingleObject.argtypes = [wt.HANDLE, wt.DWORD]

TRANSFORM = 0x135E8F8
VTABLE = 0x760BC04


class MBI(ctypes.Structure):
    _fields_ = [("BaseAddress", ctypes.c_void_p), ("AllocationBase", ctypes.c_void_p),
                ("AllocationProtect", wt.DWORD), ("PartitionId", wt.WORD), ("RegionSize", ctypes.c_size_t),
                ("State", wt.DWORD), ("Protect", wt.DWORD), ("Type", wt.DWORD)]


MEM_COMMIT = 0x1000
READABLE = {0x02, 0x04, 0x08, 0x20, 0x40, 0x80}


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


def find_object(h):
    addr = 0
    while addr < 0x7FFFFFFF:
        mbi = MBI()
        if not k32.VirtualQueryEx(h, ctypes.c_void_p(addr), ctypes.byref(mbi), ctypes.sizeof(mbi)):
            break
        base = mbi.BaseAddress or 0
        size = mbi.RegionSize
        if mbi.State == MEM_COMMIT and mbi.Type == 0x20000 and (mbi.Protect & 0xFF) in (0x04, 0x40) and 0 < size <= 0x4000000:
            data = rpm(h, base, size)
            if data:
                pat = struct.pack("<I", VTABLE)
                i = data.find(pat)
                while i >= 0:
                    # vtable at offset 0 of object; require readable + plausible dwords
                    if i + 8 <= len(data):
                        return base + i
                    i = data.find(pat, i + 1)
        addr = base + size
        if addr <= 0:
            break
    return None


def read_qba(h, ptr):
    raw = rpm(h, ptr, 4)
    if not raw or len(raw) < 4:
        return None
    d = struct.unpack("<I", raw)[0]
    if d == 0:
        return b""
    hdr = rpm(h, d, 16)
    if not hdr or len(hdr) < 16:
        return None
    ref, size, alloc, offset = struct.unpack("<iiII", hdr)
    if size < 0 or size > 4096:
        return None
    return rpm(h, d + offset, size)


def main():
    name = "TSMTf"
    hdesk = hl.u.CreateDesktopW(name, None, None, 0, 0x000F01FF, None)
    pid, ph = hl.launch(name, r'"\\Desktop\Sandbox\host-run\TSM-PRO-Edition.exe"',
                        r"\\Desktop\Sandbox\host-run")
    print("pid", pid, flush=True)
    time.sleep(16)
    h = k32.OpenProcess(0x1F0FFF, False, pid)
    obj = find_object(h)
    print("server obj", hex(obj) if obj else None, flush=True)
    if not obj:
        hl.k.TerminateProcess(ph, 0); hl.k.CloseHandle(ph); hl.u.CloseDesktop(hdesk); return

    mem = int(k32.VirtualAllocEx(h, None, 0x2000, 0x3000, 0x40))
    stub = mem
    out_obj = mem + 0x100

    for off in (8, 0xC, 0x10, 0x14):
        wpm(h, out_obj, b"\x00" * 8)
        code = bytearray()
        code += b"\xb9" + struct.pack("<I", out_obj)          # mov ecx,out
        code += b"\x68" + struct.pack("<I", obj + off)         # push arg
        code += b"\x68" + struct.pack("<I", 0x400000)           # push this (dummy)
        rel = TRANSFORM - (stub + len(code) + 5)
        code += b"\xe8" + struct.pack("<i", rel)               # call transform
        code += b"\xc3"
        wpm(h, stub, bytes(code))
        th = k32.CreateRemoteThread(h, None, 0, ctypes.c_void_p(stub), None, 0, None)
        if th:
            k32.WaitForSingleObject(th, 5000)
            k32.CloseHandle(th)
        q = read_qba(h, out_obj)
        print(f"+{off:#x} -> {q!r}", flush=True)

    hl.k.TerminateProcess(ph, 0)
    hl.k.CloseHandle(ph)
    hl.u.CloseDesktop(hdesk)


main()
