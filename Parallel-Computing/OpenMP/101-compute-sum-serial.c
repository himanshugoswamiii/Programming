// Sum of an array
#include <stdio.h>
#include <omp.h>

#define ARR_SIZE 1000000000
int A[ARR_SIZE];

int main ()
{
    int i, sum=0;
    double t1, t2;
    // Initialize the Array with some values
    for (int i = 0; i < ARR_SIZE; i++) {
        A[i] = 1;
    }

    t1 = omp_get_wtime();
    /* Sum up the Array */
    for (int i = 0; i < ARR_SIZE; i++) {
        sum += A[i];
    }
    t2 = omp_get_wtime();

    printf("Sum is: %d , Time = %g\n", sum, t2-t1);
    return 0;
}
