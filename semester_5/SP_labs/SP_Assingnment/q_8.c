#include <signal.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
int count = 0;
void signal_handler(int signo)
{
    if (signo == SIGUSR1)
    {
        count++;
    }
}

int main()
{
    struct sigaction sa;
    sa.sa_handler = signal_handler;
    sa.sa_flags = 0;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGUSR1, &sa, NULL);

    int pid = fork();
    if (pid == 0)
    {
        for (int i = 0; i < 10; i++)
            kill(getppid(), SIGUSR1);
        return 0;
    }
    if (pid > 0)
    {
        wait(NULL);
    }
    printf("Count: %d\n", count);
}