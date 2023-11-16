#include <avr/io.h>
#include <util/delay.h>

//set Port B5 as output
    DDRB = DDRB | (1 << PORTB5)

while(1){
    PORTB = PORTB | (1 << PORTB5);
    _delay_ms(1000);
    PORTB = PORTB & ~(1 << PORTB5);
    _delay_ms(1000);
}