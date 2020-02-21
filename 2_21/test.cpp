#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int closestSumValue = nums[0] + nums[1] + nums[2];
		int digit1_index, digit2_index, digit3_index;
		int max_digit1_index = nums.size() - 2;
		for (int i = 0; i < max_digit1_index; i++)
		{
			digit1_index = i;
			digit2_index = i + 1;
			digit3_index = nums.size() - 1;
			int tmp_sum = nums[digit1_index] + nums[digit2_index] + nums[digit3_index];
			while (digit2_index < digit3_index)
			{
				if (abs(tmp_sum - target) < abs(closestSumValue - target))
					closestSumValue = tmp_sum;
				int difference = target - tmp_sum;
				if (difference == 0)
					return target;
				if (difference > 0)
				{
					digit2_index++;
				}
				else 
				{
					digit3_index--;
				}
				tmp_sum = nums[digit1_index] + nums[digit2_index] + nums[digit3_index];
			}
		}
		return closestSumValue;
	}
};