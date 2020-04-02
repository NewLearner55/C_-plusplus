#define _CRT_SECURE_NO_WARNINGS 1
class Solution 
{
public:
	ListNode* getKthFromEnd(ListNode* head, int k) 
	{
		ListNode* fast = head;
		ListNode* low = head;
		while (fast != NULL) 
		{
			fast = fast->next;
			if (k == 0) 
			{
				low = low->next;
			}
			else 
			{
				k--;
			}
		}
		return low;
	}
};