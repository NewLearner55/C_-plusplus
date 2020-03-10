#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int max = INT_MIN;
		int numsSize = int(nums.size());
		for (int i = 0; i < numsSize; i++)
		{
			int sum = 0;
			for (int j = i; j < numsSize; j++)
			{
				sum += nums[j];
				if (sum > max)
				{
					max = sum;
				}
			}
		}
		return max;
	}
};