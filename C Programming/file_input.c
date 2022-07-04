#include<stdio.h>
#include<stdlib.h>
int main()
{
   printf("Enter the Sentence into the file \n");
   FILE *fileptr;
   fileptr=fopen("Himanshu.txt","w");
   return 0;
}
