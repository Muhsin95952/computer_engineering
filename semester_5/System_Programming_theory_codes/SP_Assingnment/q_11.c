#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

void *copy_file(void *arg) {
    FILE *src = (FILE *)arg;
    FILE *dest = fopen("destination.txt", "w");
    char buffer[BUFFER_SIZE];

    while (fread(buffer, 1, BUFFER_SIZE, src) > 0) {
        fwrite(buffer, 1, BUFFER_SIZE, dest);
    }

    fclose(src);
    fclose(dest);
    return NULL;
}

int main() {
    pthread_t thread1, thread2;
    FILE *src1 = fopen("source1.txt", "r");
    FILE *src2 = fopen("source2.txt", "r");

    if (src1 == NULL || src2 == NULL) {
        perror("Error opening files");
        return 1;
    }

    // Create threads for copying each file
    pthread_create(&thread1, NULL, copy_file, src1);
    pthread_create(&thread2, NULL, copy_file, src2);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("File copying completed.\n");

    return 0;
}
