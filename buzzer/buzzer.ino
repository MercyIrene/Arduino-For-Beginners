int buzzPin = 8;
int myNum;
String msg = "Please enter a number";
int s_delay = 200;
void setup() {
  
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
}

void loop() {
  Serial.println(msg);

  while(Serial.available()==0){
    
  }
myNum = Serial.parseInt();

if(myNum > 10){
  digitalWrite(buzzPin, HIGH);
  delay(s_delay);
  digitalWrite(buzzPin, LOW);
}
}
