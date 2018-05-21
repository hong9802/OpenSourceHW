#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int JoyX = 0;
int JoyY = 1;
int value1 = 0;
int value2 = 0;
LiquidCrystal_I2C lcd(0x27,16,2);
void setup()
{
  lcd.init();
  lcd.backlight();
}
void loop()
{
  lcd.clear();
  value1 = analogRead(JoyX);
  value2 = analogRead(JoyY);
  lcd.setCursor(0, 0);
  lcd.print("Joy X : ");
  lcd.setCursor(8, 0);
  lcd.print(value1);
  lcd.setCursor(0, 1);
  lcd.print("Joy Y : ");
  lcd.setCursor(8, 1);
  lcd.print(value2);
  delay(500);
}
