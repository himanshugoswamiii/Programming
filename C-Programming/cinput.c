#include <stdio.h>
int main(){
    int x;
    float y;
    char arr[20]; // char Array - string
    printf("Enter a integer : ");
    scanf("%d",&x); // We've to give address in scanf - &x
    printf("Enter a float value: ");
    scanf("%f",&y);
    printf("Enter a string value: ");
    scanf("%s",arr); // Here use arr instead of &arr

    // Display
    printf("x is %d , y is %f, arr is %s",x,y,arr);
    return 0;

}