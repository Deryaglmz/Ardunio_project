byte ledPin = 8;
byte butonPin = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(butonPin, INPUT);
}

void loop()
{
  if (digitalRead(butonPin) == HIGH)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
}