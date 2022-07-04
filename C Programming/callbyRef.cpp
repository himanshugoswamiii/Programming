#include <stdio.h>
// Call by reference
void change(int *x, int *y){
    (*x)++; // Note x++ wont work we have to use *x everywhere
    ++*y;
    // 
}
int main(){
    int x=10;
    int y=20;
    printf("Initial x and y: %d %d \n",x,y);
    change(&x,&y);
    printf("After change x and y: %d %d \n",x,y);
    return 0;

}