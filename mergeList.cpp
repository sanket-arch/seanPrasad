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
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == nullptr && list2 == nullptr)
        return nullptr;
    if (list1 == nullptr)
        return list2;
    else if (list2 == nullptr)
        return list1;
    ListNode *temp1 = list1;
    ListNode *temp2 = list2;
    ListNode *prev = nullptr, *head = nullptr;
    while (temp1 != nullptr && temp2 != nullptr)
    {
        if (temp1->val < temp2->val)
        {
            if (prev == nullptr)
            {
                prev = temp1;
                head = temp1;
            }

            else
            {
                prev->next = temp1;
                prev = prev->next;
            }
            temp1 = temp1->next;
        }
        else
        {
            if (prev == nullptr)
            {
                prev = temp2;
                head = temp2;
            }

            else
            {
                prev->next = temp2;
                prev = prev->next;
            }
            temp2 = temp2->next;
        }
    }
    if (temp1 == nullptr)
        prev->next = temp2;
    else if (temp2 == nullptr)
        prev->next = temp1;
    return head;
}
int main()
{
    return 0;
}