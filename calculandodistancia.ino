#include <HCSR04.h>

HCSR04 sensorDistance(2 , 3); //trig e echo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(sensorDistance.dist()/100);
  //dist() retorna dist em CM
  delay(1000);

}
