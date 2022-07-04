#include<iostream>
using namespace std;
int main(){
    int x=20;
    int* ptr=&x; // address of x
    cout<<"x is: "<<x<<endl;
    cout<<"ptr is: "<<ptr<<endl; // Gives the address of x
    cout<<"*ptr is: "<<*ptr<<endl; // Gives the value of x

    // Changing value using pointers
    *ptr-=1;
    cout<<"x is : "<<x;
    return 0;
}