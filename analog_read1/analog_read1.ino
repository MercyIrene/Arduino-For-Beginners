int readPin = A0;  //declare variable of analog pin
float V2 = 0;
int s_delay = 250;
int pin13 = 13;
int readValue;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(readPin, INPUT); //set pin to be an input, we read from it
  Serial.begin(9600); //setting up a serial monitor, to read our data from it. 9600 is the baud rate, how much you're talking to your board
}

void loop() {
  digitalWrite(13, HIGH);
 readValue = analogRead(readPin);
 V2 = (5./1023.)*readValue ; //we want to do float math
Serial.println(V2);  //print the value of V2 at the seral monitor
delay(s_delay);
}
