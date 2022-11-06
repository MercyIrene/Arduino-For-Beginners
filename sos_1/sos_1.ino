int redLed = 8;
int s_delay = 100; //short delay
int l_delay = 500; //long delay
int wait = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //S
digitalWrite(redLed,HIGH);
delay(s_delay);
digitalWrite(redLed,LOW);
delay(s_delay);

digitalWrite(redLed,HIGH);
delay(s_delay);
digitalWrite(redLed,LOW);
delay(s_delay);

digitalWrite(redLed,HIGH);
delay(s_delay);
digitalWrite(redLed,LOW);
delay(300);


//O
digitalWrite(redLed,HIGH);
delay(l_delay);
digitalWrite(redLed,LOW);
delay(l_delay);

digitalWrite(redLed,HIGH);
delay(l_delay);
digitalWrite(redLed,LOW);
delay(l_delay);

digitalWrite(redLed,HIGH);
delay(l_delay);
digitalWrite(redLed,LOW);
delay(l_delay);

  //S
digitalWrite(redLed,HIGH);
delay(s_delay);
digitalWrite(redLed,LOW);
delay(s_delay);

digitalWrite(redLed,HIGH);
delay(s_delay);
digitalWrite(redLed,LOW);
delay(s_delay);

digitalWrite(redLed,HIGH);
delay(s_delay);
digitalWrite(redLed,LOW);
delay(s_delay);

delay(1000);
}
