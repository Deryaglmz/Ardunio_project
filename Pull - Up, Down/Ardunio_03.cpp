byte ledPin = 8;
byte butonPin = 2;
byte ledDurum = 0;
byte butonDurum = 0;
byte durum = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(butonPin, INPUT);
}

void loop()
{
  butonDurum = digitalRead(butonPin);
  
  if (butonDurum == 1 && durum == 0)
  {
    durum = 1;
    if (ledDurum == 0)
      ledDurum = 1;
    else
      ledDurum = 0;
  }

  if (ledDurum == 1)
    digitalWrite(ledPin, HIGH);
  else
    digitalWrite(ledPin, LOW);
  
  if (butonDurum == 0 && durum == 1)
    durum = 0;
}
