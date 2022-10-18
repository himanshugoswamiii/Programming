#include <stdio.h>
#include <signal.h>
void handle_sigtstp(int sig){
    printf("\nStop not allowed\n");
}

int main ()
{
    signal(SIGTSTP, &handle_sigtstp);

    printf("Input number: \n");
    int x;
    scanf("%d",&x);
    
    printf("%d * 5 : %d\n",x , x*5);
    return 0;
}
