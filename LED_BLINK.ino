
#define my_led 7 

void setup() {

pinMode (my_led, OUTPUT);

}

void loop() {

digitalWrite(my_led, HIGH);

delay(100);

digitalWrite(my_led, LOW);

delay(100);

}