#include <stdio.h>
int fact(int x){
	int fact=1;
	for(int i=1; i<=x; i++)
	{
		fact=fact*i;
	}
return fact;

}

int main(){

	int x=1;
	int y=1;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Factorial is  %d \n", x);
	y=fact(x);
	printf("%d \n",y);
	return 0;
}
