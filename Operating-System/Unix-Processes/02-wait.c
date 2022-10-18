// Print first 5 nos using child process and last 5 using parent process
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
int main ()
{
    int id = fork();
    int n;
    if (id==0){
        // Child process
        n=1;
    } else {
        n = 6;
    }
    if (id != 0) {
        wait(NULL);
    }

    int i;
    for (i = n; i < n+5; i++) {
        printf("%d\n",i);
        fflush(stdout); // Print when i call printf
    }
    return 0;
}
