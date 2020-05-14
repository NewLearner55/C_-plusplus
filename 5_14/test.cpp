#define _CRT_SECURE_NO_WARNINGS 1
public:
	bool isUnique(string astr) {
		//return false;
		unsigned long long low_32_95 = 0;
		unsigned long long high_96_126 = 0;

		for (int i = 0; i < astr.length(); ++i)
		{
			if (astr[i] <= 95)
			{
				if ((low_32_95 ^ (1 << (astr[i] - 32))) < low_32_95)
				{
					return false;
				}
				low_32_95 = low_32_95 ^ (1 << (astr[i] - 32));
			}
			else
			{
				if ((high_96_126 ^ (1 << (astr[i] - 95))) < high_96_126)
				{
					return false;
				}
				high_96_126 = high_96_126 ^ (1 << (astr[i] - 95));
			}
		}
		return true;
	}
};