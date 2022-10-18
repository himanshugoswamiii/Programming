// 3 Process
#include <unistd.h>
#include <stdio.h>
int main ()
{
    int id = fork();
    if (id!=0){
        // If we're in the main process
        id=fork();
    }
    printf("Hello World from id: %d\n",id);
    
    return 0;
}
