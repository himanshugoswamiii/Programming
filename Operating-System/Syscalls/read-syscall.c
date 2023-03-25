#include <unistd.h>
#include <stdio.h>

int main ()
{
    char buffer[1024];
    scanf("%s", buffer);

    printf("Read bytes : %s\n", buffer);
    return 0;
}
