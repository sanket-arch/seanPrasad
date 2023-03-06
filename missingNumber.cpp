#include <bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &nums)
{
    int a = nums[0], b = 1;
    for (int i = 1; i < nums.size(); i++)
        a = a ^ nums[i];
    for (int j = 2; j <= nums.size(); j++)
        b = b ^ j;
    return a ^ b;
}
int main()
{

    return 0;
}