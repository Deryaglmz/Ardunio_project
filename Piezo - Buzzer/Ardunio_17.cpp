byte buzzer = 3;
int sure = 500;
void setup()
{
  pinMode(buzzer,OUTPUT);
}

void loop()
{
  digitalWrite(buzzer, HIGH);
  delay(sure);
  digitalWrite(buzzer, LOW);
  delay(sure);
}