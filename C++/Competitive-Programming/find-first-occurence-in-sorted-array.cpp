#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int firstOcc(int Arr[], int val, int start, int end){
    int mid = (start + end) /2;

    if (start > end){
        return -1;
    }

    if (Arr[mid] == val){
        int x = firstOcc(Arr,val, start, mid -1);

        if (x == -1){
            return mid;
        }else{
            return x;
        }
    }

    else if (Arr[mid] < val)
    {
        return firstOcc(Arr, val, mid+1, end);
    }
    else{
        return firstOcc(Arr, val, start, mid-1);
    }

}

int main ()
{
    int Arr[] = {1,1,2,2,3,4,5,6,6,8,9,11,13};
    int len = sizeof(Arr)/sizeof(int);
    int val;
    cin >> val;
    cout << firstOcc(Arr, val, 0 , len-1) <<endl;
    return 0;
}
