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
    if (id == -1){
        // E:1
        printf("An Error occured with fork() \n");
        return 4;
    }

    if (id ==0) {
        close(fd[0]);
        int x;
        printf("Input a num: \n");
        scanf("%d",&x);
        // Write to pipe
        if (write(fd[1], &x, sizeof(int)) == -1){
            // E: 2
            printf("An error occured with writing to the pipe\n");
            return 2;
        };
        close(fd[1]);
    
    } else {
        // Reading in parent
        close(fd[1]); // Standard
        int y;
        if (read(fd[0], &y, sizeof(int)) == -1){
            // E: 3
            printf("An error occured with reading from the pipe\n");
        }
        close(fd[0]);
        printf("Value from child process: %d\n",y);
        y=y*2;
        printf("New y: %d\n",y);

    }
    return 0;
}
