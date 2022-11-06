int j;
int s_delay = 100;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for(j = 10; j >= 0; j --){
  Serial.println(j);
  delay(s_delay);
}
Serial.println();

}
