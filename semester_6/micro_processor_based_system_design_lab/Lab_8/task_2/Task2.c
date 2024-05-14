#include <reg51.h>

unsigned int i;

void delay(int time){
unsigned int j, k;
	for(j = 0; j < time; j++){
		for(k = 0; k < 1225; k++) {}
	}
}

void main(){
	while(1){
		for(i = 0; i < 9; i++){
			P1 = i;
			delay(100);
		}	
	}
}
	
