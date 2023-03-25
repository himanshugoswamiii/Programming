#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main ()
{
    int x;
    cin>> x;
    int arr[x] = {0};

    for (int i = 0 ; i <x; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    arr[1]= 1;

    for (int i = 0 ; i <x; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}
/* #include <stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    int arr[x];

    printf("Enter the %d numbers \n",x);
    for (int i = 0; i < x; i++) {
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < x; i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
} */
