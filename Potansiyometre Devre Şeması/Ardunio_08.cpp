#define potPin A0
int deger;
void setup()
{
  Serial.begin(9600);
  Serial.println("Baglanti Saglandi");
}
void loop()
{
  deger = analogRead(potPin);
  Serial.print("Analog: ");
  Serial.print(deger);
  deger = map(deger,0,1023,0,255);
  Serial.print("   Digital: ");
  Serial.print(deger);
  Serial.println("");
  delay(1000);
}

// PWM (Sinyal Genişlik Modülasyonu)
// map(deger,0,1023,0,255);