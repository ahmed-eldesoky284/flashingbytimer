#ifndef waitpd_h
#define waitpd_h
#include <Arduino.h>
class waitpd{
  private:
  byte inpin,outpin;
  unsigned long t,c1,c2;
  bool x=false;
  public:
  	void waits(byte t);
  	void waitm();
  waitpd(byte buttonpin,byte outputpin,unsigned long time);
 
};

#endif

