#include <iostream>
using namespace std;

int BinarySearch(int Arr[],int len,int el){
    // el: element
    int front=0;
    int rear=len-1;
    int pos=-1; // If element is not there
    while (front<=rear)
    {
        pos=(front+rear)/2;
        if (Arr[pos]==el)
        {
            return pos;
        }
        else if (Arr[pos]<el)
        {
            front=pos+1;
        }
        else{
                rear=pos-1;
        }
    }

    return pos;

}
int main ()
{
    int myArr[]={1,3,4,5,78,121,36};
    int length=sizeof(myArr)/sizeof(int);
    int pos=BinarySearch(myArr,length,36);
    cout << "found at: "<<pos << endl;
    
    return 0;
}
