#include <iostream>
#include <queue>
using std::cout;
using std::cin;
using std::endl;

// Note : these two lines
using std::vector;
using std::greater;

int main ()
{
    std::priority_queue<int, vector<int> , greater<int>> mini;

    mini.push(20);
    mini.push(1);
    mini.push(25);
    mini.push(-5);

    // Printing the min-heap
    while (mini.empty() != 1){
        cout << mini.top() << endl;
        mini.pop();
    }

    return 0;
}
