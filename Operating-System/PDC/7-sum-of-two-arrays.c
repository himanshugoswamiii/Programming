/* Each thread will sum 1 respective element */
#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define ARR_SIZE 5

int Arr1[ARR_SIZE] = {11, 2, 33, 4, 5};
int Arr2[ARR_SIZE] = {1, 2, 3, 4, 5};

void* sumOfArray(void *arg){
    int index = *(int *)arg;
    int val = Arr1[index]+Arr2[index]; // Summing up the corresponding index values
    *(int *)arg = val;
    pthread_exit(arg);
}

int main ()
{

    int finalArr[5];

    pthread_t th[5]; // Creating 5 threads
    for (int i = 0; i < 5; i++) {
        int* index = malloc(sizeof(int));
        *index = i;
        pthread_create(&th[i], NULL, sumOfArray, index);
    }

    for (int i = 0; i < 5; i++) {
        void *res;
        pthread_join(th[i], &res);

        finalArr[i] = *(int *)res;
        free(res);
    }

    // Printing the final array
    for (int i = 0; i < 5; i++) {
        printf("%d\n", finalArr[i]);
    }
    
    return 0;
}
