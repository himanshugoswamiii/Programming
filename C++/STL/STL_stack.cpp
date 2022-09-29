#include <iostream>
#include <string>
#include "stack"
using namespace std;
int main ()
{
    stack<string> s1;
    s1.push("Love");
    s1.push("of");
    s1.push("my");
    s1.push("life");

    // Accessing the element
    cout << "Top element: "<<s1.top() << endl;

    // Popping the element
    s1.pop();
    cout << "Top element: "<<s1.top() << endl;

    // Size , Empty
    cout << "Size: "<<s1.size() << endl;
    cout << "Empty or not: "<<s1.empty() << endl;


    return 0;

}
