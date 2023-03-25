#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
    std::vector<int> myarr(5);

    for (int i = 0; i < myarr.size(); i++) {
        cout << myarr[i] << endl;
        
    }

    return 0;
}
