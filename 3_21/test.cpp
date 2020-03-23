#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int fib(int n) 
	{
		vector<int> v(n + 1 + 1, 0);
		v[1] = 1;
		for (int i = 2; i <= n; i++)
		{
			v[i] = (v[i - 1] + v[i - 2]) % 1000000007;
		}
		return v[n];
	}
};
