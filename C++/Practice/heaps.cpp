/*  Time Complexity : 
    Space Complexity :  */
#include <functional>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main ()
{
	priority_queue<int, vector<int>, greater<int>> mini;
	mini.push(10);
	mini.push(20);
	mini.push(11);
	mini.push(30);

	// Printing the heap
	while(!mini.empty()){
		cout << mini.top() << " ";
		mini.pop();
	}
    
    return 0;
}
