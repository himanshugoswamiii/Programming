#include <stdio.h>
int f(int x, int *py, int **ppz){
    **ppz += 1;
    printf("c became : %d\n", *py);
    *py += 2;
    printf("c became : %d\n", *py);
    x += 3;
    printf("c became : %d\n", *py);
    return x+*py+**ppz;
}

int main ()
{
    int c = 4;
    int *b = &c;
    int **a = &b;

    printf("%d\n", f(c, b, a));
    
    return 0;
}
