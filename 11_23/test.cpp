#define _CRT_SECURE_NO_WARNINGS 1
//OJ É¾³ý¹«¹²×Ö·û´®
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1;
	string str2;

	while (getline(cin, str1))
	{
		cin >> str2;
		for (int i = 0; i<str2.size(); ++i)
		{
			for (int j = 0; j<str1.size(); ++j)
			{
				if (str1[j] == str2[i])
				{
					str1.erase(str1.begin() + j);
				}
			}
		}
		cout << str1.c_str() << endl;
	}
	return 0;
}