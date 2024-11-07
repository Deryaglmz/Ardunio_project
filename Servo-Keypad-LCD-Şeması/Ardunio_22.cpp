#include<Servo.h>
#include<Keypad.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x20,16,2);
Servo Motor;
byte i = 0;
char sifre[5] = {'A','1','B','3','\0'};
char gelenSifre[4];
const byte satir = 4;
const byte sutun = 4;
char tuslar[satir][sutun] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte satirPin[satir] = {13,12,11,10};
byte sutunPin[sutun] = {9,8,7,6};

Keypad TUS = Keypad(makeKeymap(tuslar), satirPin, sutunPin, satir, sutun);

void setup()
{
  LCD.init();
  LCD.clear();
  LCD.backlight();
  Motor.attach(A1);
  Motor.write(0);
}

void loop()
{
  char deger = TUS.getKey();
  gelenSifre[i] = deger;
  if(deger != NO_KEY){
    i++;
    LCD.print(deger);
  }
  
  if(i==4){
    i = 0;
    if(sifre[0] == gelenSifre[0] && sifre[1] == gelenSifre[1] && sifre[2] == gelenSifre[2] && sifre[3] == gelenSifre[3]){
      LCD.setCursor(0,1);
      LCD.print("Sifre Dogru!");
      Motor.write(45);
      delay(2000);
      LCD.clear();
    }
    else{
      LCD.setCursor(0,1);
      LCD.print("Sifre Yanlis!");
      delay(2000);
      LCD.clear();
    }
  }
}