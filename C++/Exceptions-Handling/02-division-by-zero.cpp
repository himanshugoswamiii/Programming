#include <iostream>
using namespace std;
int division(int a, int b) {


	if (b == 0) {
		throw "The Division was done by Zero!";
	}
	return (a / b);
}


int main() {
	int i = 17;
	int j;
    cout << "Enter j : "; 
    cin >> j;
    int k;


	try {
		k = division(i, j);
		cout << k << endl;
	}
	catch (const char* msg) {
		cerr << msg << endl;
	}
	return 0;
}
