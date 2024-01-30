#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>

void sigchld_handler(int sig) {
    // Handle SIGCHLD signal (child process termination)
    printf("Child process terminated.\n");
}

int main() {
    pid_t child_pid;

    child_pid = fork();

    if (child_pid == 0) {
        // Child process
        printf("Child process: Running...\n");
        sleep(2); // Simulate some work
        printf("Child process: Exiting.\n");
        exit(0);
    } else if (child_pid > 0) {
        // Parent process
        printf("Parent process: Waiting for child to terminate...\n");

        // Method 1: Using pause()
        printf("\nMethod 1: Using pause()\n");
        pause(); // Suspend until a signal is received

        // Method 2: Using sigsuspend()
        printf("\nMethod 2: Using sigsuspend()\n");
        sigset_t mask;
        sigemptyset(&mask);
        sigaddset(&mask, SIGCHLD);
        sigsuspend(&mask); // Wait for SIGCHLD while blocking other signals

        // Method 3: Using sigwait()
        printf("\nMethod 3: Using sigwait()\n");
        sigwait(&mask, &sig); // Wait for SIGCHLD, returning the signal

        printf("Parent process: Child terminated.\n");
    } else {
        // Fork failed
        perror("fork");
        exit(1);
    }

    return 0;
}
