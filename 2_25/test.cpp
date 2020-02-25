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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == NULL) return l2;
		if (l2 == NULL) return l1;
		// ��֤l1�е��׽��Ϊ���������ͷ�ڵ�
		if (l1->val > l2->val) swap(l1, l2);
		// tmp Ϊ��ʱ��㣬head �����������ͷ�ڵ�
		ListNode* tmp = nullptr;
		ListNode* head = l1;
		while (l1->next != NULL && l2 != NULL)
		{
			// l1 �н��С�ڵ��� l2
			while (l1->next != NULL && l1->next->val <= l2->val)
			{
				l1 = l1->next;
			}
			if (l1->next == NULL) break;
			// l2 �н��С�� l1
			while (l2 != NULL && l1->next->val > l2->val)
			{
				// l2 ������ l1
				tmp = l2;
				l2 = l2->next;
				tmp->next = l1->next;
				l1->next = tmp;
			}
		}
		// �� l1 �ǿգ�����Ȼ��������β�ˣ��� l2 �ǿգ��򽫵�ǰͷ�ڵ���� l1 β��
		if (l2 != NULL)
			l1->next = l2;
		return head;

	}
};