int buzzPin = 8; 
int s_delay = 1;
int l_delay = 2;
int j;

void setup() {
  // put your setup code here, to run once:
pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
for(j = 1; j <=100; j++){
  digitalWrite(buzzPin, HIGH);
  delay(s_delay);
  digitalWrite(buzzPin, LOW);
  delay(s_delay);
}
for(j = 1; j <=100; j++){
  digitalWrite(buzzPin, HIGH);
  delay(l_delay);
  digitalWrite(buzzPin, LOW);
  delay(l_delay);
}
}
