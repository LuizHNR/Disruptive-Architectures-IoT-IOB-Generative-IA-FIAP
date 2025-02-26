#define button 2
#define led_Verm 8
#define led_Amar 9
#define led_Verd 10
 
void setup()

{

  pinMode(led_Verm, OUTPUT);
  pinMode(led_Amar, OUTPUT);
  pinMode(led_Verd, OUTPUT);
  pinMode(button, INPUT);

}
 
void loop()

{

  if(digitalRead(button) == HIGH){
    piscarLED();
  }else{
    digitalWrite(led_Verm, LOW);
    digitalWrite(led_Amar, LOW);
    digitalWrite(led_Verd, LOW);

  }
  delay(1000);
}

void piscarLED(){
  	digitalWrite(led_Verm, HIGH);
    delay(1000);
    digitalWrite(led_Amar, HIGH);
    delay(1000);
    digitalWrite(led_Verd, HIGH);
    delay(1000);
}



 