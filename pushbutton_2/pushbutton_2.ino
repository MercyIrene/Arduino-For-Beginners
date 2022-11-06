int ledState = 0;  //initial state of system
int ledPin = 11;
int buttonPin = A0;
int buttonOld = 1;  // the button is usually off rght, so it reads high
int buttonNew;
int s_delay = 50;

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);

Serial.begin(9600);

}

void loop() {
   buttonNew = digitalRead(buttonPin);
  Serial.println(buttonNew);
  delay(s_delay);

  if(buttonOld == 0 && buttonNew == 1){
    if(ledState == 0){
      digitalWrite(ledPin, HIGH);
      ledState = 1;
    }
    else{
      digitalWrite(ledPin, LOW);
      ledState = 0;
    }
    
  }
buttonOld  = buttonNew;
delay(s_delay);
}
