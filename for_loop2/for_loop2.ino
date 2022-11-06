int yellow = 6;
int red = 9;
int s_delay = 100;
int yellowBlink = 3;
int redBlink = 5;
int j;

void setup() {
   pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
 for(j = 1; j <= yellowBlink; j ++) {
   digitalWrite(yellow, HIGH);
  delay(s_delay);
  digitalWrite(yellow, LOW);
  delay(s_delay);
  }

 for(j = 1; j<= redBlink;) {
   digitalWrite(red, HIGH);
  delay(s_delay);
  digitalWrite(red, LOW);
  delay(s_delay);
  j = j + 1;
  }
}
