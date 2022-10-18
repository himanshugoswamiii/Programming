#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>

int main ()
{
    int id1 = fork();
    int id2 = fork();
    if (id1!=0 && id2!=0) {
        printf("Parent: id1: %d, id2: %d\n",id1,id2);
    }else if (id1==0 && id2!=0) {
        printf("Process id1: %d, id2: %d\n",id1,id2);
    }else if (id1!=0 && id2==0) {
        printf("Process id1: %d, id2: %d\n",id1,id2);
    }else{
        printf("Last child id1: %d, id2: %d\n",id1,id2);
    }
    while (wait(NULL)!=-1 || errno != ECHILD) {
        printf("Waited for a child to finished\n");
    }
    return 0;
}
