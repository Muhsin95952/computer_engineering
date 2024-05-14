#include <reg51.h>

void delay(void);

void main(void){
P0 = 0x00;
for(;;){
	P0 = 0x40;	//0
	delay();
	P0 = 0xF9;	//1
	delay();	
	P0 = 0x24;	//2
	delay();
	P0 = 0x30;	//3
	delay();
	
}
}
void delay(void){
	unsigned int i;
	for(i = 0; i < 30000; i++);
	for( i = 0; i < 30000; i++);
	for( i = 0; i < 30000; i++);
	for( i = 0; i < 30000; i++);
	
}