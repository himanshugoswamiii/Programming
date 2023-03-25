#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printVector(vector<int> vec){
    for (int x : vec){
        cout << x << ' ';
    }
    cout << endl;
}

int main ()
{
    vector<int> nums = {3, 4, 5, 1, 6, 8};
    sort(nums.rbegin(), nums.rend());

    printVector(nums);

    return 0;
}
