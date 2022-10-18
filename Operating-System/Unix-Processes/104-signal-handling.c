// Handling ctrl-z
#include <stdio.h>
#include <signal.h>

void handle_sigtstp(int sig){
    printf("\nStop not allowed\n");
}

int main ()
{
    struct sigaction sa;
    sa.sa_handler = &handle_sigtstp;
    sa.sa_flags = SA_RESTART; // something to do with SIGTSTP and scanf
    sigaction(SIGTSTP, &sa, NULL);
    // The last param is used to store the previous handling of signal
    // if we want to restore it later

    printf("Input number: \n");
    int x;
    scanf("%d",&x);
    
    printf("%d * 5 : %d\n",x , x*5);
    return 0;
}
