#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &A)
{
    int minEle = A[0];
    int maxProfit = 0;
    int currProfit;
    for (int i = 1; i < A.size(); i++)
    {
        minEle = min(minEle, A[i]);
        currProfit = A[i] - minEle;
        maxProfit = max(currProfit, maxProfit);
    }
    return maxProfit;
}
int main()
{
    return 0;
}