#include <iostream>
#include "vector"
using namespace std;
int main ()
{
    int x=20;
    int *iptr=&x; // Stores address of x
    cout << x << endl;
    cout << iptr << endl; // Prints the address
    cout << *iptr << endl; // Prints the value in ptr

    // Changing values using *iptr
    *iptr=10;
    cout << x << endl;

    *iptr-=5;
    cout << x << endl;

    *iptr*=5;
    cout << x << endl;

    cout<<"What is thi";
    
    // Changing integer with character
    *iptr='c';
    cout << x << endl;
    return 0;
}
