#include <iostream>
using namespace std;

int LinearSearch(int Arr[],int length,int el){
    for (int i = 0; i < length; i++) {
        if (el==Arr[i])
        {
            return i;
        }
        
    }

    return -1; // Element not found
}

int main ()
{
    int myArr[10]={2,4,5,6,11,13,15,16};
    int len=7;
    int pos=LinearSearch(myArr,len,11);
    cout <<"Found at: "<< pos << endl;
    return 0;
}
