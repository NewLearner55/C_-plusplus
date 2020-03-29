#define _CRT_SECURE_NO_WARNINGS 1
class Solution 
{
public:
	int hammingWeight(uint32_t n) 
	{
		int ret = 0;
		for (int i = 0; i < 32; i++)
		{
			if (n & (1 << i)) 
			{
				ret++;
			}
		}
		return ret;
	}
};
//class Solution{
//public:
//	int hammingWeight(uint32_t n) {
//		int ans = 0;
//		while (n)
//		{
//			if (n & 1)ans++;
//			n = n >> 1;
//		}
//		return ans;
//	}
//};