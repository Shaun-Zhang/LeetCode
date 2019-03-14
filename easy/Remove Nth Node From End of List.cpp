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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
		ListNode* iter1 = head;
	ListNode* iter2 = head;
	if (head == nullptr)
		return nullptr;
	int i = 0;
	while (iter1->next!= nullptr)
	{
		iter1 = iter1->next;
		if (i == n)
		{
			iter2 = iter2->next;
		}
		else
		{
			++i;
		}
	}
	if (i == n)
	{
		iter2->next = iter2->next->next;
	}
	else
	{
		head =  head->next;
	}
	return head;
    }
};