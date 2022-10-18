// SIGKILL
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h> // Used for kill()
int main ()
{
    int pid = fork();
    if (pid == -1){
        // Unable to create a fork
        return 1;
    }

    if (pid == 0) {
        // Child
        while (1) {
            printf("Infinite LOOP\n");
            usleep(50000);

        }
    }else {
        sleep(1); // parent should sleep for 1 sec before the next command runs
        kill(pid, SIGKILL); // kill doesn't kill it just sends the signal
        wait(NULL);
    }
    return 0;
}
