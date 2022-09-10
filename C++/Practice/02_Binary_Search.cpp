#include <iostream>
using namespace std;

int BinarySearch(int Arr[],int start,int end,int el){
    // s: size , el : element
    int mid=(start+end)/2;
    cout << "Mid is :"<< Arr[mid] << endl;
    if (Arr[mid]==el)
    {
        return mid;
    }
    else if (Arr[mid]<el)
    {
        return BinarySearch(Arr,mid+1,end,el);
    }
    else
    {
        return BinarySearch(Arr, start, mid-1, el);
    }
}

int main ()
{
    int myArr[10]={2,4,5,6,11,13,15,16};
    int size=7;
    int pos=BinarySearch(myArr,0,size,11);
    cout <<"Found at: "<< pos << endl;
    return 0;
}
