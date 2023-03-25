#include <iostream>
#include <stack>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::stack;

int main ()
{
    stack <string> s;
    s.push("What");
    s.push("Nani");
    int size = s.size();

    string mystr = "1";
    
    for (int i = 0 ; i< size; i++){
        mystr += s.top();
        s.pop();
    }

    cout << mystr;
    return 0;
}
