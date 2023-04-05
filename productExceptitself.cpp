#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> nums = { 1, 2, 3, 4 };
    int left[nums.size()];
    int right[nums.size()];
    int n = nums.size();
    left[0] = 1;
    int product = left[0] * nums[0];
    for (int i = 1; i < nums.size(); i++)
    {

        left[i] = product;
        product *= nums[i];
    }
    right[n - 1] = 1;
    product = right[n - 1] * nums[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = product;
        product *= nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout<<right[i]<<" ";
    }
    return 0;
}