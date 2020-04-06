#define _CRT_SECURE_NO_WARNINGS 1
class Solution 
{
public:
	bool isStraight(vector<int>& nums) 
	{
		bool m[15];
		memset(m, 0, sizeof(m));
		int minValue = 14, maxValue = 0;
		for (int item : nums) 
		{
			if (item == 0) 
			{
				continue;
			}
			if (m[item]) 
			{
				return false;
			}
			m[item] = true;
			minValue = min(minValue, item);
			maxValue = max(maxValue, item);
		}
		return maxValue - minValue + 1 <= 5;
	}
};