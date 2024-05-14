#include <reg51.h>

sbit I_P = P3^4;

void start_timer()
{
	TR0 = 1; // Start Timer 0
}

void init_timer()
{
	TMOD = 0x06; // Timer 0, 8-bit auto reload mode
	TH0 = 0;
	I_P = 1; // Assuming this pin is used for some purpose
}

void main()
{
	init_timer();
	start_timer();

	while (1)
	{
		// Your code here
		// For example, if you want to read the timer value and display it on P1
		P1 = TL0; // TL0 holds the low byte of Timer 0
	}
}

