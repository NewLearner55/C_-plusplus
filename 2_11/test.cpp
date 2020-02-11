#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	vector<int> getRow(int rowIndex) 
	{
		vector<int> result;
		for (int i = 0; i <= rowIndex; ++i)
		{
			result.push_back(1);
			for (int j = i - 1; j > 0; --j)
			{
				result[j] += result[j - 1];
			}
		}
		return result;
	}
};