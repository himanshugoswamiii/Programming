#include <unistd.h>
#include <stdio.h>
int main ()
{
    
    int pid=fork();
    printf("Parent\n");

    int x=sleep(10);
    printf("%d",x);
    return 0;
}
