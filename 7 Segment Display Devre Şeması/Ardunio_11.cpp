int sure = 1000;
byte pin;
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
}

void loop()
{
  for(byte i=0;i<10;i++){ // 0-9 rakamları
    pin = 2;
    for(byte j=0;j<7;j++){
      digitalWrite(pin,gosterge[i][j]);
      pin++;
    }
    delay(sure);
  }
}