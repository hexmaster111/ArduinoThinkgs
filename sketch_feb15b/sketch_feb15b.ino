#include <LiquidCrystal.h>

LiquidCrystal lcd(5, 3, 9, 10, 11, 12);

void setup()
{
  lcd.begin(16,1);
  lcd.print("hello, world!");
}

void loop() {
  lcd.print("hello, world!");
  }
