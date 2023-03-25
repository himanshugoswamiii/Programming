#include <iostream>
#include <queue>

using namespace std;
int main(){
	priority_queue<int> maxi;
	maxi.push(10);
	maxi.push(5);
	maxi.push(20);
	maxi.push(1);

	// Printing the heap
	while(!maxi.empty()){
		cout << maxi.top() << endl;
		maxi.pop();
	}

	return 0;
}
