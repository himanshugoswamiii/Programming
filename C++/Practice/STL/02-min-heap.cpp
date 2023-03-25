#include <iostream>
#include <queue>

using namespace std;
int main(){
	priority_queue<int, vector<int>, greater<int>> mini;
	mini.push(10);
	mini.push(20);
	mini.push(5);
	mini.push(34);

	while(mini.empty() != 1){
		cout << mini.top() << endl;
		mini.pop();
	}


	return 0;
}
