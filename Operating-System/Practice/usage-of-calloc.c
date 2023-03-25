#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *arr = calloc(4, sizeof(int));
    // Creating an array using calloc

    arr[2] = 20;

    for (int i = 0; i < 4; i++) {
        printf("%d\n", arr[i]);
    }

    free(arr); // to avoid the memory leak

    return 0;
}
