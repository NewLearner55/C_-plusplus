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
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		int size = lists.size();
		if (size == 0) {
			return nullptr;
		}
		if (size == 1) {
			return lists[0];
		}
		ListNode *p = lists[0];
		for (int i = 1; i < size; ++i) {
			p = merge2(p, lists[i]);
		}
		return p;
	}
	ListNode* merge2(ListNode *l1, ListNode *l2) {
		ListNode *head = new ListNode(0);
		ListNode *p = head;
		while (l1 && l2) {
			if (l1->val < l2->val) {
				p->next = l1;
				l1 = l1->next;
			}
			else {
				p->next = l2;
				l2 = l2->next;
			}
			p = p->next;
		}
		p->next = l1 ? l1 : l2; //直接挂在链表
		return head->next;
	}
};