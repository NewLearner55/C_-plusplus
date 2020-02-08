#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals) {
		vector<vector<int>> res;
		if (intervals.empty()) return res;

		auto cmp = [](vector<int> &a, vector<int> &b) {return a[0] < b[0]; };
		sort(intervals.begin(), intervals.end(), cmp);

		res.emplace_back(intervals[0]);
		for (int i = 1; i < intervals.size(); i++) {
			int bk = res.size() - 1;
			if (res[bk][1] >= intervals[i][0]) {
				if (res[bk][1] < intervals[i][1]) {
					res[bk][1] = intervals[i][1];
				}
			}
			else {
				res.emplace_back(intervals[i]);
			}
		}

		return res;
	}
};