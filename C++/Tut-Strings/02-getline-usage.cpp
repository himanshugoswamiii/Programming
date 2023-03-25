#include <iostream>

using std::cout;
using std::cin;
using std::endl;
int main ()
{
    std::string str;
    getline (cin, str,',');
    // Last , is the delim character which tells function to stop reading further input

    cout << str << endl;

    return 0;
}
