int potPin  = A0;
int readVal;
float V2;
int s_delay = 200;
int red = 11;

void setup() {
  Serial.begin(9600);
 pinMode(potPin, INPUT);
 pinMode(red, OUTPUT);
 
}
void loop() {
  readVal = analogRead(potPin);
  V2 = (5./1023.)*readVal;
  Serial.print("Potentiomenter value is ");
  Serial.println(V2);
  
  if( V2 > 4.0){
    digitalWrite(red, HIGH);
    }
   if(V2 < 4.0){
      digitalWrite(red, LOW);
    }
    delay(s_delay);
    }
  
