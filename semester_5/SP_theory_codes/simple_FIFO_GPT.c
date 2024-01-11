#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define FIFO_FILE "myfifo"

int main() {
    pid_t childpid;
    // Creating the FIFO file
    mkfifo(FIFO_FILE, 0666);

    childpid = fork();

    if (childpid < 0) {
        perror("Failed to fork");
        return 1;
    }
    if (childpid == 0) { 
        int fd;
        char readbuf[1024];

        fd = open(FIFO_FILE, O_RDONLY);
        if (fd == -1) {
            perror("Failed to open FIFO for reading");
            return 1;
        }

        read(fd, readbuf, sizeof(readbuf));
        printf("Child Process: Message received from parent: %s\n", readbuf);
        close(fd);
    } else { 
        int fd;
        char writebuf[] = "Hello, child!";

        fd = open(FIFO_FILE, O_WRONLY);
        if (fd == -1) {
            perror("Failed to open FIFO for writing");
            return 1;
        }

        write(fd, writebuf, strlen(writebuf) + 1);
        close(fd);
        wait(NULL);
    }
    unlink(FIFO_FILE);
    return 0;
}
