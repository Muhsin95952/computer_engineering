#include <stdio.h>

void Enter_Array(int *arry, int arr_size)
	{
		printf("Enter elements of the array: ");
		for (int i = 0; i < arr_size; i++)
		{

			scanf("%d ", &arry[i]);
		}
	}
int *sorting(int *arr, int arr_size)
	{
		int temp;
		for (int i = 0; i< arr_size-1; i++){
			for(int j = i+1; j < arr_size; j++){
				if (arr[j] < arr[i]){
					temp = arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
				}
			}
		}
		return arr;
	}

void display(int *arr, int arr_size)
	{
		for (int i =0; i < arr_size; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}

int main(void)
{
	int arr_size;
	printf("Enter size of the array: ");
	scanf("%d ", &arr_size);
	
	int array[arr_size];
	Enter_Array(array, arr_size);

	int *sorted_array = sorting(array, arr_size);
	
	display(sorted_array, arr_size);

	return 0;
}	

