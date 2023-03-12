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
ListNode *removeElements(ListNode *head, int val)
{
    ListNode *temp = head;
    ListNode *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp == head && temp->val == val)
        {
            head = head->next;
            temp = head;
        }
        else if (temp->val == val)
        {
            prev->next = temp->next;
            temp = temp->next;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    return 0;
}