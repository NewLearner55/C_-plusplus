#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) 
	{
		bool flag[nums.size()];
		memset(flag, false, sizeof(flag));
		for (int i = 0; i < nums.size(); i++)
		{
			if (flag[nums[i]])
			{
				return nums[i];
			}
			else
			{
				flag[nums[i]] = true;
			}
		}
		return -1;
	}
};