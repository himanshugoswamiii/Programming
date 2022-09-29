#include <iostream>
#include "string"
#include "queue"
using namespace std;
int main ()
{
    queue<string> s1;
    // Insertion same as Stack. No enque funtion
    s1.push("Love");
    s1.push("of");
    s1.push("my");
    s1.push("life");

    // Accessing the element
    cout << "front element: "<<s1.front() << endl;

    // Popping the element
    s1.pop();
    cout << "front element: "<<s1.front() << endl;

    // Size , Empty
    cout << "Size: "<<s1.size() << endl;
    cout << "Empty or not: "<<s1.empty() << endl;


    return 0;
    return 0;
}
