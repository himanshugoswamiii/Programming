#include <iostream>

using namespace std;

void printArray(int Arr[], int len)
{
    for (int i = 0; i < len; i++) {
        cout << Arr[i] << ' ';
    }
    cout << endl;
}

/*    BITONIC SORT  */

void compAndSwap(int a[], int i, int j, int direction)
{
	if (direction==(a[i]>a[j]))
		swap(a[i],a[j]);
}

void bitonicMerge(int nums[], int low, int high, int direction)
{
    int diff = high-low;
    if(diff>1)
    {
		int k = diff/2;
		for (int i=low; i<low+k; i++)
			compAndSwap(nums, i, i+k, direction);
		bitonicMerge(nums, low, low+k, direction);
		bitonicMerge(nums, low+k, high, direction);

    }

    
}

void bitonicSort(int nums[], int low, int high, int direction)
{
    int diff = high-low;
    if(diff > 1)
    {
        int mid = diff/2;
        bitonicSort(nums, low, low+mid, 1); // sort in aschighing order
        bitonicSort(nums, low+mid, high, 0); // sort in deschighing order

        cout << "low: " << low << endl;
        cout << "high: " << high << endl;

        bitonicMerge(nums, low, high, direction);
        printArray(nums, 8);
    }

}


int main ()
{
    int nums[] = {30, 70, 40, 80, 60, 20, 10, 50};
    int N = sizeof(nums)/sizeof(int);

    cout << "Before sorting: ";
    printArray(nums, N);
    cout << endl;

    bitonicSort(nums, 0, N, 1); // 1: aschighing order

    cout << "\nAfter sorting: ";
    printArray(nums, N);
    
    return 0;
}
