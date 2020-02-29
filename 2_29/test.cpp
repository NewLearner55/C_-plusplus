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
		ListNode* first = head;//ʼ��ָ��ԭ�������λԪ��
		ListNode* target = head->next;//ʼ��ָ�򼴽�Ҫ�ŵ���ǰ������Ԫ��֮ǰ��Ŀ��Ԫ��
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