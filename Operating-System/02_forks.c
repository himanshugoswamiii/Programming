#include <stdio.h>
#include <unistd.h>
int main ()
{
    int pid=fork();
    int pid2=fork();
    printf("%d\n",pid); // pid of child
    printf("%d\n",pid2); // pid of child of child
    printf("%d\n",getpid()); // pid of first parent
    return 0;
}
