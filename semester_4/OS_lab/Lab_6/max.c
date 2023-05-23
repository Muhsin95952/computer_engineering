#include <stdio.h>
#include <unistd.h>

int main(void)
{
	
	int x[10] = {9 ,2, 3, 4, 1, 7, 5, 4, 8, 0};
	int max_num = x[0];
       for (int i = 0; i<10; i++)
       {
		if (max_num < x[i])
	 	max_num = x[i];	
       }
       printf("Max is %d\n", max_num);
	return 0;
}	
