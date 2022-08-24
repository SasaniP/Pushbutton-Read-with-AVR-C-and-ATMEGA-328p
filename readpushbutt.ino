#include <avr/io.h>
#include <util/delay.h>


int main(void) //main starts
{
  DDRD = DDRD | ( 1<<4) ; //Make pin 4 of port D as a output
  DDRB = DDRB & ~(1<<0) ; // Make pin 5 of port B as a input
  while (1) //initialize while loop
  {
    if(PINB & (1<<0) ) //if PIN5 of port B is high
    {
      PORTD = PORTD | ( 1<<4) ; //PIN4 of port D is high
    }
    else //otherwise
    {
      PORTD = PORTD &  ~( 1<<4) ; //PIN4 of port D will remain low
    }
  }
}
