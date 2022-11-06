int potPin = A0;
int buzzPin = 8; 
int potVal;
int s_delay = 200;

void setup() {
pinMode(potPin, INPUT);
pinMode(buzzPin, OUTPUT);

Serial.begin(9600);

}

void loop() {
  potVal = analogRead(potPin);

  Serial.println(potVal);
  delay(s_delay);

  if(potVal > 800){
    digitalWrite(buzzPin, HIGH);
  }
  if(potVal < 800){
    digitalWrite(buzzPin, LOW);
  }
}
