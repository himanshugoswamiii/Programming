#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

void* roll_dice(){
    // int value = rand()%6 + 1; 
    // It's value will be local to this function. Hence we'll dynamically allocate this memory

    int *value = malloc(sizeof(int));
    *value = rand()%6 + 1;
    printf("Value address: %p\n", value); /* p stands for pointer */
    return (void*) value;
}

int main ()
{
    pthread_t t1;

    int *res;

    if(pthread_create(&t1, NULL, roll_dice, NULL) != 0){
        return 1;
    }
    if (pthread_join(t1, (void**) &res) != 0) {
        return 1;
    }

    printf("Res address: %p\n", res);
    printf("Result: %d\n", *res);

    free(res); // deallocating memory of value created in roll_dice

    return 0;
}
