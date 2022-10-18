#include <stdio.h>
#include <unistd.h>
int main ()
{
    printf("This is the process\n");
    int pid=getpid();
    printf("Pid is : %d\n",pid);
    return 0;
}
