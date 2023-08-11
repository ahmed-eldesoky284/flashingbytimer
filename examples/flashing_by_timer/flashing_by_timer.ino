#include <waitpd.h>
waitpd wait1(6,13,100);
waitpd wait2(8,13,2000);
void setup(){ 
  pinMode(13,OUTPUT);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);pinMode(8,INPUT_PULLUP);
  }
void loop(){
  if(digitalRead(7))
   digitalWrite(13,1);
  wait1.waitm();
  wait2.waits(5);}
