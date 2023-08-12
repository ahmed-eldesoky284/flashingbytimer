#include "waitpd.h"
waitpd::waitpd(byte buttonpin,byte outputpin,unsigned long time){
    inpin=buttonpin;
    outpin=outputpin;
    t=time;}
void waitpd::waitm(){
      if(!x){
        c2=millis();x=1;}
      if(millis()-c2>t||digitalRead(inpin)){
        digitalWrite(outpin,LOW); x=0;}
    }
void waitpd::waits(byte t){
      if(!x){
        c1=millis();x=1;}
      if(millis()-c1>t*1000||digitalRead(inpin)){
        digitalWrite(outpin,LOW); x=0;}
      }
  
