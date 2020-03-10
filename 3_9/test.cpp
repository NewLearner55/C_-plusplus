#define _CRT_SECURE_NO_WARNINGS 1
/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution 
{
public:
	bool isBalanced(TreeNode* root) 
	{
		return CheckBalance(root) >= 0;
	}
	int CheckBalance(TreeNode* root)
	{
		if (!root)
		{
			return 0;
		}
		int Lh = CheckBalance(root->left);
		if (Lh < 0)
		{
			return Lh;
		}
		int Rh = CheckBalance(root->right);
		if (Rh < 0)
		{
			return Rh;
		}
		if (abs(Lh - Rh) < 2)
		{
			return max(Lh, Rh) + 1;
		}
		else
		{
			return -1;
		}

	}
};