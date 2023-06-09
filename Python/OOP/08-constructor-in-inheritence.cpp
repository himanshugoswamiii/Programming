#include <iostream>

using namespace std;

class A{
    public:
    A(){
        cout << "In constructor A\n";
    }
    void feature1(){
        cout << "In feature1";
    }
};

class B: public A{
    public:
    B(){
        cout << "In B constructor\n";
    }

    void feature2(){
        cout << "In feature 2\n";
    }
};

int main ()
{

    B myObj;
    myObj.feature1();
    
    return 0;
}
