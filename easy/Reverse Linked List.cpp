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
    ListNode* reverseList2(ListNode* head) {
        if(head==nullptr)
            return nullptr;
	ListNode* iter = head->next;
	ListNode* head2 = head;
	head2->next = nullptr;
	while (iter!= nullptr)
	{
		ListNode* tmp = iter->next;
		iter->next = head2;
		head2 = iter;
		iter = tmp;
	}
	return head2;
    }    
    ListNode* reverseList(ListNode* head) 
    {
	if (head==nullptr||head->next == nullptr)
	{
		return head;
	}
	else
	{
		ListNode * newhead = reverseList2(head->next);
		head->next->next = head;
		head->next = nullptr;
		return newhead;
	}
    }
};