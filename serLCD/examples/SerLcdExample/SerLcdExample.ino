/*
  serLCD - Hello World Example
*/
#include <NewSoftSerial.h>
#include <serLCD.h>
 
// Set pin to the LCD's rxPin
int pin = 2;
 
serLCD lcd(pin);
 
void setup()
{
  lcd.print("hello, world!");
}
 
void loop() {}
