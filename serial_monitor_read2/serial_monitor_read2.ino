float radius;
float pi = 3.142;
float area;
String msg = "What Is The Radius Of Your Circle: ";
String msg2 = "Your Area is: ";
void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(msg);
  
   while (Serial.available()==0){
    
  }
  radius = Serial.parseFloat();
  area = pi*radius*radius;
  Serial.print(msg2);
  Serial.println(area);
}
