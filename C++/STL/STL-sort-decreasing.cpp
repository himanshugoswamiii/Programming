#include <iostream>
#include <algorithm>

using namespace std;

void printArray(int Arr[], int len){
    for (int i = 0; i < len; i++) {
        cout << Arr[i] << ' ';
    }
    cout << endl;
}

bool compare(int a, int b){
    return a>b;
}

int main ()
{

    int Arr[] = {-12, 4, 12, 42, 11, 9, 4, 6};
    int len = sizeof(Arr)/sizeof(int);

    sort(Arr, Arr + len, compare);

    printArray(Arr, len);
    
    return 0;
}
