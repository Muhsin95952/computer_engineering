#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/wait.h>

int this_is_global;
void thread_func(void *ptr);

int main()
{
	int local_main;
	int pid, status;
	pthread_t thread1, thread2;

	printf("First we create two threads to see better what context they share...\n");
	this_is_global = 1000;
	printf("Set this_is_global = %d\n", this_is_global);

	pthread_create(&thread1, NULL, (void*)&thread_func, (void*)NULL);
	pthread_create(&thread2, NULL, (void*)&thread_func, (void*)NULL);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	printf("After thread, this_is_global = %d\n", this_is_global);
	printf("\n");
	printf("Now that the threads are done, let's call fork(). \n");

	local_main = 17; 
	this_is_global = 17;

	printf("Before fork(), local_main = %d, \n this_is_global = %d,\n", local_main, this_is_global);

	pid = fork();
	if(pid == 0)
	{
		// this is the child
		printf("in Child, pid %d: &global %ls &local: %ls\n", getpid(), &this_is_global, &local_main);
	
		local_main = 13;
		this_is_global = 23;

		printf("Child set local mian = %d, this_is_global = %d\n", local_main, this_is_global);
		exit(0);
	}
	else
	{
		//this is parent
		printf("In parent pid = %d: &global = %ls &local = %lsn", getppid(), &this_is_global, &local_main);
		wait(NULL);
		printf("in parent, local_main = %d, this_is_global = %d\n", local_main, this_is_global);
	}
	exit(0);

	return 0;
}

	void thread_func( void *dummy)
	{
		int local_thread;
		int local_main;
		printf("Thread %ld, pid %d, addresses: &global: %ls &local: %ls\n", pthread_self(), getpid(), &this_is_global, &local_main);
		
		this_is_global++;
		
		printf("in Thread %ld, incremented this_is_global = %d\n", pthread_self(), this_is_global);

		pthread_exit(0);
	}
