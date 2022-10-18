#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h> 
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
            usleep(500000); // 0.5 sec

        }
    }else {
        kill(pid, SIGSTOP);  // Stop the child
        int t;
        do {
            printf("Time in seconds for executions:\n");
            scanf("%d", &t);
            if (t>0){
                // Why check t>0 because if t=-ve then it'll sleep for int max seconds
                kill(pid, SIGCONT); // Continue the child
                sleep(t); // While child is printing parent is sleeping
                kill(pid, SIGSTOP);
            }
        }while (t>0);


        kill(pid, SIGKILL);  // Terminate the child
        wait(NULL);
        printf("parent Process Ended\n");
    }
    return 0;
}
