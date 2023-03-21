#include <bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int> &numbers, int target)
{
    unordered_map<int, int> m;
    vector<int> res;
    for (int i = 0; i < numbers.size(); i++)
    {
        int comp = target - numbers[i];
        if (m.find(comp) != m.end())
        {
            res.push_back(i);
            res.push_back(m[comp]);
            return res;
        }
        m[numbers[i]] = i;
    }
    return res;
}
int main()
{
    return 0;
}