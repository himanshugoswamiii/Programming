#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void eliminationPersons(int N, int K){
    vector<int> ok;
    // Put all values in the vector
    for (int i = 0; i < N; i++) {
        ok.push_back(i);
    }
    int start = 0;
    int flag = 0;
    int cval=0; // Current value
    while (flag == 0)
    {
            cval = (cval+K)%N;
            ok.erase(remove(ok.begin(), ok.end(), cval), ok.end());
            // Erase values which we get
            if (cval == start)
            {
                flag = 1;
                
            }
    }

    if (ok.size()==0)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int j = 0; j < ok.size(); j++) {
            cout << ok[j]+1 << " "; 
        }
    }


}
int main ()
{
    int X,Y;
    cin>>X>>Y;
    eliminationPersons(X,Y);
    return 0;
}
