#include <stdio.h>
void fact(int *x)
{	
	int n=*x;
	*x=1;
	for(int i=1; i<=n; i++)
	    {
	   	 *x=i*(*x);
     	    }	
}

int main()
{
	int number, a;
	printf("Enter a number : ");
	scanf("%d", &number);
	a=number;
	fact(&number);
	printf("Factorial of %d is = %d \n",a,number);
   return 0;

}
