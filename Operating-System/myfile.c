#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>

int main ()
{
    int pid=fork();
    // If pid<0 => child process is not created
    if(pid>0){ // Parent function
        //sleep(20);
        printf("Parent Process created\n");
        printf("Parent id : %d",pid);
        wait(NULL);
    }
    else {
        sleep(10);
        printf("child process is created\n");
    }

    return 0;
}
