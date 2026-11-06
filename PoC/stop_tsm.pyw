"""Restore the Windows proxy and stop this launcher's auth relay."""

import json
import os
import subprocess
import sys
import winreg

HERE = os.path.dirname(os.path.abspath(__file__))
BACKUP = os.path.join(HERE, "proxy_backup.json")
INTERNET_SETTINGS = r"Software\Microsoft\Windows\CurrentVersion\Internet Settings"


def apply(values):
    with winreg.OpenKey(winreg.HKEY_CURRENT_USER, INTERNET_SETTINGS, 0, winreg.KEY_SET_VALUE) as key:
        for name, item in values.items():
            winreg.SetValueEx(key, name, 0, item["type"], item["value"])


def delete(name):
    try:
        with winreg.OpenKey(winreg.HKEY_CURRENT_USER, INTERNET_SETTINGS, 0, winreg.KEY_SET_VALUE) as key:
            winreg.DeleteValue(key, name)
    except OSError:
        pass


def main():
    if os.path.exists(BACKUP):
        try:
            with open(BACKUP, encoding="utf-8") as f:
                saved = json.load(f)
            for name in ("ProxyEnable", "ProxyServer", "ProxyOverride"):
                if name in saved:
                    apply({name: saved[name]})
                else:
                    delete(name)
            if "AutoConfigURL" in saved:
                apply({"AutoConfigURL": saved["AutoConfigURL"]})
            os.remove(BACKUP)
            print("proxy restored")
        except Exception as e:
            print("proxy restore failed:", e)
    else:
        print("no proxy backup found")

    try:
        import ctypes
        wininet = ctypes.WinDLL("wininet")
        wininet.InternetSetOptionW(None, 39, None, 0)
        wininet.InternetSetOptionW(None, 37, None, 0)
    except Exception:
        pass

    # Stop any relay started from this folder.
    try:
        out = subprocess.run(
            ["powershell.exe", "-NoProfile", "-Command",
             "Get-CimInstance Win32_Process -Filter \"Name='mitmdump.exe' or Name='python.exe' or Name='pythonw.exe'\" | "
             "Where-Object { $_.CommandLine -like '*TSM-Auth*auth_addon.py*' } | "
             "ForEach-Object { Stop-Process -Id $_.ProcessId -Force }"],
            capture_output=True, text=True, timeout=30)
        if out.returncode == 0:
            print("auth relay stopped")
    except Exception as e:
        print("relay stop failed:", e)
    return 0


if __name__ == "__main__":
    sys.exit(main())
