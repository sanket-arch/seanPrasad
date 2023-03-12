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
        if (temp->next != nullptr && temp->val == temp->next->val)
        {
            if (temp == head)
            {
                head = head->next;
                temp = head;
            }
            else
            {
                temp->next = temp->next->next;
            }
        }

        else
        {
            temp = temp->next;
        }
    }
    return head;
}
int main()
{
    return 0;
}