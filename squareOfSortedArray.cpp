#include <bits/stdc++.h>
using namespace std;
vector<int> sortedSquares(vector<int> &nums)
{
    int n = nums.size();
    int front = 0, back = n - 1;
    vector<int> res;
    while (front <= back)
    {
        if (pow(nums[front], 2) > pow(nums[back], 2))
        {
            res.push_back(pow(nums[front], 2));
            front++;
        }
        else
        {
            res.push_back(pow(nums[back], 2));
            back--;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    return 0;
}