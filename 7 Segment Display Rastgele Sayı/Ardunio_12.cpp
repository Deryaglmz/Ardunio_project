int sure = 2000;
byte pin;
byte sayi;
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
  Serial.begin(9600);
}

void loop()
{
  sayi = random(10);
  Serial.println(sayi);
  digitalWrite(A0,0);

  pin = 2;
  for (byte i=0;i<7;i++){
    digitalWrite(pin,gosterge[sayi][i]);
    pin++;
  }
  delay(sure);
}