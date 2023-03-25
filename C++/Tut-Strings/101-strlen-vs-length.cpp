#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    string str = "What is your name"; // string datatype
    char cstr[] = "What is your name"; // cstring

    // cout << strlen(str) << endl; // ERROR  : Can't use strlen for string
    cout << strlen(cstr) << endl;

    cout << str.length() << endl;
    // cout << cstr.length() << endl; // ERROR
    
    return 0;
}
