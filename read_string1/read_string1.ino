String myName;
String msg = "What Is Your Name?";
String msg2 = "Hello ";
String msg3 = "Welcome To Arduino!";


void setup() {
 Serial.begin(9600);

}

void loop() {
Serial.println(msg);
//Wait for data to be entered into the serial monitor
while(Serial.available() == 0){
  
}

myName = Serial.readString();

Serial.print(msg2);
Serial.print(myName);
Serial.println(msg3);

}
