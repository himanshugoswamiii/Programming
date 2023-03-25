#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
    double d1;
    cin >> d1;

    cout << std::fixed << std::setprecision(9) << d1;
    return 0;
}
