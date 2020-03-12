#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int compress(vector<char>& chars) 
	{
		if (chars.size() <= 1)
		{
			return chars.size();
		}
		int j = 0;
		chars[j] = chars[0];
		int len = 1;
		char temp = chars[0];
		int n = 1;
		for (int i = 1; i < chars.size(); i++)
		{
			if (chars[i] == temp)
			{
				n++;
			}
			else if (chars[i] != temp && n > 1)
			{
				j++;
				if (n<10)
				{
					chars[j++] = n + '0';
					len++;
				}

				else
				{
					chars[j++] = n / 10 + '0';
					len++;
					chars[j++] = n % 10 + '0';
					len++;
				}
				n = 1;
				temp = chars[i];
				chars[j] = temp;
				len++;
			}
			else if (chars[i] != temp && n == 1)
			{
				temp = chars[i];
				chars[++j] = temp;
				len++;
			}
			if (i == chars.size() - 1 && n > 1)
			{
				j++;
				if (n<10)
				{
					chars[j++] = n + '0';
					len++;
				}
				else
				{
					chars[j++] = n / 10 + '0';
					len++;
					chars[j++] = n % 10 + '0';
					len++;
				}
			}
		}
		return len;
	}
};