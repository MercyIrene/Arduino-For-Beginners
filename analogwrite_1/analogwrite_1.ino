int redLed = 10;
int brightest = 255;
int bright = 220;
int dim = 170;
int dimmer = 130;
int off = 0;
int s_delay = 250;

void setup() {
  
pinMode(redLed, OUTPUT);
}

void loop() {
  analogWrite(redLed, brightest);
  delay(s_delay);
  
  analogWrite(redLed, bright);
  delay(s_delay);
  
  analogWrite(redLed, dim);
  delay(s_delay);

  analogWrite(redLed, dimmer);
  delay(s_delay);
  
  analogWrite(redLed, off);
  delay(s_delay);

}
