#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup()
{
  lcd.begin(16,2);
  //lcd.setCursor(4,0);
  lcd.cursor();
  //lcd.blink();
  //lcd.print("Merhaba!");
  lcd.setCursor(4,1);
  lcd.print("Selam");
  //lcd.setCursor(5,1);
  //lcd.print("Biruni");
  //lcd.noCursor();
  //lcd.noBlink();
  //lcd.setCursor(6,0); lcd.print(":");
  //lcd.setCursor(10,0); lcd.print(":");
}

void loop()
{
  //lcd.scrollDisplayLeft();
  //lcd.scrollDisplayRight();
  
  //lcd.setCursor(0,0);
  //lcd.print("Sampiyon GS");
  //lcd.autoscroll();
  //for (byte i=0;i<10;i++){
    //lcd.print(i);
    //delay(200);
  //}
    
  // ----------------
  //lcd.setCursor(5,1);
  //lcd.print("Biruni");
  //delay(500);
  //lcd.clear();
  //lcd.noDisplay();
  //delay(500);
  
  // Saat, Dakika, Saniye Uygulaması
  /*for (byte st=0; st<12; st++){
    lcd.setCursor(4,0);
    lcd.print(st);
    
    for (byte dk=0; dk<60; dk++){
      lcd.setCursor(8,0);
      lcd.print(dk);
      
      for (byte sn=0; sn<60; sn++){
        lcd.setCursor(12,0);
        lcd.print(sn);
        delay(10);
      }
    }
  }*/
}
