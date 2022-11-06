#include <Stepper.h>
int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 8,9,10,11);
int motSpeed = 20;  //rpm
int s_delay = 150;

int oldbuttonVal = 0;
int buttonPin = 2;
int newbuttonVal;
int motDir = 1;

void setup() {
 Serial.begin(9600);
 myStepper.setSpeed(motSpeed);
 pinMode(buttonPin, INPUT);
}

void loop() {

  newbuttonVal = digitalRead(buttonPin);
  Serial.print("Your Button Value Is ");
  Serial.println(newbuttonVal);
  delay(s_delay);

  
if(oldbuttonVal == 0 &&newbuttonVal == 1){
  motDir = motDir*(-1);
}
myStepper.step (motDir*1);

oldbuttonVal = newbuttonVal;
}
