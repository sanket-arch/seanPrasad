#include <bits/stdc++.h>
using namespace std;

void solve(string str, vector<string> &ans, int open, int close)
{
    if (open == close == 0)
    {
        ans.push_back(str);
        return;
    }

    if (open == close)
    {
        solve(str += '(', ans, open - 1, close);
    }
    else if (open == 0)
    {
        solve(str += ')', ans, open, close - 1);
    }
    else
    {
        solve(str + '(', ans, open - 1, close);
        solve(str + ')', ans, open, close - 1);
    }
}
vector<string> generateParenthesis(int n)
{
    int open = n;
    int close = n;
    vector<string> ans;
    string str = "";
    solve(str, ans, open, close);
    return ans;
}