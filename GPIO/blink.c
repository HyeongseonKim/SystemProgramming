
#include <stdio.h>
#include <wiringPi.h>

int main ()
{
  wiringPiSetup() ;
  pinMode(0, OUTPUT) ;
  printf("begin\n") ;

  for (;;) {
    digitalWrite(0, HIGH) ; 
    delay(500) ;
    digitalWrite(0, LOW) ; 
    delay(500) ;
  }
}
