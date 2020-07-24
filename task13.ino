#include <Servo.h>
Servo  motor;
int RDLstate1;
int RDLstate2;
int RDLstate3;
int x;

void setup()
{
   motor.attach(4);
 
  pinMode(2, INPUT);   
  pinMode(7, INPUT);   
  pinMode(13, INPUT);    
}

void loop()
{
  delay(250);
                             
  RDLstate1=digitalRead(2);
  RDLstate2=digitalRead(7);   
  RDLstate3=digitalRead(13);
     delay(1000);

  if( RDLstate1==RDLstate3) 
  {
   x=0;                   
     motor.write(x);
   delay(1000);
  }
  
  if( RDLstate2!=RDLstate3){
   x=90;
     motor.write(x);
   delay(1000);
  }
  
   if( RDLstate1!=RDLstate2){ 
   x=180;
     motor.write(x);
   delay(1000);
  }
  
}
