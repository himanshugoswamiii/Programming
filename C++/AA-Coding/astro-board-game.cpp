#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int odd_even(vector<int> pl){
    int o_sum = 0;
    int e_sum = 0;
    for (int i = 0; i < pl.size(); i++) {
        if (i % 2 == 0){
            e_sum += pl[i];
            continue;
        }
        o_sum += pl[i];
    }
    cout << o_sum << endl;
    cout << e_sum << endl;

    return o_sum == e_sum;

}

int getPlanetToDestroy(vector<int> planets){
    int index ;
    int n; // for n!
    
    int val = odd_even(planets);


    if (val == 0)
    {
        return -1;
        
    }else{

        n = planets.size();
        int j = planets.size()-1;
        while (j > 0){
            n*=j;
            j--;
        }

        cout << n << endl;

        for (int i = 0; i < planets.size(); i++) {
            o_sum = 0;
            e_sum = 0;
            for (j = 0; j < n; j++) {

                
            }        }

        return index;
    }
}

int main ()
{
    vector<int> vec = {2,6,3,3,1};
    // sum - max_val

    cout << getPlanetToDestroy(vec);
    return 0;
}
