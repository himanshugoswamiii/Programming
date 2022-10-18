#include <stdio.h>
#include <unistd.h>
int main ()
{
    int pid=fork();
    int pid2=fork(); // Second fork
    int pid3=fork();
    printf("Child PID: %d\n",pid); // pid of child
    return 0;
}
