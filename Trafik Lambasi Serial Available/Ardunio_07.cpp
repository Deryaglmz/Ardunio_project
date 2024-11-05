byte kirmizi = 4;
byte sari = 5;
byte yesil = 6;
char renk;

void setup(){
  
  Serial.begin(9600);
  pinMode(kirmizi, OUTPUT);
  pinMode(sari, OUTPUT);
  pinMode(yesil, OUTPUT);

}

void loop()
{
  if(Serial.available())
     {
       renk = Serial.read();
       switch(renk){
         case 'K':
           digitalWrite(kirmizi, HIGH);
           Serial.println("Kirmizi yandi, DUR");
           break;
         case 'S':
           digitalWrite(sari, HIGH);
           Serial.println("Sari yandi, DUR");
           break;
         case 'Y':
           digitalWrite(yesil, HIGH);
           Serial.println("Yesil yandi, DUR");
           break;
         default:
           Serial.println("Gecersiz renk girisi!");
       }
  }
}      