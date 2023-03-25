#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main ()
{
    std::string word;
    std::string sent;

    cin >> word;

    cout << word << endl;

    getline(cin,sent);
    cout << sent;

    return 0;
}
