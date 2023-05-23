#include <stdio.h>
#include <pthread.h>

void *child_thread(int *argument)
{
	int i;
	for(i = 1; i <= 20; i++)
	{
		printf("Child count = %d\n", i);
	}
}

int main(void)
{
	pthread_t hthread;
	int ret;

	ret = pthread_create(&hthread, NULL, (void*)child_thread, NULL);
	if(ret < 0)
	{
		 printf("Thread creation Failed\n ");
		 return 1;
	}
	pthread_join(hthread, NULL);
	printf("Master thread is continuing.....\n");
	return 0;

}

