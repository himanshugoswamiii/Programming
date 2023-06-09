#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define NUM_THREADS 2
#define ARR_SIZE 10

int nums[ARR_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void* sum(void* arg){
    int index = *(int *)arg;

    int localProd = 1;
    for (int i = 0; i < ARR_SIZE/2; i++) {
        printf("nums[%d]: %d\n", i+index, nums[i+index]);
        sleep(1);
        localProd *= nums[i+index];
    }

    *(int *)arg = localProd;
    return arg;
}

int main ()
{
    pthread_t th[NUM_THREADS];
    int globalProd = 1;

    // Creation of threads
    for (int i = 0; i < NUM_THREADS; i++) {
        int *index = malloc(sizeof(int));
        *index = i*(ARR_SIZE/2);
        if (pthread_create(&th[i], NULL, sum, index) != 0) {
            perror("Error in creation of threads");
            exit(1);
        }
    }

    // Joining the threads
    for (int i = 0; i < NUM_THREADS; i++) {
        void *res;
        if (pthread_join(th[i], &res) != 0) {
            perror("Error in joining the threads");
            exit(1);
        }
        globalProd *= *(int *)res;
        free(res);
        
    }

    printf("Product of Array is : %d\n", globalProd);
    return 0;
}
