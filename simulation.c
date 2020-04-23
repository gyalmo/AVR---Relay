#include <avr/io.h>
#include <util/delay.h>
#define Relay PA0
#define Relay PB0
#define Relay PC0
#define Relay PD0


// four appliances
#define AC_Dir DDRA 
#define FAN_Dir DDRB
#define Light_Dir DDRC
#define Fridge_Dir DDRD

int main() 
{

    DDRA = (1 << Relay);         // the port A0 as Output 
    DDRB = (1 << Relay);      // the port B0 as Output   
    DDRC = (1 << Relay);      // the port C0 as Output    
    DDRD = (1 << Relay);      // the port D0 as Output       
      while(1)
    { 
      PORTA = (1 << Relay);    /* Turn ON the AC*/
      _delay_ms(1000);
      PORTA = (0 << Relay);    /* Turn OFF the AC */
      _delay_ms(1000);
   
     PORTB = (1 << Relay);      /* Turn ON the FAN */
      _delay_ms(2000);
      PORTB= (0 << Relay);      /* Turn OFF the FAN */
      _delay_ms(2000);

      PORTC = (1 << Relay);      /* Turn ON the LIGHT */
      _delay_ms(3000);
      PORTC = (0 << Relay);     /* Turn OFF the LIGHT */
      _delay_ms(3000);

      PORTD = (1 << Relay);      /* Turn ON the FRIDGE */
      _delay_ms(4000);
      PORTD = (0 << Relay);       /* Turn OFF the FRIDGE*/
      _delay_ms(4000);
   }
    return (0);
}
