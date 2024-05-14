#include <reg51.h>

unsigned int i, l;

void delay(int time){
unsigned int j, k;
	for(j = 0; j < time; j++){
		for(k = 0; k < 1225; k++) {}
	}
}

void main(){
	while(1){
		for(i = 0x00; i <= 0x90; i=i+0x10){
			for(l = 0; l < 10; l++){
				P1 = i | l;
				delay(100);
			}
		}
	}
}
	
