#define kirmizi 2
#define yesil 3
#define mavi 4
int sure = 500;
byte k, y, m;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(yesil, OUTPUT);
  pinMode(mavi, OUTPUT);
}

void loop()
{
  k = random(50);
  m = random(255);
  y = random(255);
  analogWrite(kirmizi, k);
  analogWrite(yesil, 0);
  analogWrite(mavi, 0);
  delay(sure);

  analogWrite(kirmizi, 0);
  analogWrite(yesil, y);
  analogWrite(mavi, 0);
  delay(sure);

  analogWrite(kirmizi, 0);
  analogWrite(yesil, 0);
  analogWrite(mavi, m);
  delay(sure);
}