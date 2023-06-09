#include <stdio.h>
#include <sys/shm.h>

#define SHMKEY 75
#define SHM_SIZE 1024

int main ()
{
    // Create a shared memory
    int shmid;
    shmid = shmget(SHMKEY, SHM_SIZE, 0644 | IPC_CREAT);

    // Attach it twice to the Process
    char *addr1 = shmat(shmid, NULL, 0);
    char *addr2 = shmat(shmid, NULL, 0);

    printf("addr1 %x, addr2: %x\n", addr1, addr2);
    // printf("addr1 %p, addr2: %p\n", addr1, addr2);

    // Add data to the shared region using first address
    int *pint = (int *)addr1;
    for(int i=0; i<256; i++){
        *pint++ = i;
        /* equivalent to : 
        *pint = i;
        pint++;
        */
    }

    // Read data using the 2nd virtual memory address
    pint = (int *)addr2;
    for(int i=0; i<256; i++){
        printf("index: %d , val: %d\n", i, *pint);
        pint++;
    }

    // Detach the regions
    shmdt(addr1);
    shmdt(addr2);


    // Clean the shared memory
    shmctl(shmid, IPC_RMID, NULL); // Mark shared memory segment for deletion
    
    return 0;
}
