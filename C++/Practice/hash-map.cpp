#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
	map<int, string> st;
	st[1] = "Himanshu";
	st[2] = "Dev";
	st[3] = "yash";

	st.insert({62, "abhishek"});

	// Print the hash map
	for(auto x: st){
		cout << x.first << " " << x.second << endl;
	}


	return 0;
};
