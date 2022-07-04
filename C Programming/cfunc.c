#include "stdio.h"
int add(int a, int b) // Here a and b are formal parameters
{ 
    return (a+b);
}
int main ()
{
    int sum=add(5,6); // Here 5 and 6 are actual parameters
    printf("%d\n",sum);
    return 0;
}
