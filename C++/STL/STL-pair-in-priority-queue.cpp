#include <iostream>
#include <queue>
#include <utility>

using std::pair;
using std::priority_queue;
using std::cout;
using std::endl;

int main ()
{
    priority_queue<pair<int, int>> pq;
    // Ex: first value : weight , second : node in a graph
    pq.push(std::make_pair(10, 0));
    pq.push(std::make_pair(8, 3));
    pq.push(std::make_pair(15, 5));
    pq.push(std::make_pair(5, 2));

    while (pq.empty()!=1){
        cout << pq.top().first << " : " <<pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
