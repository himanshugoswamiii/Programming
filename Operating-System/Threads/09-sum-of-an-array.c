#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define SIZE 2

int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void* sumOfArray(void *arg){
    int index = *(int *)arg; // convert to integer pointer then get its value
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += nums[index+i];
    }

    *(int *)arg = sum;

    return arg;
}

int main ()
{

    pthread_t th[SIZE]; // Creating two threads
    for (int i = 0; i < SIZE; i++) {
        int *a = malloc(sizeof(int));
        *a = i*5; // 0 in the first time , 5 in the second time
        if (pthread_create(&th[i], NULL, sumOfArray, a) != 0) {
            perror("Failed to Create thread");
        }
    }

    int globalSum=0;
    for (int i = 0; i < SIZE; i++) {
        void *r; // returned values from the thread
        if (pthread_join(th[i], &r) != 0) {
            perror("Failed to Join thread");
        }
        globalSum += *(int *)r;
        free(r);
    }

    printf("Sum of Array is %d \n", globalSum);
    
    return 0;
}
