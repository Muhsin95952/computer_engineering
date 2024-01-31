#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    int arr[100], pid[10], status[10], gsum = 0;
    for (int i = 0; i < 100; i++)
        arr[i] = i;
    for (int i = 0; i < 10; i++)
    {
        pid[i] = fork();
        int lsum = 0;
        if (pid[i] == 0)
        {
            for (int j = 0; j < 10; j += 1)
            {
                lsum = lsum + arr[i * 10 + j];
            }
            printf("%d\t", lsum);

            return lsum;
        }
        else
            wait(&status[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (WIFEXITED(status[i]) && !WEXITSTATUS(status[i]))
            printf("Child %ld terminated normally\n", (long)pid[i]);
        else if (WIFEXITED(status[i]))
            printf("Child %ld terminated with return status %d\n",
                   (long)pid[i], WEXITSTATUS(status[i]));
        else if (WIFSIGNALED(status[i]))
            printf("Child %ld terminated due to uncaught signal %d\n",
                   (long)pid[i], WTERMSIG(status[i]));
        else if (WIFSTOPPED(status[i]))
            printf("Child %ld stopped due to signal %d\n",
                   (long)pid[i], WSTOPSIG(status[i]));
        printf("\n\n");
        gsum+=WEXITSTATUS(status[i]);
    }
    printf("**%d**", gsum);
}