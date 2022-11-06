int lightPin = A0;
int lightVal;
int redLed = 13;
int greenLed = 11;
int s_delay = 100;

void setup() {
  // put your setup code here, to run once:
pinMode(lightPin, INPUT);
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(s_delay);

if(lightVal > 514){
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
}
if(lightVal < 514){
  digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
}
}
