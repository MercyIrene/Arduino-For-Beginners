int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int colour;
String msg = "Colour? (1 red, 2 green, 3 blue, 4 off)";

void setup() {
  Serial.begin(9600);
 
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

}

void loop() {
  Serial.println(msg);

  while (Serial.available()==0){
    
  }
colour = Serial.parseInt();

if(colour==1){
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin, LOW);
}
if(colour==2){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin, LOW);
}
if(colour==3){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin, HIGH);
}
if(colour==4){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin, LOW);
}

//for like inbetweeners, we do analogwrite

//yellow
if(colour==5){
  analogWrite(redPin, 255);
  analogWrite(greenPin,100);
  analogWrite(bluePin, 0);
}
//cyan
if(colour==6){
  analogWrite(redPin, 0);
  analogWrite(greenPin,255);
  analogWrite(bluePin, 255);
}
//magenta
if(colour==7){
  analogWrite(redPin, 255);
  analogWrite(greenPin,0);
  analogWrite(bluePin, 255);
}
//orange
if(colour==8){
  analogWrite(redPin, 255);
  analogWrite(greenPin,165);
  analogWrite(bluePin, 0);
}
//purple
if(colour==9){
  analogWrite(redPin, 150);
  analogWrite(greenPin,20);
  analogWrite(bluePin, 200);
}
  //white
  if(colour==10){
  analogWrite(redPin, 255);
  analogWrite(greenPin,255);
  analogWrite(bluePin, 255);
}
}
