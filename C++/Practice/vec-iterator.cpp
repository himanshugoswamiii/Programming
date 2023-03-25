#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int main ()
{
    vector<int> vec = {20,30,40,50,60};

    // Change here
    for (int* i = vec.begin(); i < vec.end(); i++) {
        cout << *i << endl;
    }

    return 0;
}
