/*  Time Complexity : 
    Space Complexity :  */
#include <iostream>
#include <map>
using namespace std;

int main ()
{
	map<int, string> stu;
	stu[1] = "Himanshu";
	stu.insert({{23, "Shubham"}, {22, "Ram"}});
	stu[2] = "Dev";

	for(auto x: stu){
		cout << x.first << " " << x.second << endl;
	}
    
    return 0;
}
