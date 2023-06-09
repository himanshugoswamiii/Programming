#include <iostream>
using namespace std;
int f(int &x, int &y)
{
    x += 1;
    y += 2;
    return x+y;

}
int main ()
{
    int a = 3;
    cout << f(a, a) << endl;
    
    return 0;
}
