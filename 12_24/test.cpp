#define _CRT_SECURE_NO_WARNINGS 1
链接：https://www.nowcoder.com/questionTerminal/459bd355da1549fa8a49e350bf3df484?answerType=1&f=discussion
来源：牛客网

public class Solution {
	public int FindGreatestSumOfSubArray(int[] array) {
		int len = array.length;
		int[] dp = new int[len];
		int max = array[0];
		dp[0] = array[0];
		for (int i = 1; i < len; i++){
			int newMax = dp[i - 1] + array[i];
			if (newMax > array[i])
				dp[i] = newMax;
			else
				dp[i] = array[i];
			if (dp[i] > max)
				max = dp[i];
		}
		return max;

	}
}