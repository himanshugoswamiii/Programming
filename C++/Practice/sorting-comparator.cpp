#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

typedef pair<int,int> pa; 

void printVec(vector<pa> vals){
    for(auto x : vals)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

bool cmp(pair<int, int> A, pair<int, int> B){
    // Increasing order
    return A.second>B.second;
}

int main(){
	vector<pa> vec;
	vec.push_back({3, 5});
	vec.push_back({6, 3});
	vec.push_back({2, 8});
	vec.push_back({2, -1});

    printVec(vec);

	sort(vec.begin(), vec.end(), cmp);

    printVec(vec);


	return 0;
}
