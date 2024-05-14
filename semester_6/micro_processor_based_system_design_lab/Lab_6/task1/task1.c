#include <reg51.h>

sbit pin = P3 ^ 0;
int count = 0;

void startTimer0(){ 
	TR0 = 1;
}

void timer0() interrupt 1{ 
	count++;
	if(count == 4){
		pin = ~pin;
		count = 0;
	}
	
	TH0 = 0x63; // high byte of timer 0
	TL0 = 0xBF; // lower byte of timer 0
}

void startTimer(){ // 
	TMOD = 0x01; 
	IE = 0x82; 
}

void main(){
	startTimer0();
	startTimer();

	while(1);		
}