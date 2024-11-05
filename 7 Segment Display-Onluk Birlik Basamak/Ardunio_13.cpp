int sure = 500;
byte pin, onluk, birlik;
byte basamak[] = {11,12};

// a,b,c,d,e,f,g
byte gosterge[10][7] = {
  {1,1,1,1,1,1,0}, // 0
  {0,1,1,0,0,0,0}, // 1
  {1,1,0,1,1,0,1}, // 2
  {1,1,1,1,0,0,1}, // 3
  {0,1,1,0,0,1,1}, // 4
  {1,0,1,1,0,1,1}, // 5
  {1,0,1,1,1,1,1}, // 6
  {1,1,1,0,0,0,0}, // 7
  {1,1,1,1,1,1,1}, // 8
  {1,1,1,1,0,1,1} // 9
};
void setup()
{
  for(byte i=2;i<=8;i++)
    pinMode(i,OUTPUT);
  pinMode(basamak[0], OUTPUT);
  pinMode(basamak[1], OUTPUT);
}

void loop()
{
  //for(byte sayi=0;sayi<100;sayi++){
    byte sayi = 57
    onluk = sayi/10; 
    birlik = sayi%10;
    digitalWrite(basamak[0],HIGH);
    digitalWrite(basamak[1],LOW);
    pin = 2;
    for (byte i=0;i<7;i++){
      digitalWrite(pin,gosterge[birlik][i]);
      pin++;
    }
    delay(sure);
  }
  