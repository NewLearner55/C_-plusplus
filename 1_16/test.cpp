#define _CRT_SECURE_NO_WARNINGS 1
/*
struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};*/

class Solution {
public:
	TreeNode* Convert(TreeNode* pRootOfTree)
	{
		if (pRootOfTree == nullptr)
			return pRootOfTree;

		stack<TreeNode*> ista;
		vector<TreeNode*> ivec;
		auto pin = pRootOfTree;
		while (!(ista.empty() && pin == nullptr)){
			while (pin != nullptr){
				ista.push(pin);
				pin = pin->left;
			}
			if (!ista.empty()){
				pin = ista.top();
				ista.pop();
				ivec.push_back(pin);
				pin = pin->right;
			}
		}

		ivec.front()->left = nullptr;
		ivec.back()->right = nullptr;
		int length = ivec.size();
		for (int i = 0; i != length - 1; ++i){
			ivec[i]->right = ivec[i + 1];
			ivec[i + 1]->left = ivec[i];
		}
		return ivec.front();
	}
};