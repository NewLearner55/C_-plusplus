#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		unordered_set<int> u;
		vector<int> answer;
		for (int i : nums1)
			u.insert(i);
		for (int i : nums2){
			auto a = u.find(i);
			if (a != u.end()){
				answer.push_back(i);
				u.erase(a);
			}
		}
		return answer;
	}
};