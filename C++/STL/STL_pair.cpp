#include <iostream>
#include <string>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    std::pair<string, int> student;

    cout << "Enter you name : " << endl;
    cin >> student.first;
    cout << "Enter roll no: " << endl;
    cin >> student.second;

    cout << "Entered values are : " << student.first << " : " << student.second;

    return 0;
}
