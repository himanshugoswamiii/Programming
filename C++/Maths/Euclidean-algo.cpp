#include <iostream>

using std::cout;
using std::endl;

int euclid(int a, int b){
    int r1 = a;
    int r2 = b;
    int r;
    int q;
    while (r2>0){
        q = r1 / r2;
        r = r1 - q*r2;
        r1 = r2;
        r2 = r;
    }

    int gcd = r1;

    return gcd;

}

int main ()
{

    cout << euclid(84,21) << endl;
    
    return 0;
}
