#include<Keypad.h>
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
  Serial.begin(9600);
}

void loop()
{
  char deger = TUS.getKey();
  if(deger != NO_KEY)
  	Serial.println(deger);
}