#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024

int main() {
    key_t key = ftok("shared_memory", 1234); // Generate a unique key
    int shmid = shmget(key, SHM_SIZE, IPC_CREAT | 0666); // Create shared memory segment

    if (shmid == -1) {
        perror("shmget");
        exit(1);
    }

    char *shmaddr = (char *)shmat(shmid, NULL, 0); // Attach shared memory segment

    if (shmaddr == (char *)-1) {
        perror("shmat");
        exit(1);
    }

    printf("Enter a message: ");
    fgets(shmaddr, SHM_SIZE, stdin); // Write message to shared memory

    shmdt(shmaddr); // Detach shared memory segment

    return 0;
}
