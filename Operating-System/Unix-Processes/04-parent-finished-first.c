#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
int main ()
{
    int id= fork();
    if (id == 0) {
        sleep(1); // Note: We don't use wait because it requires a child
    }
    printf("Current ID: %d , Parent's ID: %d\n",getpid(),getppid());

    wait(NULL);
    return 0;
}
