//ISSUE : Seemingly, the serial monitor on proteus cannot execute commands based in strings in this case # it didnt light up the leds when user enters the name of the colour
//but when the instructon comes in the form of a number, it responds beautifully and fast. the code for the two attempts are the same, just with int changed to string
//i dont know how to solve this, or what even is wrong, will attepmt it on an actual board and see whether it actually works


int redLed = 9;
int greenLed = 10;
int blueLed = 11;
int colour;
String msg = "What Colour LED Do You Want To Light Up?";
String msg2 = "1 is red, 2 is green, 3 is blue";

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
 Serial.println(msg);
 Serial.println(msg2);
 

 while (Serial.available()==0){
  
 }
 
colour = Serial.parseInt();

if (colour == 1){
  digitalWrite(redLed, HIGH);
  digitalWrite(greenLed, LOW);
  digitalWrite(blueLed, LOW);
}
if (colour == 2){
  digitalWrite(greenLed, HIGH);
  digitalWrite(redLed, LOW);
  digitalWrite(blueLed, LOW);
}
if (colour == 3){
  digitalWrite(blueLed, HIGH);
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, LOW);
}

}
