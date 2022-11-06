int green = 9;
int yellow = 10;
int red = 11;
int potPin = A0;
int readVal;
float V2;
int s_delay = 200;

void setup() {
 pinMode(green, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(red, OUTPUT);
 pinMode(potPin, INPUT);

 Serial.begin(9600);
}

void loop() {
 readVal = analogRead(A0);
 V2 = (5./1023.)*readVal;
 Serial.print("Potentiometer Value is ");
 Serial.println(V2);

if(V2 < 2.5){
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  Serial.println("NOTHING TO WORRY ABOUT HERE");
}
if(V2 > 2.5 && V2 < 3.5){
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
  Serial.println("SLOW DOWN MY GUY, CHILL");
}
 if(V2 > 3.5){
   digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  Serial.println("CALM THE FUCK DOWN DUDE");
   }
   Serial.println();
 delay(s_delay);
}
