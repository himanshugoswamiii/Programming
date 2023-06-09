#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<int> targetSum(const vector<int> &nums, int target){
    vector<int> ans(2);
    map<int, int> hash;

    for(int i=0; i<nums.size(); i++){
        int x = nums[i];
        int complement = target-x;
        if (hash.find(x)!=hash.end()){
            ans[0] = hash[x];
            ans[1] = i;

            return ans;
        }
        else
        {
            hash[complement] = i;
        }

    }

    return ans;
}

int main ()
{
    vector<int> nums = {1, 2, 3, 5, 6, 12, 9, 11};
    int target = 9;
    vector<int> ans = targetSum(nums, target);
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
