// C program to use the above created header file
#include <stdio.h>
#include "myhead.h"
int main()
{
    add(4, 6); // These functions are defined in myhead.h
  
    /*This calls add function written in myhead.h  
      and therefore no compilation error.*/
    multiply(5, 5);
  
    // Same for the multiply function in myhead.h
    printf("BYE!See you Soon\n");
    return 0;
}
