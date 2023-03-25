// Better performing than first one
#include <iostream>
#include <vector>
#include "vector"
using namespace std;
void eliminationPersons(int N, int K){
    vector<bool> vec(N);
    // Index + 1
    int cval = 0;
    do{
        vec[cval] = true; // Ball has been passed to that person
        cval = (cval + K)%N;
    } while(cval != 0);

    int flag = 0; // Nothing to print
    for (int i = 0; i < N; i++) {
        if (vec[i] != true)
        {
            cout << i+1 <<" ";
            flag = 1;
        }
    }

    if (flag == 0)
    {
        cout << 0 << endl;
    }
}
int main ()
{
    int X,Y;
    cin>>X>>Y;
    eliminationPersons(X,Y);
    return 0;
}
