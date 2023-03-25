#include <stdio.h>
#include <unistd.h>
int main ()
{
    printf("hello world\n");

    int x = 10;
    int y = 20;
    int z = x+y;
    printf("%d\n", z);

    sprintf(str, "%d\n", z);
    execv("./exc2", str);
    return 0;
}
