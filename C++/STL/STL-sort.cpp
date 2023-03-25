#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int Arr[], int len){
    for (int i = 0; i < len; i++) {
        cout << Arr[i] << ' ';
    }
    cout << endl;
}

int main ()
{
    int Arr[] = {20, 30, 40, -4, 12, -98, 13};
    int Arr2[] = {30, 40, -4, 12, -98, 13};

    int len = sizeof(Arr)/sizeof(int);
    int len2 = sizeof(Arr2)/sizeof(int);

    sort(Arr, Arr+len);

    printArray(Arr, len);

    sort(Arr2+2, Arr2+len2);

    printArray(Arr2, len2);
    return 0;
}
