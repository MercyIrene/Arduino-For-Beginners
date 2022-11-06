int j;
int Blinks;
int s_delay = 200;
int redLed = 11;
String msg = "How Many Blinks Do You Want: " ;
void setup() {
  pinMode(11, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(msg);

 u
Blinks = Serial.parseInt();
for( j = 1; j <= Blinks; j ++){
  digitalWrite(redLed, HIGH);
  delay(s_delay);
  digitalWrite(redLed, LOW);
  delay(s_delay);
}

}
