byte ledPin[] = {2, 3, 4, 5};
byte i;
int sure = 500;

void Binary(byte sayi)
{
  i = 0;
  byte dizi[4] = {0,0,0,0};
  while(sayi>=1)
  {
    dizi[i] = sayi % 2;
    sayi = sayi / 2;
    i++;
  }
  for (byte j = 0; j < 4; j++)
  {
    digitalWrite(ledPin[j], dizi[j]);
  }
  delay(sure);
  for (byte j = 0; j < 4; j++)
  {
    digitalWrite(ledPin[j], LOW);
  }
  }
                 
void setup() 
{
  for (byte i = 0; i < 4; i++)
    pinMode(ledPin[i], OUTPUT);
  }

void loop()
{
  for (byte j = 1; j < 16; j++)
  {
    Binary(j);
    delay(sure);
  }
}
