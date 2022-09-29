#include <algorithm>
#include <functional>
#include <iostream>
#include "queue"
using namespace std;

void printHeap(priority_queue<int> q){
    int n=q.size();
    for (int i = 0; i < n; i++) {
        cout << q.top() << " ";
        q.pop();
    }
    cout<<endl;
}
int main ()
{
    // Max heap
    priority_queue<int> maxi; 
    // Min heap
    priority_queue<int,vector<int>, greater<int> > mini; 

    // Inserting the elements
    maxi.push(1);
    maxi.push(3);
    maxi.push(5);
    maxi.push(0);

    // Insertion in min Heap
    mini.push(1);
    mini.push(3);
    mini.push(5);
    mini.push(0);

    printHeap(maxi);
    // printHeap(mini); : No matching function to call

    int n=mini.size();
    for (int i = 0; i < n; i++) {
        cout << mini.top() << " ";
        mini.pop();
    }

    // Check empty 
    cout << "\nMin heap Empyt(): "<<mini.empty() << endl;

    return 0;
}
