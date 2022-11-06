#include <Servo.h>

int servoPin = 9;
int ldrPin = A0;
int ldrVal;
int servoPos;
int sDelay = 200;
Servo myServo;  //virtual rep of actual servo motor

void setup() {
  Serial.begin(9600);
  pinMode(servoPin, OUTPUT);
  pinMode(ldrPin, INPUT);

myServo.attach(servoPin);
}

void loop() {
 ldrVal = analogRead(ldrPin);
 Serial.print("My LDR Value is ");
 Serial.println(ldrVal);
  delay(sDelay);
 
 if (ldrVal < 400){
  servoPos = 0;
  myServo.write(servoPos);
 }
 if (ldrVal >= 400 && ldrVal <= 650){
  servoPos = 90;
  myServo.write(servoPos);
  delay(sDelay);
 }
 
if (ldrVal > 650){
  servoPos = 180;
  myServo.write(servoPos);
   delay(sDelay);
 }
 

}
