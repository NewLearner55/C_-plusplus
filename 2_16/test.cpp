#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	bool isPalindrome(string s) {
		string str = "";
		for (auto c : s)
		{
			if (isalnum(c))
			{
				str += tolower(c);
			}
		}
		for (int i = 0, m = str.size(); i < m / 2; ++i)
		{
			if (str[i] != str[m - 1 - i])
			{
				return false;
			}
		}
		return true;
	}
};