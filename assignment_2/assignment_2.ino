 int ledRed = 13;  //setting pins
int ledBlue = 12;
int ledGreen = 11;
int ledYellow = 10;

int s_delay = 400; //setting delay

void setup() {

pinMode(ledRed, OUTPUT);
pinMode(ledBlue, OUTPUT);
pinMode(ledGreen, OUTPUT);
pinMode(ledYellow, OUTPUT);
}

void loop() {
//0
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

//1
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);

 //2
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

  //3
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);

  //4
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

  //5
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);

  //6
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

  //7
  digitalWrite(ledRed, LOW);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);

  //8
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

  //9
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);

  //10
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

  //11
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, LOW);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);

  //12
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

  //13
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, LOW);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);

  //14
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, LOW);

  delay(s_delay);

  //15
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledBlue, HIGH);
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledYellow, HIGH);

  delay(s_delay);
}
