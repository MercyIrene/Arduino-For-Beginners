int ledPin = 11;
int buttonPin1 = 13;
int buttonPin2 = 12;
int buttonVal1;
int buzzerPin = 7;
int buttonVal2;
float brightness = 0;
int s_delay = 100;


void setup() {
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  buttonVal1 = digitalRead(buttonPin1);
  buttonVal2 = digitalRead(buttonPin2);
  Serial.println(buttonVal1);
  Serial.println(buttonVal2);
  Serial.println();
  delay(s_delay);

if (buttonVal1 == 1){
  brightness = brightness + 5;
}

if (buttonVal2 == 1){
  brightness = brightness - 5;
}
if (brightness > 255){
  brightness = 255;
  digitalWrite(buzzerPin, HIGH);
  delay(s_delay);
  digitalWrite(buzzerPin, LOW);
}
if (brightness < 0){
  brightness = 0;
  digitalWrite(buzzerPin, HIGH);
  delay(s_delay);
  digitalWrite(buzzerPin, LOW);
}
  analogWrite(ledPin, brightness);
}
