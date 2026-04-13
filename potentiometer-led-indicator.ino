#define pot A5
#define ledgreen 7
#define ledred 2

void setup() {
  
Serial.begin(9600);
pinMode(pot,INPUT); //pin type
}

void loop() {
     int x = analogRead(pot);
    // Serial.print("POT value");
     Serial.println(x);
      
      if(x>100){
          digitalWrite(ledgreen,HIGH);
          digitalWrite(ledred,LOW);
      }
      else{
          digitalWrite(ledgreen,LOW);
          digitalWrite(ledred,HIGH);
      }
      delay(1000);
          
}