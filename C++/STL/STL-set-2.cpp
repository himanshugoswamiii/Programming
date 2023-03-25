/*  Time Complexity : 
    Space Complexity :  */
#include <iostream>
#include <set>
using namespace std;

int main ()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(30);

    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}
