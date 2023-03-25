#include <stdio.h>

int main ()
{
    FILE *fp = fopen("hello.txt", "r");

    fclose(fp);
    return 0;
}
