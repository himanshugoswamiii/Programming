/*  Time Complexity : 
    Space Complexity :  */
#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int main ()
{
    int x = 10;
    int y = 15;

    cout << "Gcd is : " << gcd(x, y) << endl;
    cout << "LCM is : " << lcm(x, y) << endl;
    cout << __gcd(x, y) << endl; // defined in algorithm

    // find gcd using lcm
    int z = x*y/lcm(x, y);
    cout << z;
    return 0;
}
