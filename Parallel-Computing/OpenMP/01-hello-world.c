#include <stdio.h>
#include <omp.h>

int main ()
{
    /* Specify the block to be executed in parallel */
    #pragma omp parallel
    {
        // Print "hello world" from each thread
        printf("Hello World\n");
    }
    return 0;
}
