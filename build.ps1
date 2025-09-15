$ErrorActionPreference = 'Stop'

function Pause-If-FromExplorer {
    try {
        $ppid = (Get-CimInstance Win32_Process -Filter "ProcessId = $PID").ParentProcessId
        $parent = Get-Process -Id $ppid -ErrorAction SilentlyContinue
        if ($parent -and $parent.ProcessName -in @('explorer', 'Explorer')) {
            Write-Host ''
            Read-Host 'Press Enter to close this window'
        }
    } catch { }
}

$scriptRoot = $PSScriptRoot
if (-not $scriptRoot) { $scriptRoot = Split-Path -Parent $MyInvocation.MyCommand.Path }

$logDir = Join-Path $scriptRoot 'logs'
if (-not (Test-Path $logDir)) { New-Item -ItemType Directory -Path $logDir | Out-Null }
$stamp = Get-Date -Format 'yyyyMMdd_HHmmss'
$logFile = Join-Path $logDir "build_$stamp.txt"

try {
    Start-Transcript -Path $logFile -Append -ErrorAction SilentlyContinue | Out-Null

    Write-Host "PS: $($PSVersionTable.PSEdition) $($PSVersionTable.PSVersion)"
    Write-Host "Arch: $env:PROCESSOR_ARCHITECTURE"
    Write-Host "ScriptRoot: $scriptRoot"

    $toolsPath      = Join-Path $scriptRoot 'tools'
    $pboIncludePath = Join-Path $scriptRoot 'pbo_include'
    $hemttExe       = Join-Path $toolsPath 'hemtt.exe'
    $hemttOutPath   = Join-Path $scriptRoot '.hemttout\build\addons'

    Write-Host "HEMTT: $hemttExe"
    Write-Host "Include: $pboIncludePath"
    Write-Host "Out: $hemttOutPath"

    if (-not (Test-Path $hemttExe)) { throw "HEMTT not found at $hemttExe." }
    if (-not (Test-Path $pboIncludePath)) { throw "Include path not found: $pboIncludePath." }

    try { Unblock-File -Path $hemttExe -ErrorAction SilentlyContinue } catch {}

    $proc = Start-Process -FilePath $hemttExe `
        -ArgumentList "build --no-bin" `
        -WorkingDirectory $scriptRoot `
        -NoNewWindow -Wait -PassThru
    if ($null -ne $proc.ExitCode -and $proc.ExitCode -ne 0) {
        throw "HEMTT failed with exit code $($proc.ExitCode)."
    }

    if (-not (Test-Path $hemttOutPath)) {
        New-Item -ItemType Directory -Path $hemttOutPath -Force | Out-Null
    }

    Copy-Item -Path (Join-Path $pboIncludePath '*') -Destination $hemttOutPath -Recurse -Force -Verbose

    Write-Host "Files copied successfully!"
}
catch {
    Write-Host "ERROR:"
    $_ | Format-List * -Force
    if ($_.InvocationInfo) {
        Write-Host "At: $($_.InvocationInfo.ScriptName):$($_.InvocationInfo.ScriptLineNumber)"
        Write-Host "Line: $($_.InvocationInfo.Line.Trim())"
    }
    exit 1
}
finally {
    try { Stop-Transcript | Out-Null } catch {}
    Pause-If-FromExplorer
}
