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
    // vector<int> *vp = new vector<int>(); // Dynamic allocation
    vector<int> v={12,32};
    v.push_back(40);
    printVector(v);
    cout <<" size : "<< v.size() << endl;
    cout <<" capacity is :"<< v.capacity() << endl;

    cout<<"v[5]: "<<v[5]<<endl;
    // cout<<"v.at(5): "<<v.at(5)<<endl; // std out of range error
    cout<<"v[3]: "<<v[5]<<endl;
    cout<<"v.at(3): " <<v.at(3) <<endl; // RUNTIME ERROR : because we have elements upto index 2
    cout<<"v.at(2): " <<v.at(2) <<endl;
    return 0;
}

