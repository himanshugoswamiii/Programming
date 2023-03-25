#include <stdio.h>
#include <omp.h>
int main ()
{
    printf("omp_get_wtime() = %g\n", omp_get_wtime());
    printf("omp_get_wtick() = %g\n", omp_get_wtick()); // gives resolution: i.e sec, ms, ns (10^-9)
    return 0;
}
