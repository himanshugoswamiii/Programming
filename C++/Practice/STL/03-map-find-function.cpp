#include <iostream>
#include <map>
#include <string>

using namespace std;

void printMap(const map<int, string> &hash){
	for(auto it=hash.begin(); it != hash.end(); it++){
		cout << it->first << " " << it->second << endl;
	}
}


int main(){
	map<int, string> myMap;
	// int : roll no, string : name

	myMap[22] = "Himanshu";
	myMap[15] = "Dev";
	myMap[1] = "Abhishek";

	printMap(myMap);

	// Fint the element with key = 22 in the map
	auto it = myMap.find(25);
	if(it != myMap.end()) {
		cout << "FOUND - Key : " << it->first << " value : "<< it->second << endl; 
	} else {
		cout << "Key not found " << endl;
	}

	return 0;
}
