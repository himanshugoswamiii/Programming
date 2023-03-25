#include <iostream>
#include <regex>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main ()
{
    string str = "Geeks for Geeks";
    std::regex re("(Geek)(.*)");
    // Geek followed by any character
    bool val = std::regex_match(str,re);
    cout << val << endl;

    std::regex re2("(Geekyy)(.*)");
    cout << std::regex_match(str,re2);

    return 0;
}
