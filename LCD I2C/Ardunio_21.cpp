#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x20,16,2);

void setup()
{
  LCD.init();
  LCD.clear();
  LCD.backlight();
  LCD.setCursor(0,0);
  LCD.print("Merhaba");
  //delay(1000);
  //LCD.clear();
  LCD.setCursor(0,1);
  LCD.print("Sinif");
  delay(1000);
}

void loop()
{
  
}