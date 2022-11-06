int redLed = 8;
int blueLed = 11;
int greenLed = 13; 
int i = 0;
int j = 0;
int k = 0;
int s_delay = 100;
int l_delay  = 250;
int sl_delay = 500;

void setup() {
  // put your setup code here, to run once:
pinMode(redLed, OUTPUT);
pinMode(blueLed, OUTPUT);
pinMode(greenLed, OUTPUT);
}

void loop() {
  while ( i < 5){
  digitalWrite(redLed, HIGH);
  delay (s_delay);
  digitalWrite(redLed, LOW);
  delay (s_delay);
  i++;
   }

  while (j < 10 ){
  digitalWrite(blueLed, HIGH);
  delay (l_delay);
  digitalWrite(blueLed, LOW);
  delay (l_delay);
  j++;
   }

   while ( k < 15){
  digitalWrite(greenLed, HIGH);
  delay (sl_delay);
  digitalWrite(greenLed, LOW);
  delay (sl_delay);
  k++;
  // put your main code here, to run repeatedly:
   }
}
