int buttonPin = 2;
int buttonVal;
int s_delay = 200;

void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH); //like a code version of a pullup resistor
//in the circuit, a pullup resistor makes it that initial state is high
//this line does that for you
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal = digitalRead(buttonPin);
Serial.print("Your button is ");
if(buttonVal == 1){
  Serial.println("OFF");
}
if(buttonVal == 0){
  Serial.println("ON");
}
delay(s_delay);

}
