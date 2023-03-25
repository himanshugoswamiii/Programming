#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int *arr = malloc(10000*sizeof(int));
    // enough allocation for a array of 4 integers

    // arr[0] = 10;
    // arr[1] = 20;
    //arr[2] = 30;
    //arr[3] = 40;

    for (int i = 0; i<10000; i++) {
        printf("%d : ", arr[i]);
    }

    free(arr);

    return 0;
}
