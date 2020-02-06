#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	bool valid(int n, vector<int>& cols) {
		if (cols.size() <= 1)
			return true;
		int row = cols.size() - 1;
		int col = cols.back();
		for (int r = 0; r < row; ++r) {
			int c = cols[r];
			if (c == col || abs(c - col) == abs(r - row))
				return false;
		}
		return true;
	}
	void solve(vector<vector<string>>& res, vector<string>& tmp, vector<bool>& cols_, vector<bool>& diag1s_, vector<bool>& diag2s_, int n, int row){
		if (row == n){
			res.push_back(tmp);
			return;
		}
		for (auto col = 0; col < n; col++){
			int ll = row + col;
			int rr = row - col + n - 1;
			if (cols_[col] && diag1s_[ll] && diag2s_[rr]){
				tmp[row][col] = 'Q';
				cols_[col] = false;
				diag1s_[ll] = false;
				diag2s_[rr] = false;

				solve(res, tmp, cols_, diag1s_, diag2s_, n, row + 1);

				tmp[row][col] = '.';
				cols_[col] = true;
				diag1s_[ll] = true;
				diag2s_[rr] = true;
			}
		}
	}

	vector<vector<string>> solveNQueens(int n) {
		vector<vector<string>> res;
		vector<string> tmp(n, string(n, '.'));
		vector<bool> cols_(n, true);
		vector<bool> diag1s_(2 * n - 1, true);
		vector<bool> diag2s_(2 * n - 1, true);
		solve(res, tmp, cols_, diag1s_, diag2s_, n, 0);
		return res;
	}
};