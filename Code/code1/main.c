#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = (1 << DDB1);				// PortB Pin B1 als Ausgang
    while (1) 
    {
		PORTB ^= (1 << PORTB1);		// B1 toggle
		_delay_ms (250);
    }
}

