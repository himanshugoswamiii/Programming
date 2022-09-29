#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void printVec(vector<int> vec){
    // Print the vector using iterators
    for (auto it=vec.begin(); it!=vec.end(); it++) {
        cout << *it << " ";
    }
    cout <<  endl;
}

int main ()
{
    vector<int> vec={14,12,54,1,5,89,7,8,9,10,11};
    printVec(vec);

    // Sort elements from index : 2 to end
    // sort(vec.begin()+2,vec.end());
    // printVec(vec);
    // Find last element of vec
    auto x=vec.end();
    cout << *(x-1) << endl;

    // Erase the fifth element from the vector 
    vec.erase(vec.begin()+4,vec.begin()+10);
    printVec(vec);

    return 0;
}
