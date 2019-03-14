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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *iter1=l1;
        ListNode *iter2=l2;
        ListNode *l3 = new ListNode(-1);
        ListNode *iter3 = l3;
        while(iter1!=nullptr||iter2!=nullptr)
        {
            if(iter1==nullptr)
            {
                ListNode* newNode = new ListNode(iter2->val);
                iter3->next = newNode;
                iter2 = iter2->next;
            }
            else if(iter2==nullptr)
            {
                ListNode* newNode = new ListNode(iter1->val);
                iter3->next = newNode;
                iter1 = iter1->next;
            }
            else if(iter1->val<iter2->val)
            {
                ListNode* newNode = new ListNode(iter1->val);
                iter3->next = newNode;   
                if(iter1!=nullptr)
                iter1 = iter1->next;
            }
            else if(iter1->val>=iter2->val)
            {
                ListNode* newNode = new ListNode(iter2->val);
                iter3->next = newNode;
                if(iter2!=nullptr)
                iter2 = iter2->next;
            }
            iter3 = iter3->next;
        }
        return l3->next;
    }
};