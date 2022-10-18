#include <iostream>
using namespace std;
namespace namespace1{
    int age = 25;
    string name = "Himanshu";
}

namespace namespace2{
    string name = "Levi";
    int age = 30;
}

int main(){
    // Now it won't result in conflict
    cout << namespace1::age <<endl;
    cout << namespace2::age <<endl; 
    cout << namespace1::name <<endl;
    return 0;
}
