float brightness = 0;
int ledPin = 11;
int buttonPin1 = 13;
int buttonPin2 = 12;
int buzzerPin = 7;
int button1New;
int button2New; 
int sDelay = 100;



void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  

  Serial.begin(9600);
}

void loop() {

  button1New = digitalRead(buttonPin1);
  button2New = digitalRead(buttonPin2);

  Serial.println(button1New);
  Serial.println(button2New);
  Serial.println();
  delay(sDelay);

    if(button1New == 1){
    brightness = brightness + 63.75;
    
    
  }
    if( button2New == 1){
    brightness = brightness - 63.75;
   
    
  }
  if (brightness > 255){
  brightness = 255;
  digitalWrite(buzzerPin, HIGH);
  delay(sDelay);
  digitalWrite(buzzerPin, LOW);
}
if (brightness < 0){
  brightness = 0;
  digitalWrite(buzzerPin, HIGH);
  delay(sDelay);
  digitalWrite(buzzerPin, LOW);
}
  analogWrite(ledPin, brightness);
   Serial.println(brightness);
   Serial.println();
  delay(sDelay);
  
 
  
}
