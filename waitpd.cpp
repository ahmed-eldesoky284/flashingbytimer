#include "waitpd.h"
waitpd::waitpd(byte buttonpin,byte outputpin,unsigned long time){
    inpin=buttonpin;
    outpin=outputpin;
    t=time;}
void waitpd::waitm(){

      if(x)
    	  c2=millis();
    	if(millis()-c2>t||digitalRead(inpin))
          digitalWrite(outpin,LOW);}
void waitpd::waits(int v){
      if(x)
    	c1=millis();
      	
    	if(millis()-c1>v*1000||digitalRead(inpin))
          digitalWrite(outpin,LOW);}