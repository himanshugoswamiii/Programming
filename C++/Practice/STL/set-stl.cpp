/*  Time Complexity : 
    Space Complexity :  */
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main ()
{
    set<vector<int>> mySet;
    mySet.insert({1, 2, 3});
    mySet.insert({4, 5, 6});
    mySet.insert({2, 3, 1});

    for (auto x : mySet) {
        for (auto y: x) {
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}
