#define _CRT_SECURE_NO_WARNINGS 1
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
//判断链表是否为回文结构
class PalindromeList {
	ListNode* reverse(ListNode* head)
	{
		struct ListNode* prev = NULL;
		struct ListNode* cur = head;
		struct ListNode* next;

		while (cur)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		return prev;
	}
public:
	bool chkPalindrome(ListNode* A)
	{
		int n = 0;
		struct ListNode* cur = A;
		while (cur)
		{
			cur = cur->next;
			++n;
		}

		int mid = n / 2;
		cur = A;
		while (mid--)
		{
			cur = cur->next;
		}

		struct ListNode* head1 = A;
		struct ListNode* head2 = reverse(cur);

		mid = n / 2;
		while (mid--)
		{
			if (head1->val == head2->val)
			{
				head1 = head1->next;
				head2 = head2->next;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
};


/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
}; */

class PalindromeList {
	ListNode* reverse(ListNode* head)
	{
		struct ListNode* prev = NULL;
		struct ListNode* cur = head;
		struct ListNode* next;

		while (cur)
		{
			next = cur->next;
			cur->next = prev;
			prev = cur;
			cur = next;
		}
		return prev;
	}
public:
	bool chkPalindrome(ListNode* A)
	{
		struct ListNode* head1 = A;
		struct ListNode* head2 = reverse(A);

		while (head1 && head2)
		{
			if (head1->val == head2->val)
			{
				head1 = head1->next;
				head2 = head2->next;
			}
			else
			{
				return false;
			}
		}
		return true;
	}
};