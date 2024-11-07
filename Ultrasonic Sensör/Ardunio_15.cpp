#define trig 5
#define echo 4
unsigned long sure;
#define k 13
#define m 12
#define y 11
int mesafe;

void setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(k, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(m, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  sure = pulseIn(echo, HIGH);
  mesafe = sure/2*0.0343;
  Serial.print("Mesafe: ");
  Serial.println(mesafe);
  if (mesafe < 50)
    digitalWrite(k, HIGH);
  else if (mesafe >=50 && mesafe <90)
    digitalWrite(m, HIGH);
  else
    digitalWrite(y, HIGH);
  delay(1000);
  digitalWrite(k, LOW);
  digitalWrite(y, LOW);
  digitalWrite(m, LOW);
}