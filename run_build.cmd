@echo off
setlocal
set SCRIPT_DIR=%~dp0
set LOG_DIR=%SCRIPT_DIR%logs
if not exist "%LOG_DIR%" mkdir "%LOG_DIR%"
set LOG_FILE=%LOG_DIR%\build_%DATE:~-4,4%%DATE:~-10,2%%DATE:~-7,2%_%TIME:~0,2%%TIME:~3,2%%TIME:~6,2%.log
set LOG_FILE=%LOG_FILE: =0%

echo Running build.ps1... (logging to %LOG_FILE%)
powershell.exe -NoProfile -ExecutionPolicy Bypass -NoLogo -File "%SCRIPT_DIR%build.ps1" *>> "%LOG_FILE%" 2>&1
echo.
echo Exit code: %ERRORLEVEL%
echo Log: %LOG_FILE%
pause
