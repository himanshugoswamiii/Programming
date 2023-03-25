/*it is common practice to define small, simple member functions inline, 
and larger or more complex member functions outside the class definition.*/
#include <iostream>
using namespace std;

class Complex {
    int re;
    int im;
    public:
        Complex(int, int);
        void printComplex();
};

// member function definition outside the class
Complex::Complex(int re, int im){
    this->re = re;
    this->im = im;
}

void Complex::printComplex(){
    cout << "Re: "<< re << " , Im: " << im << endl;
}

int main(){
    // Object 1
    Complex c1(5, 6);
    c1.printComplex();

    // Object 2
    Complex c2(20, 6);
    c2.printComplex();
    return 0;
}
