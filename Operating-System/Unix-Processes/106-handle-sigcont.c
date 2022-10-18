#include <stdio.h>
#include <signal.h>
void handle_sigcont(int sig){
    printf("\nInput number: \n");
}

int main ()
{
    signal(SIGCONT, &handle_sigcont);

    printf("Input number: \n");
    int x;
    scanf("%d",&x);
    
    printf("%d * 5 : %d\n",x , x*5);
    return 0;
}
