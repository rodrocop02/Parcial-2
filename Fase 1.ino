void setup() {

}

void loop() {
  encenderLed(3,2);
  
}

void encenderLed(int led, int boton){
  pinMode(boton, INPUT_PULLUP);
  pinMode(led, OUTPUT);

  if(digitalRead(boton) == HIGH){
    digitalWrite(led, HIGH);
  }

  else{
    digitalWrite(led, LOW);
  }
}
