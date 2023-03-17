#include <bits/stdc++.h>
using namespace std;

// METHOD 1
int maxMeetings(int start[], int end[], int n)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        pq.push(make_pair(end[i], start[i]));
    }
    int preEnd = pq.top().first;
    pq.pop();
    while (!pq.empty())
    {
        int currStart = pq.top().second;
        int currEnd = pq.top().first;
        pq.pop();
        if (currStart > preEnd)
        {
            count++;
            preEnd = currEnd;
        }
    }
    return count;
}
int main()
{
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    cout << maxMeetings(start, end, 6);
    return 0;
}