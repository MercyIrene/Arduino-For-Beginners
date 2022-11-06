int lightPin = A0;
int buzzerPin = 6;
int lightVal;
int s_delay = 100;
float buzzerVal;

void setup() {
  pinMode(lightPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  delay(s_delay);

buzzerVal = 255 - ((255./1023.)*lightVal);

analogWrite(buzzerPin, buzzerVal);

}
