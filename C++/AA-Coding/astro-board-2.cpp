#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;


int getPlanetToDestroy(vector<int> planets){
    int len = planets.size();
    vector<int> odd (len,0);
    vector<int> even (len,0);

    even.at(0) = planets[0];
    for (int i = 1; i < len; i++) {
        odd[i] = odd[i-1];
        even[i] = even[i-1];
        if (i % 2 == 1)
        {
            odd[i] = odd[i-1] + planets[i];
            even[i] = even [i-1];
        }
        else
        {
            even[i] = even[i-1] + planets[i];
            odd[i] = odd[i-1];
        }
    }

    for (int i = 0; i < len; i++) {
        int oddafter = odd[len-1] - even [i];
        int evenafter = even[len-1] - even [i];

        if (oddafter + (i-1 >= 0 ? even[i-1]:0) == evenafter + (i-1>=0?odd[i-1]:0))
            return i+1;
    }

    return -1;



}

int main ()
{
    vector<int> vec = {2,4,6,3,4};
    // sum - max_val

    cout << getPlanetToDestroy(vec);
    return 0;
}
