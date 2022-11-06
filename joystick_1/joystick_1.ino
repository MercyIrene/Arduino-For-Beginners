int potX = A0;
int potY = A1;
int switchPin = 2; 
int xVal;
int yVal;
int switchVal;
int sDelay = 200;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(potX, INPUT);
pinMode(potY, INPUT);
pinMode(switchPin, INPUT);
digitalWrite(switchPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal = analogRead(potX);
yVal = analogRead(potY);
switchVal = digitalRead(switchPin);
delay(sDelay);

Serial.print("X Val Is ");
Serial.println(xVal);
Serial.print("Y Val Is ");
Serial.println(yVal);
Serial.print("Switch State Is ");
Serial.println(switchVal);
}
