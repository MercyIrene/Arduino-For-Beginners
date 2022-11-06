int buzzPin = 8;
float toneVal;
int potPin = A0;
int potVal;

void setup() {
  
pinMode(buzzPin, OUTPUT);
pinMode(potPin, INPUT);
}

void loop() {
  potVal = analogRead(potPin);

toneVal = (9940./1023)*potVal;

digitalWrite(buzzPin, HIGH);
delay(toneVal);
digitalWrite(buzzPin, LOW);
delay(toneVal);
  

}
