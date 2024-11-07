#include<Servo.h>
Servo Motor;
void setup()
{
  Motor.attach(A1);
}

void loop()
{
  for(byte i=0; i<180; i++){
    Motor.write(i);
    delay(15);
  }
  for(byte i=180; i>0; i--){
    Motor.write(i);
    delay(15);
  }
}