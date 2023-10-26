#include<Servo.h>

Servo servoku;


void setup() {
  // put your setup code here, to run once:
  servoku.attach(6);
  servoku.write(120);
  delay(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=1800;i++){
    servoku.write(i);
    delay(11);
  }
  servoku.write(0);

}
