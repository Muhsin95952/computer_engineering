#include <reg51.h>

sbit mybit = P1^0;

void main(){
	
	
	unsigned int i;
	
	while(1){
		
		mybit = 0;
		for(i = 0; i < 10; i++);
		mybit = 1;
	}
		
}