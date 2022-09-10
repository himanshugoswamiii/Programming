// Find occurence of 8 in the array : O(log n)
#include <iostream>
using namespace std;
int min=0;
int max=0;

int BinarySearch(int Arr[],int start,int end,int el){
    // s: size , el : element
    int mid=(start+end)/2;

    int i=mid-1;
    if (Arr[mid]==el)
    {
        ::min=BinarySearch(Arr,start,mid+1,el);
        ::max=BinarySearch(Arr,mid+1,end,el);

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
    int myArr[]={2,4,8,8,8,8,8,8,8,8,8};
    int size=sizeof(myArr)/sizeof(int);
    int pos=BinarySearch(myArr,0,size,8);
    cout <<"No of occurence is: "<< ::max-::min+1 << endl;
    return 0;
}
