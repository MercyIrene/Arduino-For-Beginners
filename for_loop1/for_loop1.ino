int yellow = 6;
int red = 9;
int s_delay = 100;

void setup() {
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  //yellow
  //1
  digitalWrite(yellow, HIGH);
  delay(s_delay);
  digitalWrite(yellow, LOW);
  delay(s_delay);

//2
digitalWrite(yellow, HIGH);
  delay(s_delay);
  digitalWrite(yellow, LOW);
  delay(s_delay);

  //3
  digitalWrite(yellow, HIGH);
  delay(s_delay);
  digitalWrite(yellow, LOW);
  delay(s_delay);

  //red
  //1
  digitalWrite(red, HIGH);
  delay(s_delay);
  digitalWrite(red, LOW);
  delay(s_delay);

  //2
  digitalWrite(red, HIGH);
  delay(s_delay);
  digitalWrite(red, LOW);
  delay(s_delay);

  //3
  digitalWrite(red, HIGH);
  delay(s_delay);
  digitalWrite(red, LOW);
  delay(s_delay);

  //4
  digitalWrite(red, HIGH);
  delay(s_delay);
  digitalWrite(red, LOW);
  delay(s_delay);

  //5
  digitalWrite(red, HIGH);
  delay(s_delay);
  digitalWrite(red, LOW);
  delay(s_delay);
}
