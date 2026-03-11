//this is my first iot program

#define my_led 7
 // global declaration, LED pin no.7

void setup() {

//put your setup code here, to run once:

  pinMode (my_led, OUTPUT);
}

   void loop() {
 
//put your main code here, to run repeatedly:

   digitalWrite(my_led, HIGH);
}