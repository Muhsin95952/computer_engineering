#include <stdio.h>
#include <unistd.h>
#include <pthread.h>
#include <stdlib.h>

void *child_thread(void *argument)
{
	int count = *((int*) argument); 
    int i = 0;
    for (i = 0; i< count; i++)
    {
        printf("line no: %d\n", i);
    }
    pthread_exit(NULL);
}

int main()
{
    int count = 5;
    pthread_t thread;
    pthread_create(&thread, NULL, child_thread, (void*)&count);

    printf("Parent ic continuing .....\n");
    pthread_exit(NULL);
    return 0;
}
