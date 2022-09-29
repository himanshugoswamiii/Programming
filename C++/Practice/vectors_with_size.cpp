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
    vector<int> vec(5);
    vector<int> vec2;

    printVec(vec); // A func to print the vector
    printVec(vec2); // A func to print the vector
    cout << vec.size() << endl;
    cout << vec2.size() << endl;
    return 0;
}
