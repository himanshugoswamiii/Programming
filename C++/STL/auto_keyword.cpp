#include <iostream>
using namespace std;
int main ()
{
    auto x=20;
    auto y=10;
    auto str="Himanshu";
    cout << typeid(x).name() << endl; // i : integer
    cout << typeid(y).name() << endl; // i: integer
    cout << typeid(str).name() << endl;
    int z=x+y;
    cout << z << endl;
    return 0;
}
