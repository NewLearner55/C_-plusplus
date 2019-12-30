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
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> mystack;
		vector<int> ans;
		TreeNode* curr = root;
		TreeNode* pre = NULL;

		while (curr || !mystack.empty())
		{
			while (curr)
			{
				mystack.push(curr);
				curr = curr->left;
			}
			curr = mystack.top();

			//若右节点已经访问过或者没有右节点  则输出该节点值
			if (!curr->right || pre == curr->right){
				mystack.pop();
				ans.push_back(curr->val);
				pre = curr;
				curr = NULL;
			}
			else{
				curr = curr->right;
				pre = NULL;
			}
		}
		return ans;
	}
};