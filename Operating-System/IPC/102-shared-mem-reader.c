#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024

int main() {
    key_t key = ftok("shared_memory", 1234); // Same key as the writer
    int shmid = shmget(key, SHM_SIZE, 0666); // Get the shared memory segment

    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }

    char *shmaddr = (char *)shmat(shmid, NULL, 0); // Attach shared memory segment

    if (shmaddr == (char *)-1) {
        perror("shmat");
        exit(1);
    }

    printf("Message in shared memory: %s", shmaddr); // Read and print the message

    shmdt(shmaddr); // Detach shared memory segment

    shmctl(shmid, IPC_RMID, NULL); // Mark shared memory segment for deletion

    return 0;
}
