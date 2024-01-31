#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<netdb.h>

void error(const char *msg)
{
    perror(msg);
    exit(0);
}

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        fprintf(stderr,"Port No not provided. Program terminated\n");
        exit(1);
    }
    int sockfd, portno, n, newsockfd;
    char buffer[256];
    struct sockaddr_in cli_addr, serv_addr;
    socklen_t clilen;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
    {
        error("ERROR opening socket");
    }

    bzero((char *) &serv_addr, sizeof(serv_addr));
    portno = atoi(argv[1]);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(portno);
    if(bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
    {
        error("Binding Failed");
    }

    listen(sockfd, 5);
    clilen = sizeof(cli_addr);
    newsockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
    if(newsockfd < 0)
    {
        error("Error on accept");
    }

    while(1)
    {
        bzero(buffer, 255);
        n = read(newsockfd, buffer, 255);
        if(n < 0)
        {
            error("Error on reading");

        }
        printf("Client: %s\n", buffer);

        FILE* pipe = popen(buffer, "r");
        if (pipe == NULL) 
        {
            error("Error executing command\n");
        }
        while(fgets(buffer, 255, pipe)!=NULL)
        {
            n = write(newsockfd, buffer, strlen(buffer));
            if(n < 0)
            {
                error("Error on writing\n");
            } 
            fflush(stdout);
        }
        
        int i = strncmp("Bye", buffer, 3);
        if(i == 0)
        {
            break;
        }
    }
    close(newsockfd);
    close(sockfd);
    return 0;
}

