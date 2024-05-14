#include <reg51.h>

sbit mybit = P2^1;

void main(){
	unsigned int i;
	for(i = 0; i < 50; i++){
		mybit = 0;
		mybit = 1;
	} 
}	