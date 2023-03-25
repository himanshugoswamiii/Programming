#include <iostream>

using namespace std;
int main ()
{
    int *x,y,z;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;

    return 0;
}
