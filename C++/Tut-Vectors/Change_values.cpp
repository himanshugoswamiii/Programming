#include <iostream>
#include <vector>

using namespace std;
int main ()
{
    vector <int>myvec={2,3,4,5,6};

    myvec[1]=1; // Changing values from the vector
    myvec.at(0)=1;

    for(int x:myvec){
        cout << x << endl;
    }

    int y=myvec.pop_back();

    
    return 0;
}
