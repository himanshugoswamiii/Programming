#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    vector<int> vec={1,2,3,4,5};
    vec.erase(vec.begin()+1);
    
    // print vector
    for (int x : vec) {
        cout << x << endl;
    
    }
    return 0;
}
