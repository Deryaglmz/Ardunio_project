int sure = 500;
byte pin;
int sayac = 0;
byte butonPin_arti = 10;
byte butonPin_eksi = 11;
byte arti, eksi;
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
  pinMode(A0, OUTPUT);
  pinMode(butonPin_arti, INPUT);
  pinMode(butonPin_eksi, INPUT);
  Serial.begin(9600);
}

void loop()
{ 
  arti = digitalRead(butonPin_arti);
  eksi = digitalRead(butonPin_eksi);
  pin = 2;
  if (arti == 1){
    sayac++;
    if (sayac>9)
      sayac = 0;
    for(byte i=0;i<7;i++){
      digitalWrite(pin,gosterge[sayac][i]);
      pin++;
    }
    Serial.print(sayac);
    Serial.print("  ");
    delay(sure);
  }
  
  if (eksi == 1){
    sayac--;
    if (sayac<0)
      sayac = 9;
    for(byte i=0;i<7;i++){
      digitalWrite(pin,gosterge[sayac][i]);
      pin++;
    }
    Serial.print(sayac);
    Serial.print("  ");
    delay(sure);
  }
}

// random(100); 100'e kadar rastgele sayı
// random (40,80); 40 ile 80 arasında rastgele sayı 