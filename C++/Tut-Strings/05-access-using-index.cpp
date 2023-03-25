#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main ()
{
    string str = "Himanshu Goswami";

    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
    }
    return 0;
}
