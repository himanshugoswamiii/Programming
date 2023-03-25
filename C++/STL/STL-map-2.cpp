/*  Time Complexity : 
    Space Complexity :  */
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main ()
{
    map<string, int> marks;

    // -- INSERTION OF ELEMENTS
    // Way 1
    marks["Himanshu"] = 98;
    marks["Dev"] = 96;
    marks["Yash"] = 96;
    // Way 2
    marks.insert({"Abhishek", 99});
    // Inserting multiple values at once
    marks.insert({{"Abc", 100}, {"Abb", 67}});

    // Iterating the ordered map
    for (auto x : marks) {
        cout << x.first << " " << x.second; 
        cout << endl;
    }
    cout << endl;

    // Other way of iterating the map
    map<string, int> :: iterator iter;
    for (iter = marks.begin(); iter != marks.end(); iter++) {
        cout << (*iter).first << " " << (*iter).second;
        cout << endl;
    
    }

    // size() of map
    cout << "\nSize is " << marks.size() << endl;
    
    return 0;
}
