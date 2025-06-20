$scriptPath = Get-Location
$toolsPath = Join-Path $scriptPath "tools"
$pboIncludePath = Join-Path $scriptPath "pbo_include"
$hemttOutPath = Join-Path $scriptPath ".hemttout\release\addons"

Start-Process -FilePath "$toolsPath\hemtt" -ArgumentList "release" -WorkingDirectory $scriptPath -Wait

Copy-Item -Path "$pboIncludePath\*" -Destination $hemttOutPath -Recurse -Force

Write-Host "Files copied successfully!"