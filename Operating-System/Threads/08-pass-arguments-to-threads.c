// Ref: Code Vault
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define SIZE 10

int primes[SIZE] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};

void* routine(void *arg){
    int index = *(int *)arg;
    printf("Thread Index: %d, Prime Value: %d\n", index, primes[index]);

    free(arg); 

    return NULL;
}

int main ()
{
    pthread_t th[SIZE];

    for (int i = 0; i < SIZE; i++) {
        int *a = malloc(sizeof(int));
        *a = i;
        // if (pthread_create(&th[i], NULL, routine, &i) != 0) {
        if (pthread_create(&th[i], NULL, routine, a) != 0) {
            perror("Failed to create thread");
        }
    }

    for (int i = 0; i < SIZE; i++) {
        if (pthread_join(th[i], NULL) != 0) {
            perror("Failed to join thread");
        }
    }
    return 0;
}
