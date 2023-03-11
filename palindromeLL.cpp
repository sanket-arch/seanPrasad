#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
ListNode *reverseList(ListNode *head)
{
    ListNode *prev = nullptr;

    ListNode *next;
    while (head->next != nullptr)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    head->next = prev;
    return head;
}
bool isPalindrome(ListNode *head)
{
    // stack<int> stk;
    // ListNode *temp = head;
    // while (temp != nullptr)
    // {
    //     stk.push(temp->val);
    //     temp = temp->next;
    // }
    // temp = head;
    // while (!stk.empty())
    // {
    //     if (stk.top() != temp->val)
    //         return false;
    //     else
    //     {
    //         stk.pop();
    //         temp = temp->next;
    //     }
    // }
    // return true;

    // OPTIMIZED

    ListNode *slow, *fast;
    slow = fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *marker = head;
    ListNode *temp = reverseList(slow);
    while (temp != nullptr)
    {
        if (marker->val != temp->val)
            return false;
        else
        {
            marker = marker->next;
            temp = temp->next;
        }
    }
    return true;
}
int main()
{
    return 0;
}