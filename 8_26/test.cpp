#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int findKthLargest(vector<int>& nums, int k)
	{
		// �������е�Ԫ���ȷ������ȼ�������
		priority_queue<int> p(nums.begin(), nums.end());
		// �����ȼ�������ǰk-1��Ԫ��ɾ����
		for (int i = 0; i < k - 1; ++i)
		{
			p.pop();
		}
		return p.top();
	}
};