#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main ()
{
    char* args[] = {"Himanshu", "Goswami"};
    printf("What is my name\n");

    execv("./demo", args);


    return 0;
}
