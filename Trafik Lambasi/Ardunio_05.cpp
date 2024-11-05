byte kirmizi = 8;
byte sari = 9;
byte yesil = 10;

void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(yesil, OUTPUT);
}

void loop()
{
  digitalWrite(kirmizi, HIGH);
  delay(1000); 
  
  digitalWrite(sari, HIGH);
  digitalWrite(kirmizi, LOW);
  delay(1000); 
  
  digitalWrite(sari, LOW);
  digitalWrite(yesil, HIGH);
  delay(1000);
  
  digitalWrite(yesil, LOW);
}