#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
int main ()
{
    int id= fork();
    if (id == 0) {
        sleep(1); // Note: We don't use wait because it requires a child
    }
    int res = wait(NULL);
    printf("Current ID: %d , Parent's ID: %d\n",getpid(),getppid());

    if (res == -1) {
        printf("No children to wait for\n");
    } else {
        printf("%d finished\n", res);
    }

    return 0;
}
