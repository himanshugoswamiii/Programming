/* Avoid using the same random number each time */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
    int x;
    srand(time(NULL)); // default is srand(1)
    for (int i = 0; i < 20; i++) {
        x = rand()%10;
        printf("%d\n", x);
        
    }
    return 0;
}
