#include <bits/stdc++.h>
#include <CMATH>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> ans;
    for (auto it : nums)
    {
        int idx = abs(nums[it]) - 1;
        if (nums[idx] > 0)
            nums[idx] = -1 * nums[idx];
    }
    for (auto it : nums)
    {
        if (nums[it] > 0)
            ans.push_back(it + 1);
    }
    return ans;
}
int main()
{
    return 0;
}