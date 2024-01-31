#include <stdio.h>
int main(void){
int a;
int *p;

printf("Enter an integer: ");
scanf("%d", &a);

p=&a;
printf("The value of the variable a is: %d\n ", a);
printf("The adress of the variable a is: %p\n", &a);
printf("The value of varible p is: %p\n", p);
printf("The value pointed by p is *p = %x\n ", *p);
printf("The address of p is: %p\n", &p);
return 0;
}

