#include <stdio.h>
#include <unistd.h>
int main ()
{
    int pid=fork();
    int pid2=fork();
    if (pid>0) {
        printf("main parent\n");
        if (pid2==0) {
            printf("child Y\n");
        }
    }
    else {
        // For child when pid=0
        printf("child X\n");
        if (pid2==0) {
            printf("child Z\n");
        }
        
    }

    return 0;
}
