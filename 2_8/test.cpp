#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int strStr(string haystack, string needle) {
		int n = haystack.size(), m = needle.size();
		for (int i = 0; i < n - m + 1; i++)
		{
			int j = 0;
			for (; j < m; j++)
			{
				if (haystack[i + j] != needle[j])
					//Ϊ�˱�֤�����ѭ����haystack������Ҳ����needle����һ����ǰ�ƽ���i�ĺ�������Ϊ��ʼ�㣬i + j����haystack������
					break;
			}
			if (j == m)
				return i;
		}
		return -1;
	}
};