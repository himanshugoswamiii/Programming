/* Example of forks running in parallel because the outputs will be jumbled instead of all 3 outputs at the same time*/
#include <stdio.h>
#include <unistd.h>
int main ()
{
    // int pid_parent=getpid();
    // printf("Parents id : %d\n",pid_parent);
    // Before fork 
    int pid=fork();
    int pid2=fork();
    printf("pid is : %d\n",pid);
    printf("pid2 is : %d\n",pid2);
    printf("Parent of the current process : %d\n",getpid());
    // if(pid==0){
    //     printf("In First Child\n");
    //     if (pid2==0) {
    //         printf("First Parent\n");
    //     }
    //     else {
    //         printf("Grandchild\n");
    //     }
    // }
    // else {
    //     printf("In Parent\n");
    // }

    return 0;
}
