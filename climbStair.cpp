#include <bits/stdc++.h>
using namespace std;
int climbStairs(int n)
{
    if (n == 0)
        return 1;
    int select1 = climbStairs(n - 1);
    int select2 = 0;
    if (n >= 2)
        select2 = climbStairs(n - 2);
    return select1 + select2;
}
int main()
{
    return 0;
}