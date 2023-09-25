class waitpd{
  private:
  byte inpin,outpin;
  unsigned long t=0,c1=0,c2=0;
  bool x=0;
  public:
  	void waits(byte t){
      if(!x){
        c1=millis();x=1;}
      if(millis()-c1>t*1000||digitalRead(inpin)){
        digitalWrite(outpin,LOW); x=0;}
      }
  
  	void waitm(){
      if(!x){
        c2=millis();x=1;}
      if(millis()-c2>t||digitalRead(inpin)){
        digitalWrite(outpin,LOW); x=0;}
    }
  waitpd(byte buttonpin,byte outputpin,unsigned long time){
    inpin=buttonpin;
    outpin=outputpin;
    t=time;
  }
 
};

waitpd wait1(6,13,2000);
waitpd wait2(8,13,2000);
void setup(){ 
  pinMode(13,OUTPUT);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);pinMode(8,INPUT_PULLUP);
  }
void loop(){
  if(digitalRead(7))
   digitalWrite(13,1);
  
  wait2.waits(5);}
