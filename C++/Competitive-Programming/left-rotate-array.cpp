//{ Driver Code Starts
#include <bits/stdc++.h>
#include <iterator>
#include <algorithm>
#include <vector>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	void leftRotate(int arr[], int k, int n) 
	{ 
        int key;
        int temp[n]; // Array of size n
        for (int i = 0; i < n; i++) {
            key = arr[i];
            temp[(n+i-k)%n] = key;
            cout << temp[(n+i-k)%n] << "\t";
        }

        // Copy the array back to arr
        for (int j=0; j<n ;j++){
            arr[j]=temp[j];
	        } 
    }
		 

};

//{ Driver Code Starts.

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	        // um[a[i]]++;
	    }


       

        Solution ob;
        ob.leftRotate(a,k,n);
        
        for (int i = 0; i < n; i++) 
        	cout << a[i] << " "; 

	    cout << "\n";
	     
    }
    return 0;
}

