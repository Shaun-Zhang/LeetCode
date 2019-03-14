/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr)
            return false;
        ListNode *iter1 = head;
        ListNode *iter2 = head;
        do
        {
            if(iter1->next==nullptr)
            {
                return false;
            }
            else
            {
                iter1 = iter1->next;
            }
            if(iter2->next==nullptr)
            {
                return false;
            }
            else
            {
                iter2 = iter2->next;
            }
            if(iter2->next==nullptr)
            {
                return false;
            }
            else
            {
                iter2 = iter2->next;
            }   
        }while(iter1!=iter2);
        return true;
    }
};