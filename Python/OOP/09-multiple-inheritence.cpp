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

class B{
    public:
    B(){
        cout << "In constructor B\n";
    }
    void feature2(){
        cout << "In feature 2\n";
    }
};

class C: public A, public B{
    public:
    C(){
        cout << "In constructor C\n";
    }

    void feature3(){
        cout << "In feature 3\n";
    }
};

int main ()
{

    C myObj;
    myObj.feature1();
    myObj.feature2();
    myObj.feature3();
    
    return 0;
}
