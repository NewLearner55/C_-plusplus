#define _CRT_SECURE_NO_WARNINGS 1
class Solution 
{
public:
	string reverseStr(string s, int k) 
	{
		int cnt = 0;
		string res = "", tmp = "";
		for (int i = 0; i<s.length(); i++)
		{
			if (i % k == 0)     // ������һ��K�Ӵ����ͼӵ������
			{
				cnt++;
				res += tmp;
				tmp = "";
			}
			if (cnt % 2 == 1)        // ��������K�Ӵ�������
				tmp = s[i] + tmp;
			else
				tmp = tmp + s[i];   // ��ż����K�Ӵ�������
		}
		return res + tmp;
	}
};