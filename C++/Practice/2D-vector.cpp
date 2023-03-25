#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n = 4;
	int m = 3;
	vector<vector<int>> vec(n, vector<int> (m, 0));
	for (auto x: vec){
		for (int y: x){
			cout << y << " ";
		}
		cout << endl;
	}
	return 0;
}
