int lightPin = A0;
int buzzerPin = 6;
int lightVal;
int delayT;
float buzzerVal;

void setup() {
  pinMode(lightPin, INPUT);
  pinMode(buzzerPin, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  lightVal = analogRead(lightPin);
  Serial.println(lightVal);
  
delayT = (9./800.)*lightVal - (1./8.);

digitalWrite(buzzerPin, HIGH);
delay(delayT);
digitalWrite(buzzerPin, LOW);
delay(delayT);

}
