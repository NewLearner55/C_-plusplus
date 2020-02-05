#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	void rotate(vector<vector<int>>& matrix) {
		int rownum = matrix.size();
		int colnum = matrix[0].size();

		// 将矩阵转置
		for (int i = 0; i<rownum; i++)
		{
			for (int j = 0; j<i; j++)
			{
				swap(matrix[i][j], matrix[j][i]);
			}
		}

		// 每一行对称翻转
		for (int i = 0; i<rownum; i++)
		{
			reverse(matrix[i].begin(), matrix[i].end());
		}
	}
}; 