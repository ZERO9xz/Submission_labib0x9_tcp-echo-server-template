#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<stdbool.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<perror.h>

void die(int err, char* msg) {
    if (err == -1) {
        perror(msg);
    }
}

int main() {

    // To-Do: TCP socket create

    // To-Do: Socket Binding

    // To-Do: Listening

    // To-Do: Receiving Loop

    // To-Do: Accept Client Connection

    // To-Do: Read from client

    // To-Do: Send to client

    return 0;
}
