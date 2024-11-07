byte pir = 5;
byte oku;
byte led = 6;
int sure = 500;
//byte durum = 0;
bool durum = false;
void setup()
{
  pinMode(pir, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  oku = digitalRead(pir);
  if (oku == HIGH && !durum){
    digitalWrite(led, HIGH);
    Serial.println("Hareket Algilandi");
    durum = true;
  	delay(sure);
  }
  else if (oku == LOW && durum){
    digitalWrite(led, LOW);
    Serial.println("Hareket Sonlandi");
    durum = false;
    delay(sure);
  }
}
  