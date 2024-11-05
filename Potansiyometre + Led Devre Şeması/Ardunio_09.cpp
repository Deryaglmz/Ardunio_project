#define potPin A1
#define kLed 3
#define mLed 4
int deger;
void setup()
{
  Serial.begin(9600);
  Serial.println("Baglanti Saglandi");
  pinMode(kLed, OUTPUT);
  pinMode(mLed, OUTPUT);
}
void loop()
{
  deger = analogRead(potPin);
  deger = map(deger,0,1023,0,255);
  Serial.print("Deger: ");
  Serial.println(deger);
  if(deger<=100){
    digitalWrite(kLed, HIGH);
    digitalWrite(mLed, LOW);
  }
  else{
    digitalWrite(kLed, LOW);
    digitalWrite(mLed, HIGH);
  }
  delay(2000);
}
