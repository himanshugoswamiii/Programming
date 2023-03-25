//{ Driver Code Starts
#include<iostream>
using namespace std;

int missingNumber(int A[], int number)
{

    // Your code goes here

    int ans=0;
    for(int i=0; i<number-1; i++){
        ans=ans^A[i];
    }
    for (int i=1; i<=number;i++){
        ans=ans^i;
    }

    return ans;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends


