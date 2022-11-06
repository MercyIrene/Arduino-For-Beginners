
#include <Stepper.h>
int stepsPerRevolution = 1;
Stepper myStepper(stepsPerRevolution, 8,9,10,11);
int motSpeed = 50;  //rpm
int s_delay = 150;

void setup() {
 Serial.begin(9600);
 myStepper.setSpeed(motSpeed);

}

void loop() {
 myStepper.step (stepsPerRevolution);
 delay(s_delay);
myStepper.step (-stepsPerRevolution);
delay(s_delay);
}
