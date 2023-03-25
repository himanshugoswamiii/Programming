// Add two numbers using command line arguments
#include <stdlib.h>
#include <stdio.h>
int main (int argc, char** argv)
{
    int x = atoi(argv[1]);

    int y = atoi(argv[2]);

    int z = x+y;
    
    printf("%d\n", z);

    return 0;
}
