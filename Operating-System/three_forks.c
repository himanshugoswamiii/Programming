#include <stdio.h>
#include <unistd.h>
int main ()
{

    printf("*** HELLO WORLD ****\n");
    int pid=fork(); 
    int pid2=fork(); 
    int pid3=fork(); 

    if (pid>0) {
        printf("Parent\n");
        if (pid2==0) {
            printf("First child in Parent\n");
            if (pid3==0) {
            printf("Second Child in Parent\n");
            }
        }
        
    }
    else {
        printf("Child of first Process\n");
        if (pid2==0) {
            printf("First child in Parent\n");
            if (pid3==0) {
            printf("Second Child in Parent\n");
            }
        }
    }


    return 0;
}
