#define my_led1 7
#define my_led2 5
#define my_led3 2

void setup(){
pinMode (my_led1, OUTPUT);
pinMode (my_led2, OUTPUT);
pinMode (my_led3, OUTPUT);
Serial.begin(9600);
}
void loop(){
  while(true){
    digitalWrite(my_led1,HIGH);
    delay(1000);
    digitalWrite(my_led2,HIGH);
    delay(1000);
    digitalWrite(my_led3,HIGH);
    delay(1000);
    digitalWrite(my_led1,LOW);
    delay(1000);
    digitalWrite(my_led2,LOW);
    delay(1000);
    digitalWrite(my_led3,LOW);
    delay(1000);
    
  }
}