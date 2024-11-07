byte sensor=A0;
byte buzzer=1;
int sure=500;
int oku;
void setup()
{
pinMode(sensor,INPUT);
Serial.begin(9600);
}

void loop()
{
oku=analogRead(sensor);
Serial.println("Gaz verisi: ");
Serial.println(oku);
if(oku>100){
Serial.print("Uyarı !!!");
digitalWrite(buzzer,1);
delay(sure);
}
else
{
digitalWrite(buzzer,1);
delay(sure);
}
}