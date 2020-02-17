#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	string longestPalindrome(string s) {
		if (s == "")
		{
			return "";
		}
		string result("");
		int sSize = int(s.size());
		string reverseS = s;
		reverse(reverseS.begin(), reverseS.end());
		vector<int> store(sSize, 0);
		int maxLength = 0, end = 0;

		for (int i = 0; i < sSize; i++)
		{
			for (int j = sSize - 1; j >= 0; j--)
			{
				if (s[i] == reverseS[j])
				{
					//动态规划
					if (i == 0 || j == 0)
					{
						store[j] = 1;
					}
					else
					{
						store[j] = store[j - 1] + 1;
					}
				}
				else
				{
					store[j] = 0;
				}
				if (store[j] > maxLength)
				{
					//判断比较的字符串是不是来源自同一个字符串
					int preJ = sSize - 1 - j;
					int nowJ = preJ + store[j] - 1;
					if (nowJ == i)
					{
						end = i;
						maxLength = store[j];
					}
				}
			}
		}

		result = s.substr(end + 1 - maxLength, maxLength);
		return result;

	}
};