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
    int sockfd, portno, n;
    struct sockaddr_in serv_addr;
    struct hostent *server;

    char buffer[256];
    if(argc < 3)
    {
        fprintf(stderr,"usage: %s hostname port\n",argv[0]);
        exit(1);
    }
    portno = atoi(argv[2]);
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
    {
        error("ERROR opening socket");
    }
    server = gethostbyname(argv[1]);
    if(server == NULL)
    {
        fprintf(stderr,"Error, no such host");
    }
     bzero((char *) &serv_addr, sizeof(serv_addr));
     serv_addr.sin_family = AF_INET;
     bcopy((char *) server->h_addr, (char *) &serv_addr.sin_addr.s_addr, server->h_length);
     serv_addr.sin_port = htons(portno);
     if(connect(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
     {
        error("connection failed");
     }

     while (1)
     {
        bzero(buffer, 255);
        printf("Enter command: ");
        fgets(buffer,sizeof(buffer), stdin);
        n = write(sockfd, buffer, strlen(buffer));
        if(n < 0)
        {
            error("Error on writing");
        }
        bzero(buffer, 255);
        //printf("After Buffer zero :%s\n",buffer);
        n = read(sockfd, buffer, 255);
        if(n < 0)
        {
            error("Error on reading. ");
        }
        printf("Server: %s", buffer);

        int i = strncmp("Bye", buffer, 3);
        if(i == 0)
        {
            break;
        }
        while (i != 0 && n == 255) // Continue reading until all data is received
        {
            bzero(buffer, 255);
            n = read(sockfd, buffer, 255);
            if(n < 0)
            {
                error("Error on reading. ");
                break;
            }
            printf("%s", buffer); // Print the received data
            i = strncmp("Bye", buffer, 3);
    }
    if(i == 0)
    {
        
        break;
    }

    }
    close(sockfd);
    return 0;   
}

