#include <reg51.h>

sbit btn = P2^1;
sbit led = P1^0;
sbit led1 = P1^1;

void main(){
	
	while(1){
		if(btn == 0){
			led = 1;
			led1 = 0;
		}
		else if(btn == 1){
			led = 0;
			led1 = 1;
		}
	}
}
	