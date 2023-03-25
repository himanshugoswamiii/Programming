#include <iostream>
#include <set>
using namespace std;

int main ()
{
    set<set<int>> myset;

    myset.insert({1, 2, 3});
    myset.insert({2, 1, 3});
    myset.insert({2, 4, 3});

    for (auto it: myset) {
        for (auto it2 : it) {
            cout << it2 << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}
