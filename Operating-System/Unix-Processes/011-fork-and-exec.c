#include <stdio.h>
#include <unistd.h>
int main ()
{
    printf("Hello : PID : %d\n",getpid());
    char *args[] = {"Himanshu", "Goswami"};
    execv("./exc2", args);
    // .exc2 is the compiled file of other program

    printf("Back to first Program\n");
    return 0;
}
