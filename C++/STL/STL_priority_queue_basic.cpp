#include <iostream>
#include <queue>
using std::cout;

int main ()
{
	std::priority_queue<int> qu;

	qu.push(11);
	qu.push(20);
	qu.push(1);
	qu.push(13);

	// Printing the priority queue
	while (qu.empty() != 1){
		cout << qu.top() << " ";
		qu.pop(); // Removes the top element
	}

    return 0;
}
