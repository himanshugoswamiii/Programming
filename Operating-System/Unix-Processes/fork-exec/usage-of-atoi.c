#include <stdio.h>
#include <stdlib.h> // used for atoi

int main ()
{
    char str[] = "123";

    int x = atoi(str);

    printf("%s\n", str);

    int y = 10;

    //int z = str+y; -- ERROR : Incompatible types
    int z = x+y;

    printf("%d\n", z);
    return 0;
}
