#include <iostream>
using namespace std;

template <typename T>
T add(T x,T y){
    T sum=x+y;
    return sum;
}

int main(){

    int result1=add<int>(2,3);
    cout << result1 << endl;

    float result2=add<float>(4.5,6.89);
    cout << result2 << endl;

    string result3=add<string>("Him","anshu");
    cout << result3 << endl;
    
}
