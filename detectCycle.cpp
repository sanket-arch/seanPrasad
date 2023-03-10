#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
bool hasCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    if (head == nullptr)
        return false;
    while (fast->next != nullptr && fast->next->next != nullptr)
    {

        fast = fast->next->next;
        slow = slow->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    return 0;
}