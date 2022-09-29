#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printVector(vector<int> vec){
    for(int x:vec){
        cout << x << " ";
    }
    cout << endl;

}

int main ()
{
    int a=20;
    int b=10;
    
    swap(a,b);
    cout << "a: "<< a << endl;
    cout << "b: "<< b << endl;

    int z=max(a,b);
    cout << "Max of a and b: "<< z << endl;

    // Reverse the string
    string s="abcd";
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    // Swapping two vectors
    vector<int> myvec={21,34,56,21,15};
    vector<int> myvec2={9,8,7,5,4};

    cout << "Before Swapping myvec2: ";
    printVector(myvec2);

    swap(myvec,myvec2);
    cout << "After swapping myvec2: ";
    printVector(myvec2);

    // Rotating the vector
    cout << "Before rotate: myvec is ";
    printVector(myvec);

    rotate(myvec.begin(), myvec.begin()+1, myvec.end());

    cout << "After rotate: myvec is ";
    printVector(myvec);

    //    SORTING 
    sort(myvec.begin(),myvec.end());
    cout << "Sorted vector myvec : ";
    printVector(myvec);
    return 0;
}
