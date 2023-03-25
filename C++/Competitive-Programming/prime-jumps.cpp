#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int maxGameScore(int arr[], int len){
    int score=0;
    int next;
    int p_next;

    for (int i = 0; i < len; i++) {
        next = arr[i+1];
        p_next = arr[]

        
    }

    return score;

}

int main ()
{
    int n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxGameScore(arr, n);
    
    return 0;
}
