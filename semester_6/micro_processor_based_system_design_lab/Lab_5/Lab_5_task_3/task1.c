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
	P0 = 0x19;	//4
	delay();
	P0 = 0x12;	//5
	delay();
	P0 = 0x02;	//6
	delay();
	P0 = 0xF8;	//7
	delay();
	P0 = 0x00;	//8
	delay();
	P0 = 0x18; 	//9
	delay();
	P0 = 0x08;	//A
	delay();
	P0 = 0x03;	//B
	delay();
	P0 = 0x46;	//C
	delay();
	P0 = 0x21;	//D
	delay();
	P0 = 0x06;	//E
	delay();
	P0 = 0x0E;	//F
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