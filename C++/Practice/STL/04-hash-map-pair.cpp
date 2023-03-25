#include <iostream>
#include <map>
#include <utility>

using namespace std;
int main ()
{
    map<int, pair<int, int>> myMap;

	myMap.insert({5, {1, 2}});
	myMap.insert({6, {0, 3}});

	for(auto x: myMap){
		cout << (x.second).first << " " << (x.second).second << endl;
	}

    
    return 0;
}
