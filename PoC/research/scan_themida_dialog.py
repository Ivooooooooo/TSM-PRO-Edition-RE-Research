import ctypes
import ctypes.wintypes as wt
import os
import subprocess
import sys
import time

sys.stdout.reconfigure(encoding="utf-8", errors="replace")

HERE = os.path.dirname(os.path.abspath(__file__))
AUTH = os.path.abspath(os.path.join(HERE, "..", "TSM-Auth"))
LOG = os.path.join(AUTH, "logs")
LAUNCHER = os.path.join(AUTH, "launch_tsm.pyw")

k32 = ctypes.WinDLL("kernel32", use_last_error=True)
k32.OpenProcess.restype = wt.HANDLE
k32.OpenProcess.argtypes = [wt.DWORD, wt.BOOL, wt.DWORD]
k32.ReadProcessMemory.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t, ctypes.POINTER(ctypes.c_size_t)]
k32.VirtualQueryEx.restype = ctypes.c_size_t
k32.VirtualQueryEx.argtypes = [wt.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t]


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


def read(path):
    try:
        with open(path, encoding="utf-8-sig", errors="replace") as f:
            return f.read()
    except OSError:
        return ""


def scan(pid, needles):
    h = k32.OpenProcess(0x0410, False, pid)
    if not h:
        print("open failed", ctypes.get_last_error())
        return
    res = {n: [] for n in needles}
    addr = 0
    while addr < 0x7FFFFFFF:
        mbi = MBI()
        if not k32.VirtualQueryEx(h, ctypes.c_void_p(addr), ctypes.byref(mbi), ctypes.sizeof(mbi)):
            break
        base = mbi.BaseAddress or 0
        size = mbi.RegionSize
        if mbi.State == 0x1000 and (mbi.Protect & 0xFF) not in (0x01, 0x00) and 0 < size <= 0x8000000:
            data = rpm(h, base, size)
            if data:
                for n in needles:
                    i = 0
                    while True:
                        j = data.find(n, i)
                        if j < 0:
                            break
                        res[n].append((base + j, data[max(0, j - 32): j + 120]))
                        i = j + 1
        addr = base + size
        if addr <= 0:
            break
    k32.CloseHandle(h)
    for n in needles:
        print(n, "count", len(res[n]))
        for a, ctx in res[n][:6]:
            print("  ", hex(a), ctx)


def main():
    for fn in ("login_status.txt", "login_served.txt", "requests.log", "launcher.log"):
        try:
            os.remove(os.path.join(LOG, fn))
        except OSError:
            pass
    launcher = subprocess.Popen(
        [sys.executable, LAUNCHER, "--hidden", "--compat-invoker", "--patch-themida", "--no-models"],
        cwd=AUTH, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL,
    )
    print("launcher", launcher.pid, flush=True)
    pid = None
    end = time.time() + 60
    while time.time() < end:
        txt = read(os.path.join(LOG, "launcher.log"))
        for line in txt.splitlines():
            if "app pid" in line:
                try:
                    pid = int(line.split("app pid")[-1].strip())
                except ValueError:
                    pass
        if pid and "login worker pid" in txt:
            break
        if "app exited early" in txt:
            break
        time.sleep(1)
    print("app pid", pid, flush=True)
    print(read(os.path.join(LOG, "launcher.log"))[-1500:], flush=True)
    if not pid:
        return 1
    time.sleep(4)
    needles = [
        "File corrupted".encode("utf-16le"),
        "manipulated".encode("utf-16le"),
        "infected by a Virus".encode("utf-16le"),
        "won't work anymore".encode("utf-16le"),
        b"File corrupted",
        b"manipulated",
    ]
    scan(pid, needles)
    try:
        subprocess.run(["powershell.exe", "-NoProfile", "-Command",
                        "Get-Process -Name 'TSM-PRO-Edition' -ErrorAction SilentlyContinue | Stop-Process -Force"],
                       capture_output=True, text=True, timeout=30)
    except Exception:
        pass
    try:
        launcher.wait(timeout=20)
    except subprocess.TimeoutExpired:
        launcher.terminate()
    try:
        subprocess.run([sys.executable, os.path.join(AUTH, "stop_tsm.pyw")],
                       capture_output=True, text=True, timeout=60)
    except Exception:
        pass
    return 0


main()
