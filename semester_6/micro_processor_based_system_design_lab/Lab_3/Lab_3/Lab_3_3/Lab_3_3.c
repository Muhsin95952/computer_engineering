#include <reg51.h>

sbit btn1 = P2^1;
sbit btn2 = P2^2;

sbit led1 = P1^0;
sbit led2 = P1^1;
sbit led3 = P1^2;
sbit led4 = P1^3;

void main(){
	
	while(1){
		if(btn1 == 0 && btn2 == 0){
			led1 = 1;
			led2 = 0;
			led3 = 0;
			led4 = 0;
		}
		else if(btn1 == 0 && btn2 == 1){
			led1 = 0;
			led2 = 1;
			led3 = 0;
			led4 = 0;
		}
		else if(btn1 == 1 && btn2 == 0){
			led1 = 0;
			led2 = 0;
			led3 = 1;
			led4 = 0;
		}
		else if(btn1 == 1 && btn2 == 1){
			led1 = 0;
			led2 = 0;
			led3 = 0;
			led4 = 1;
		}
	}
}
	