#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    string str(10, '\0');
    // string of size 10 with all containing terminating 0

    cout << strlen(str.c_str()) << endl;
    cout << str.length() << endl;

    return 0;
}
