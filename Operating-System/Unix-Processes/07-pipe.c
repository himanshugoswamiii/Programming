// Communication b/w processes
// We'll send input from the parent process to child process
#include <stdio.h>
#include <unistd.h>
int main ()
{
    int fd[2];
    /* fd[0]= read
        fd[1]= write */
    if (pipe(fd) == -1) {
        printf("An error ocurred with opening a pipe\n");
        return 1;
    }

    int id=fork();
    if (id ==0) {
        // Writing when child
        close(fd[0]); // I never read inside this process : STANDARD
        int x;
        printf("Input a num: \n");
        scanf("%d",&x);
        // Write to pipe
        write(fd[1], &x, sizeof(int));
        close(fd[1]);
    
    } else {
        // Reading in parent
        close(fd[1]); // I never write from this: STD
        int y;
        read(fd[0], &y, sizeof(int));
        close(fd[0]);
        printf("Value from child process: %d\n",y);

    }
    return 0;
}
