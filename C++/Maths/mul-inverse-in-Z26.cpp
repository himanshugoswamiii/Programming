#include <iostream>

using namespace std;

int mulInverse(int n, int b){
    // Multiplicative inverse of b in Z_n

    int r1, r2, t1, t2;
    r1 = n, r2 = b;
    t1 = 0, t2 = 1;

    int q, r, t;
    while (r2 > 0){
        q = r1/ r2;
        r = r1 - q*r2;
        r1 = r2;
        r2 = r;

        t = t1 - q*t2;
        t1 = t2;
        t2 = t;
    }

    if (r1 == 1)
    // Inverse exists if gcd == 1
    {
        return (n+t1)%26;
    }

    // Iverse doesn't exist
    return -1;

}
int main ()
{
    int ans;

    for (int i = 0; i < 26; i++) {
        ans = mulInverse(26, i);

        if (ans == -1)
        {
            cout << i << endl;
        }
    }

    return 0;
}
