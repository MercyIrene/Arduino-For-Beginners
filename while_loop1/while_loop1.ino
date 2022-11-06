int s_delay = 100;
int potPin = A0;
int redLed = 11;
int potVal;
int ledVal;


void setup() {
pinMode(potPin, INPUT);
pinMode(redLed, OUTPUT);
Serial.begin(9600);
}

void loop() {
 potVal = analogRead(potPin);
 Serial.println(potVal);
 delay(s_delay);
 
 while(potVal > 800){
  digitalWrite(redLed, HIGH);
  potVal = analogRead(potPin);
  Serial.println(potVal);
  delay(s_delay);
 }
digitalWrite(redLed, LOW);
}
