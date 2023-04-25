
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  leds(1,2,3,4,5);

}

void leds(int pulsador, int led1, int led2 , int led3 , int led4){
  pinMode(pulsador,INPUT_PULLUP);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

  if(digitalRead(pulsador) == LOW){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    delay(1000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    delay(1000);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }

  else{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
  }
  
}
