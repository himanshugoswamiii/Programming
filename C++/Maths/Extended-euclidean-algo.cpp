#include <iostream>
using namespace std;

struct values{
    int gcd;
    int s;
    int t;
};

values extendedEuclid(int a, int b){
    values Ans;
    int r1, r2, s1, s2, t1, t2;
    r1 = a, r2 = b;
    s1 = 1, s2 = 0;
    t1 = 0, t2 = 1;

    int q, r, s, t;
    while (r2 > 0){
        q = r1/r2;
        r = r1 - q*r2;
        r1 = r2;
        r2 = r;

        s = s1 - q*s2;
        s1 = s2;
        s2 = s;

        t = t1 - q*t2;
        t1 = t2;
        t2 = t;
    }

    Ans.gcd = r1;
    Ans.s = s1;
    Ans.t = t1;
    return Ans;
}

int main ()
{

    values Ans = extendedEuclid(52, 78);

    cout << "gcd : " << Ans.gcd << " , s : " << Ans.s << " , t: "<< Ans.t << endl;
    
    return 0;
}
