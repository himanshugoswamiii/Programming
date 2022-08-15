
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[],int end, int k,int start=0) {
        int mid=(start+end)/2;
        if (k<arr[start] || k>arr[end])
        {
            return -1;
            
        }
        else if (arr[mid]==k)
        {
            return mid;
        }
        else if (arr[mid]>k)
        {
            return binarysearch(arr,mid,k,0);
        }
        else
        {
            return binarysearch(arr,end,k,mid);
        }
    }
};


// } Driver Code Ends


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends
