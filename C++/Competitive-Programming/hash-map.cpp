/*  Time Complexity : 
    Space Complexity :  */
#include <iostream>
#include <map>
using namespace std;

int main ()
{
    map<int, int> Union;
    Union[10];
    Union[90];
    Union[20];

    for (auto itr : Union) {
        cout << itr.first << " " << itr.second;
        cout << endl;
    }
    return 0;
}
