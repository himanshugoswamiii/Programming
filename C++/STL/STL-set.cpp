#include <iostream>
#include <set>

using namespace std;

int main ()
{
    set<int> myset;
    myset.insert(5);
    myset.insert(7);
    myset.insert(10);
    myset.insert(7);

    for (auto it : myset) {
        cout << it << " ";
    }

    return 0;
}
