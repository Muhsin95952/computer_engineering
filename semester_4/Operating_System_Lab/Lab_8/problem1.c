#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/wait.h>

void *child_thread(void *argument)
{
	int i;
	for(i = 1; i <= 20; i++)
	{
		printf("Child count: %d\n", i);
	}
	pthread_exit(NULL);
}

int main(void)
{
	pthread_t hthread;
	int ret;
	ret = pthread_create(&hthread, NULL, (void*)child_thread, NULL);
	//create thread
	
	if(ret < 0)
	{
		printf("Thread creation failed\n");
		return 1;
	}
	pthread_join(hthread, NULL);
	// Parent waits for //
	printf("Parent is continuing....\n");

	return 0;
}
