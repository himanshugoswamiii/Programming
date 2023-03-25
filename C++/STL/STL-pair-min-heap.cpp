#include <iostream>
#include <queue>
#include <utility>
#include <vector>

using namespace std;

typedef pair<int, int> pi ;

int main ()
{
    priority_queue<pi, vector<pi>, greater<pi>> pq;

    pq.push(make_pair(10, 0));
    pq.push(make_pair(8, 3));
    pq.push(make_pair(15, 5));
    pq.push(make_pair(5, 2));

    while (pq.empty()!=1){
        cout << pq.top().first << " : " <<pq.top().second << endl;
        pq.pop();
    }

    return 0;
}
