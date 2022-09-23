#include "iostream"
#include <vector>

using namespace std;

void printVector(vector<int> vec){
    cout << "Vector is : "; 
    for(int x:vec){
        cout << x << " ";
    }
    cout << endl;

}

int main ()
{
    vector<int> myvec={21,34,56,21,15};

    printVector(myvec);
    cout << "vector size : "<< myvec.size() << endl;
    cout << "vector Capacity : "<< myvec.capacity() << endl;

    // Copying a vector
    vector<int> vec2(myvec);
    printVector(vec2);
    cout << "vector size : "<< vec2.size() << endl;
    cout << "vector Capacity : "<< vec2.capacity() << endl;

    
    return 0;
}
