byte sensor = A2;
int oku;
void setup()
{
  pinMode(sensor, INPUT); 
  Serial.begin(9600);
}

void loop()
{
  oku = analogRead(sensor);
  float voltage = oku * (5.0 / 1023.0);
  Serial.println(voltage);
  delay(500);
}