#include <iostream>
#include <algorithm>
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
    vector<int> v={3,4,21,34,67};

    printVector(v);

    cout << "Search 5: "<< binary_search(v.begin(),v.end(),5) << endl;
    cout << "Search 3: "<< binary_search(v.begin(),v.end(),3) << endl;

    // Lower and Upper bounds for BS
    cout<<"Lower bound of 5 :"<< lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"Lower bound of 5 :"<< upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    cout<<"Lower bound of 4 :"<< lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Lower bound of 4 :"<< upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    return 0;
}
