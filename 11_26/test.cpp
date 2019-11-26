#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	while (cin>>str)
	{
		int count[256] = { 0 };
		size_t size = str.size();
		for (size_t i = 0; i<size; ++i)
		{
			if (0 == count[str[i]])
			{
				cout << str[i];
				count[str[i]]++;
			}
			else
			{
				continue;
			}
		}
		cout << endl;
	}
	return 0;
}