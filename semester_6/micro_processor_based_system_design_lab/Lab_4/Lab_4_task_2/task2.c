#include <reg51.h>


sbit i_btn = P3^2;
int i = 0;
int count = 0; 
void E_I_() interrupt 0
	{
		if(count < 15)
			P1 = count++;
		else
			count = 0;
	}
	
void main(){
		i_btn = 1;
		EA = 1;
		EX0 = 1;
	  IT0 = 1;
	while(1){
		}
	}