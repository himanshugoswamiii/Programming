#include <iostream>

using namespace std;

class Complex{
	double re, im;
	// re : Real , im : Imaginary
	
	public:

	Complex(){
		re = 1;
		im = 1;
	}

	Complex(double x, double y){
		// Overloaded Constructor
		re = x;
		im = y;
	}

	void printNo(){
		cout << re << " + i*" << im << endl;
	}

};

int main(){

	Complex n1;

	Complex n2(4.5, 6.2);

	n1.printNo();
	n2.printNo();

	return 0;
}
