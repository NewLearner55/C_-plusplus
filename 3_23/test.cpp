#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	string replaceSpace(string s) {
		string res;
		for (auto c : s){
			if (c == ' ')
				res += "%20";
			else
				res += c;
		}
		return res;
	}
};