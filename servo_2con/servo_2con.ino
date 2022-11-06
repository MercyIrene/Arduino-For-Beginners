///doesnt work, find a way to fix it

#include <Servo.h>

int servoPin = 9;
int ldrPin = A0;
int ldrVal;
float servoPos;
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
 
servoPos = (-18./75.)*ldrVal + 216;
//or servoPos = (-255./750.)*ldrVal + 306.; not exactly the same values, but at least it works
Serial.println(servoPos);
  myServo.write(servoPos);
 
 

}
