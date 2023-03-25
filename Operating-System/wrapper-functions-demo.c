#include <stdio.h>

void printStr(char str[]){
    // this is a wrapper function to print a string
    printf("%s\n",str);
}

int main ()
{
    char str[] = "My name is himanshu";
    printStr(str);
    return 0;
}
