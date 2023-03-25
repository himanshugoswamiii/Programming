//{ Driver Code Starts
#include <iostream>
#include <utility>
#include <vector>
#include <map>  
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findIntersection(int arr1[], int arr2[], int n, int m)
    {
        vector<int> ans;

        int i=0;
        int j=0;
        while (i<n && j<m) {
            if (arr1[i] < arr2[j])
            {
                i++;
                continue;
            }
            else if (arr2[j] < arr1[i])
            {
                j++;
                continue;
            }
            else
            {
                // When both are equal
                if (ans.size()==0 || ans.back()!= arr1[i])
                {
                    ans.push_back(arr1[i]);
                    i++;
                    j++;
                }
                
            }
        
        }

        return ans;

    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findIntersection(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends
