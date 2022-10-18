#include "stdio.h"
#include <unistd.h>
int main (int argc, char **argv)
{
    printf("Name: %s\n",argv[0]);
    printf("Name: %s\n",argv[1]);
    printf("Hello : PID : %d\n",getpid());
    return 0;
}
