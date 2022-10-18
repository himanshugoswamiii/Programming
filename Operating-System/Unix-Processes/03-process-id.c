#include <stdio.h>
#include <unistd.h>
int main ()
{
    int id= fork();
    printf("Current ID: %d , Parent's ID: %d\n",getpid(),getppid());
    return 0;
}
