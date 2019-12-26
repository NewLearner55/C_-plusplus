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
class Solution {
public:
	vector<int> ret;
	vector<int> preorderTraversal(TreeNode* root) {
		pre_travel(root);
		return ret;
	}
	void pre_travel(TreeNode* root)
	{
		if (root)//��ǰ���ǿ�
		{
			ret.push_back(root->val);//���ʸ��ڵ�
			pre_travel(root->left);//�ݹ�������
			pre_travel(root->right);//�ݹ�������
		}
	}
};