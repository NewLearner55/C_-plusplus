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
	TreeNode* buildTree(vector<int>& pre, vector<int>& in) 
	{
		if (pre.empty())
		{
			return NULL;
		}
		stack<TreeNode*> S;
		TreeNode* root = new TreeNode(pre[0]);
		S.push(root);
		for (int i = 1, j = 0; i < pre.size(); i++) 
		{  // i-Ç°ÐòÐòºÅ£¬j-ÖÐÐòÐòºÅ
			TreeNode *back = NULL, *cur = new TreeNode(pre[i]);
			while (!S.empty() && S.top()->val == in[j])
			{
				back = S.top(), S.pop(), j++;
			}
			if (back)
			{
				back->right = cur;
			}
			else
			{
				S.top()->left = cur;
			}
			S.push(cur);
		}
		return root;
	}
};