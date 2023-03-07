#include <bits/stdc++.h>
using namespace std;
// int singleNumber(vector<int> &nums)
// {
//     unordered_map<int, int> umap;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         umap[nums[i]] = ++umap[nums[i]];
//     }
//     for (auto it : umap)
//     {
//         if (it.second == 1)
//             return it.first;
//     }
// }
int singleNumber(vector<int> &nums)
{
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}
int main()
{

    vector<int> nums = {4,1,2,1,2};
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    cout << ans;
    return 0;
}