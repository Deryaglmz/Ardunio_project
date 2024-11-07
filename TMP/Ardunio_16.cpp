#define tempPin A0
double sicaklik;

void setup()
{
  Serial.begin(9600);
  pinMode(tempPin, INPUT);
}

void loop()
{
  sicaklik = analogRead(tempPin);
  sicaklik = map(sicaklik,20,358, -40,125);
  Serial.println(sicaklik);
  delay(1000);
}