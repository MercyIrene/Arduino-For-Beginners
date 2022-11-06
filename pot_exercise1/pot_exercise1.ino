int potPin = A0;
int led = 11;
int potVal;
float ledVal;
int s_delay  = 250;

void setup() {
   
pinMode(potPin, INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  ledVal = (255./1023.)*potVal;
  Serial.println(ledVal);
  analogWrite(led, ledVal);
  delay(s_delay);

}
