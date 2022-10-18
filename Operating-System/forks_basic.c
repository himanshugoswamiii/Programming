#include <stdio.h>
#include <unistd.h>
int main ()
{
    int pid=fork();
    printf("%d\n",pid); // pid of child
    printf("%d\n",getpid()); // pid of parent
    return 0;
}
