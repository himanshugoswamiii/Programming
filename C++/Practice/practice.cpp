#include <iostream>
#include <vector>

using std::cout;
using std::cin;

int main ()
{
    int n;
    cin >> n;
    std::vector <int> Arr(n,5);

    for (int i = 0; i < n; i++) {
        cout << Arr[i] << " ";
    }



    return 0;
}
