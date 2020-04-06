#define _CRT_SECURE_NO_WARNINGS 1
class Solution 
{
public:
	int add(int a, int b) 
	{
		while (b) 
		{
			int res = (unsigned int)(a & b) << 1;
			a ^= b;
			b = res;
		}
		return a;
	}
};