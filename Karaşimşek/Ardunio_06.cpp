int ledPin[] = {2, 3, 4, 5, 6, 7};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPin[i], HIGH);
    delay(1000);
    digitalWrite(ledPin[i], LOW);
  }

  for (int j = 5; j > -1; j--) {
    digitalWrite(ledPin[j], HIGH);
    delay(1000);
    digitalWrite(ledPin[j], LOW);
  }
}
