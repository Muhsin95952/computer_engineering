#include <reg51.h>

sbit button1 = P2^1;
sbit button2 = P2^2;
sbit button3 = P2^3;
sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;
sbit led5 = P1^4;
sbit led6 = P1^5;
sbit led7 = P1^6;
sbit led8 = P1^7;

void main(){
	while(1){
		if(button1 == 0 & button2 == 0 & button3 == 0){
			led1 = 1;
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else if(button1 == 0 & button2 == 0 & button3 == 1){
			led1 = 0;
			led2 = 1;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else if(button1 == 0 & button2 == 1 & button3 == 0){
			led1 = 0;
			led2 = 0;
			led3 = 1;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else if(button1 == 0 & button2 == 1 & button3 == 1){
			led1 = 1;
			led2 = 0;
			led3 = 0;
			led4 = 1;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else if(button1 == 1 & button2 == 0 & button3 == 0){
			led1 = 0;
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 1;
			led6 = 0;
			led7 = 0;
			led8 = 0;
		}
		else if(button1 == 1 & button2 == 0 & button3 == 1){
			led1 = 0;
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 1;
			led7 = 0;
			led8 = 0;
		}
		else if(button1 == 1 & button2 == 1 & button3 == 0){
			led1 = 0;
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 1;
			led8 = 0;
		}
		else if(button1 == 1 & button2 == 1 & button3 == 1){
			led1 = 0;
			led2 = 0;
			led3 = 0;
			led4 = 0;
			led5 = 0;
			led6 = 0;
			led7 = 0;
			led8 = 1;
		}
		
	}
}
