// I've 2 threads (i.e. default)
#include <stdio.h>
#include <omp.h>

#define ARR_SIZE 1000000000
int A[ARR_SIZE];

int main ()
{
    /* Initialize the array with 1 */
    for (int i = 0; i < ARR_SIZE; i++) {
        A[i] = 1;
    }

    /* PARALLEL PART */
    int i, tid, numt, sum=0;
    double t1, t2;

    t1 = omp_get_wtime();
    #pragma omp parallel default( shared ) private(i, tid) 
    {
        int from, to, psum=0; // psum: private sum for each thread
        tid = omp_get_thread_num(); /* which thread */
        numt = omp_get_num_threads(); // how many threads

        /* Distribute the work-compute index range to work on */
        from = (ARR_SIZE/numt)*tid;
        to = (ARR_SIZE/numt)*(tid+1)-1;

        if(tid == numt-1)
        {
            // for last thread
            to = ARR_SIZE-1;
        }

        for (i = from; i <= to; i++) {
            psum += A[i];
        }

        /* Critical Section */
        #pragma omp critical
        sum += psum;
    }

    t2 = omp_get_wtime();
    printf("Sum is: %d , Time = %g\n", sum, t2-t1);
    
    return 0;
}
