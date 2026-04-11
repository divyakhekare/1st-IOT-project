int potPin = A5;        
int greenLED = 2;      
int redLED = 4;
int yellowLED = 7;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  
  Serial.begin(9600);   
}

void loop() {
  int value = analogRead(potPin);

  Serial.print("POT value = ");
  Serial.println(value);            

  if (value < 100) {
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    Serial.println("Green ON");
  } 

  else if (value > 100 && value < 200) {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);
    Serial.println("Yellow ON");
  } 

  else if (value > 200 && value < 300) {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    Serial.println("Red ON");
  } 

  else {
    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, LOW);
    Serial.println("ALL LEDs OFF");
  }

  delay(1000);
}