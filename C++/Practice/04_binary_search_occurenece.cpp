// Find occurence of 8 in the array
#include <iostream>
using namespace std;

int BinarySearch(int Arr[],int start,int end,int el){
    // s: size , el : element
    int mid=(start+end)/2;
    int count=0;

    int i=mid-1;
    if (Arr[mid]==el)
    {
        count++;
        while (Arr[i]==el)
        {
                count++;
                i--;
        }
        i=mid+1;
        while (Arr[i]==el)
        {
                count++;
                i++;
        }
        return count;
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
    int myArr[]={2,4,8,8,8,8,8,8,8,15,16};
    int size=sizeof(myArr)/sizeof(int);
    int pos=BinarySearch(myArr,0,size,8);
    cout <<"No of occurence is: "<< pos << endl;
    return 0;
}
