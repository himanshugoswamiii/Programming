#include <iostream>
using namespace std;

int main ()
{
    int *x, y, z;
    z = 20;
    y = 20;
    x = &z;
    cout << x << " : " << typeid(x).name() << endl; // pointer int
    cout << y << " : " << typeid(y).name() << endl; // pointer int
    cout << z << " : " << typeid(z).name() << endl; // int

    return 0;
}
