int sure = 500;
byte ledPin = 12;

void setup()
{
  pinMode(ledPin,OUTPUT);
}

void loop()
{
  digitalWrite(ledPin,HIGH);
  delay(sure);
  digitalWrite(ledPin,LOW);
  delay(sure);
}