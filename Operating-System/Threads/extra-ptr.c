#include <stdio.h>

int* func(){
    int x = 20;
    return &x;
}

int main ()
{
    int *x;

    x = func();

    printf("%d\n", *x);
    return 0;
}
