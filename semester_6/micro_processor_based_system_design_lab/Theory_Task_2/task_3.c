#include<reg51.h>

sbit mybit=P2^0;
sbit button=P3^2;

void start_timer()
{
	TMOD=0x01;
	IE=0x82;
}

void timer() interrupt 1
{
	if(button)
	{
		if(mybit)
		{
			TH0=0xF4;
			TL0=0x47;
		}
		else
		{
			TH0=0xF8;
			TL0=0x2F;
		}
		
	}
	else
	{
		if(mybit)
		{
			TH0=0xF0;
			TL0=0x5F;
		}
		else
		{
			TH0=0xE8;
			TL0=0x8F;
		}
	}
	mybit= ~mybit;
}

void init()
{
	TR0=1;
}

void main()
{
	start_timer();
	init();
	while(1);
	{
	}
	
}