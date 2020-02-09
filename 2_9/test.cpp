#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	int mySqrt(int x) {
		long long i = 0;
		long long j = x / 2 + 1;//对于一个非负数n，它的平方根不会大于（n/2+1）
		while (i <= j)
		{
			long long mid = (i + j) / 2;
			long long res = mid*mid;
			if (res == x) return mid;
			else if (res<x) i = mid + 1;
			else j = mid - 1;
		}
		return j;
	}
};