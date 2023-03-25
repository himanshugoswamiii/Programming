#include <iostream>
#include <vector>
using namespace std;
 
int removeIndicesToMakeSumEqual(vector<int>& arr)
{
    int N = arr.size();
 
    vector<int> odd(N, 0);
    vector<int> even(N, 0);
 
    // Update even[0]
    even[0] = arr[0];
 
    // Traverse the given array
    for (int i = 1; i < N; i++) {
        odd[i] = odd[i - 1];
        even[i] = even[i - 1];
        if (i % 2 == 0) {
            even[i] += arr[i];
        }
        else {
            odd[i] += arr[i];
        }
    }

    bool find = 0;
 
    int p = odd[N - 1]; // Sum of odd : 0 is 
    int q = even[N - 1] - even[0]; // Sum of even
 
    // If p and q are equal
    if (p == q) {
        return -1;
        find = 1;
    }
 
    // Traverse the array arr[]
    for (int i = 1; i < N; i++) {
 
        // If i is an even number
        if (i % 2 == 0) {
 
            // Update p by removing
            // the i-th element
            p = even[N - 1] - even[i - 1]
                - arr[i] + odd[i - 1];
            q = odd[N - 1] - odd[i - 1]
                + even[i - 1];
        }
        else {
 
            q = odd[N - 1] - odd[i - 1]
                - arr[i] + even[i - 1];
            p = even[N - 1] - even[i - 1]
                + odd[i - 1];
        }
 
        if (p == q) {
 
            // Set the find variable
            find = 1;
 
            return i+1;
        }
    }
 
    // If no index found
    if (!find) {
        // Print not possible
        return -1;
    }
}
 
// Driver Code
int main()
{
    vector<int> arr = {2,5,3,1};
    cout << removeIndicesToMakeSumEqual(arr);
 
    return 0;
}
