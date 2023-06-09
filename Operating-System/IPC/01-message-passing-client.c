// sender/server program
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // for strcpy()
#include <sys/ipc.h>
#include <sys/msg.h>

#define MSG_SIZE 128
#define MSGKEY 1234

struct msgbuf{
    long mtype;
    char mtext[MSG_SIZE];
};

int main ()
{
    int msqid;

    struct msgbuf msg;

    // create message queue or retrieve if it already exists
    if( (msqid = msgget(MSGKEY, 0644|IPC_CREAT)) == -1){
        perror("In msgget");
        exit(1);
    }

    // Create message to send
    msg.mtype = 1;
    strcpy(msg.mtext, "Hello, Receiver!");

    // send msg to receiver
    if(msgsnd(msqid, &msg, MSG_SIZE, 0) == -1){
        perror("in msgsend");
        exit(1);
    }

    printf("Sent message to receiver\n");
    return 0;
}
