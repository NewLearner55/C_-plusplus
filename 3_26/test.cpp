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
	ListNode* deleteNode(ListNode* head, int val) {
		ListNode*pre = head;
		ListNode*curr = head->next;
		if (head->val == val)return curr;
		while (curr != NULL){
			if (curr->val == val){
				pre->next = curr->next;
				return head;
			}
			else{
				curr = curr->next;
				pre = pre->next;
			}
		}
		return head;
	}
};