#include <reg51.h>

sbit mybit = P4^3;

void startTimer(){

	TMOD = 0x01;
	IE = 0x82;
	
}

void timer0() interrupt 1 {
   if(mybit){
		 TH0 = 0xFD;
		 TL0 = 0x61;
	 }
	 else{
		 TH0 = 0xFC;
		 TL0 = 0x17;
	 }
	 mybit = ~mybit; 
}

void init(){
	TR0 = 1;	
}

void main(){
	startTimer();
	init();
}