#include <stdio.h>
#include <unistd.h>

int main ()
{

    printf("Started\n");
    int pid = fork();
    if (pid == 0) {
        char* args[] = {"Himanshu", "goswami"};
        execv("./demo", args);
        printf("child is running\n");
    }

    printf("Ended\n");

    return 0;
}
