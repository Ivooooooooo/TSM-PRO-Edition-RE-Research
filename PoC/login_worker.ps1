param(
  [string]$OutDir = "$PSScriptRoot\logs"
)
$ErrorActionPreference = 'Continue'
New-Item -ItemType Directory -Force -Path $OutDir | Out-Null
$status = Join-Path $OutDir 'login_status.txt'
function Say($t) { $t | Out-File $status -Append -Encoding utf8 }

Add-Type @"
using System;
using System.Text;
using System.Runtime.InteropServices;
public class TsmW {
  public delegate bool EnumWindowsProc(IntPtr hWnd, IntPtr lParam);
  [DllImport("user32.dll")] public static extern bool EnumWindows(EnumWindowsProc cb, IntPtr lParam);
  [DllImport("user32.dll", CharSet=CharSet.Unicode)] public static extern int GetWindowText(IntPtr h, StringBuilder s, int n);
  [DllImport("user32.dll")] public static extern uint GetWindowThreadProcessId(IntPtr h, out uint pid);
  [DllImport("user32.dll")] public static extern bool IsWindowVisible(IntPtr h);
  public static string Text(IntPtr h){ var s=new StringBuilder(2048); GetWindowText(h,s,2048); return s.ToString(); }
}
"@

Say "worker start"
$hwnd = [IntPtr]::Zero
for ($j = 0; $j -lt 180; $j++) {
  $script:hwnd = [IntPtr]::Zero
  $cb = [TsmW+EnumWindowsProc]{ param($hh,$ll)
      if (([TsmW]::Text($hh)) -like '*TSM PRO EDITION*' -and [TsmW]::IsWindowVisible($hh)) { $script:hwnd = $hh }
      return $true }
  [TsmW]::EnumWindows($cb, [IntPtr]::Zero) | Out-Null
  if ($hwnd -ne [IntPtr]::Zero) { break }
  Start-Sleep -Milliseconds 500
}
if ($hwnd -eq [IntPtr]::Zero) { Say 'no window'; exit 1 }
Say "hwnd=$hwnd"

Add-Type -AssemblyName UIAutomationClient
Add-Type -AssemblyName UIAutomationTypes

function Get-All($root) {
  return $root.FindAll([System.Windows.Automation.TreeScope]::Descendants, [System.Windows.Automation.Condition]::TrueCondition)
}

$root = [System.Windows.Automation.AutomationElement]::FromHandle($hwnd)
$edits = New-Object System.Collections.Generic.List[object]
$login = $null
foreach ($e in (Get-All $root)) {
  try {
    $ct = $e.Current.ControlType.ProgrammaticName
    if ($ct -eq 'ControlType.Edit') { $edits.Add($e) }
    if ($ct -eq 'ControlType.Button' -and $e.Current.Name -like 'Login*') { $login = $e }
  } catch {}
}
Say "edits=$($edits.Count) login=$($login -ne $null)"
if ($edits.Count -ge 2) {
  try { $edits[0].GetCurrentPattern([System.Windows.Automation.ValuePattern]::Pattern).SetValue('user@example.com') } catch { Say "e0 $($_.Exception.Message)" }
  try { $edits[1].GetCurrentPattern([System.Windows.Automation.ValuePattern]::Pattern).SetValue('AnyPassword1') } catch { Say "e1 $($_.Exception.Message)" }
}
if ($login) { try { $login.GetCurrentPattern([System.Windows.Automation.InvokePattern]::Pattern).Invoke(); Say 'login clicked' } catch { Say "invoke err $($_.Exception.Message)" } }

# Wait for the main page (login group disappears / "Meta Task" appears).
$ok = $false
for ($i = 0; $i -lt 120; $i++) {
  Start-Sleep -Milliseconds 500
  try {
    $names = @()
    foreach ($e in (Get-All $root)) { try { $n = $e.Current.Name; if ($n) { $names += $n } } catch {} }
    if (($names -join "`n") -match 'Meta Task' -or (($names -join "`n") -notmatch 'Login User Interface')) { $ok = $true; break }
  } catch {}
}
Say "main=$ok after $i"

try {
  $ui = New-Object System.Collections.Generic.List[string]
  foreach ($e in (Get-All $root)) {
    try { $n = $e.Current.Name; if ($n) { $ui.Add(("UI " + $e.Current.ControlType.ProgrammaticName + " name=" + $n)) } } catch {}
  }
  $ui | Out-File (Join-Path $OutDir 'ui_after.txt') -Encoding utf8
} catch {}
Say 'worker exit'
if ($ok) { exit 0 } else { exit 2 }
