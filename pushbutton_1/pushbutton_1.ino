int buttonPin = A0;
int ledPin  = 11;
int buttonRead;
int s_delay = 50;
void setup() {
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
Serial.begin(9600);

}

void loop() {
  buttonRead = digitalRead(buttonPin);
  Serial.println(buttonRead);
  delay(s_delay);

if (buttonRead == 1){
  digitalWrite(ledPin, LOW);
}
if (buttonRead == 0){
  digitalWrite(ledPin, HIGH);
}
}
