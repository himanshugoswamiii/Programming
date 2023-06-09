#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/msg.h>

#define MSG_SIZE 128
#define MSGKEY 1234

struct msgbuf {
    long mtype;
    char mtext[MSG_SIZE];
};

int main() {
    int msqid;
    key_t key;
    struct msgbuf msg;
    
    // retrieve message queue created by sender program
    if ((msqid = msgget(MSGKEY, 0644)) == -1) {
        perror("msgget");
        exit(1);
    }
    
    // receive message from sender
    if (msgrcv(msqid, &msg, MSG_SIZE, 1, 0) == -1) {
        perror("msgrcv");
        exit(1);
    }
    
    printf("Received message from sender: %s\n", msg.mtext);
    
    // remove message queue
    if (msgctl(msqid, IPC_RMID, NULL) == -1) {
        perror("msgctl");
        exit(1);
    }
    
    return 0;
}
