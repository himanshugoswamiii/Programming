#include <stdio.h>
#include <math.h>
int main(){
    int x;
    printf("Enter the no for square root: ");
    scanf("%d",&x);
    double ans=sqrt((double)x);
    printf("%lf",ans);
    return 0;
}