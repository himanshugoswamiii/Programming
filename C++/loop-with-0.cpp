#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    int Arr[100] = {0};

    Arr[4] += 1;
    cout << Arr[4] << endl;
    Arr[4] -= 1;
    cout << Arr[4] << endl;
    return 0;
}
