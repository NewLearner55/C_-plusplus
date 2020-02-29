#define _CRT_SECURE_NO_WARNINGS 1
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
	ListNode* reverseList(ListNode* head) {
		if (!head)
		{
			return nullptr;
		}
		ListNode* first = head;//始终指向原链表的首位元素
		ListNode* target = head->next;//始终指向即将要放到当前链表首元素之前的目标元素
		while (target != nullptr)
		{
			first->next = target->next;
			ListNode* temp = target->next;
			target->next = head;
			head = target;
			target = temp;
		}
		return head;
	}
};