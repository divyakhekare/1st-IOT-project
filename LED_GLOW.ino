//this is my first iot program

#define my_led 7
 // global declaration, LED pin no.7

void setup() {


  pinMode (my_led, OUTPUT);
}

   void loop() {

   digitalWrite(my_led, HIGH);
}