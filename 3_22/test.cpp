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
	vector<int> res;
	vector<int> reversePrint(ListNode* head) {
		//����1��reverse��ת��
		/*
		while(head){
		res.push_back(head->val);
		head = head->next;
		}
		//ʹ��algorithm�㷨�е�reverse��תres
		reverse(res.begin(),res.end());
		return res;
		*/

		//����2����ջ��
		/*
		stack<int> s;
		//��ջ
		while(head){
		s.push(head->val);
		head = head->next;
		}
		//��ջ
		while(!s.empty()){
		res.push_back(s.top());
		s.pop();
		}
		return res;
		*/

		//����3���ݹ�
		/*
		if(head == nullptr)
		return res;
		reversePrint(head->next);
		res.push_back(head->val);
		return res;
		*/

		//����4���ı�����ṹ
		ListNode *pre = nullptr;
		ListNode *next = head;
		ListNode *cur = head;
		while (cur){
			next = cur->next;//���浱ǰ������һ���ڵ�
			cur->next = pre;//��ǰ���ָ��ǰһ���ڵ㣬����ı�ָ��
			pre = cur;//����ǰһ���ڵ�
			cur = next;//���µ�ǰ���
		}
		while (pre){//��һ��whileѭ��������preָ���µ�����ͷ
			res.push_back(pre->val);
			pre = pre->next;
		}
		return res;
	}
};