#include <stdio.h>

#define ROW 2
#define COL 2

void dot_product(int array1[ROW][COL], int array2[ROW][COL])
	{
		int product = 0;
		for(int i = 0; i<ROW; i++){
			for(int j = 0; j<COL; j++){
				product += array1[i][j] * array2[i][j];
			}
		}
		printf("The DOT PRODUCT of the two matrices is: %d\n\n", product);
	}

int main(void)
	{
		int array1[ROW][COL] = {{1, 2}, {3, 4}};
		int array2[ROW][COL] = {{5, 6}, {7, 8}};

		dot_product(array1, array2);

		return 0;
	}
