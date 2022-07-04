#include <stdio.h>
struct Student{
    int Rollno;
    char fname[20];
};
void display(struct Student S){
    printf("Student roll no is : %d \n",S.Rollno);
    printf("Student name is : %s \n",S.fname);
}
int main(){
    printf("Structur in C \n"); 
    struct Student S1; // Note here we have to give type of Student
    scanf("%d",&S1.Rollno); // We've use & to get the address
    scanf("%s",S1.fname);
    display(S1);
    return 0;
}