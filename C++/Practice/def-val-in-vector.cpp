#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> vec(5);
	for(auto x: vec){
		cout << x << " ";
	}
	return 0;
}
