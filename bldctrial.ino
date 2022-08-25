#include<Servo.h>
Servo ESC;

int pot,i;

void setup() {
  ESC.attach(9,1000,2000); 
  // put your setup code here, to run once:

}

void loop() {
  for(i=0;i<90;i++)
  {
    pot = i;
    ESC.write(pot);
    i = i+5;
   }
  // put your main code here, to run repeatedly:

}
