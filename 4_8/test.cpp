#define _CRT_SECURE_NO_WARNINGS 1
class Solution 
{
public:
	TreeNode* mirrorTree(TreeNode* root) 
	{
		stack<TreeNode*> s;
		s.push(root);
		while (!s.empty()) 
		{
			TreeNode* node = s.top();
			s.pop();
			if (node == NULL) 
			{
				continue;
			}
			swap(node->left, node->right);
			s.push(node->left);
			s.push(node->right);
		}
		return root;
	}
};