#include <iostream>

using std::cout;
using std::endl;

int first1(int Arr[], int start, int end){
    if (end >= start)
    {
        int mid = (start + end) /2;

        if (Arr[mid] == 1 && Arr[mid-1] == 0 || mid == 0)
        {
            return mid;
        }

        else if (Arr[mid] < 1)
        {
            return first1(Arr, mid+1, end);
        }
        else{
            return first1(Arr, start, mid-1);
        }
        
    }

    return -1; // Element not found
}
int main ()
{
    int Arr[] = {0,0,0,0,0,1,1,1,1};

    int len = sizeof(Arr)/sizeof(int);

    cout << first1(Arr, 0, len) << endl;


    return 0;
}
