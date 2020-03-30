#define _CRT_SECURE_NO_WARNINGS 1
class Solution {
public:
	vector<int> res;
	vector<int> printNumbers(int n) {
		if (n <= 0) return res;
		//����һ�����������ֵ���ַ�����
		string number(n, '0');
		//��ʼȫ������Ϊ0
		while (!Increment(number))
		{
			saveNumber(number);
		}
		return res;
	}
	bool Increment(string& number) {
		//ע��Ҫʹ�����ô��ݣ������޷��޸�number
		bool isOverflow = false;//����Ƿ�Խ��
		int nTakeOver = 0;//�洢��λ
		int nLength = number.size();
		for (int i = nLength - 1; i >= 0; i--)
		{
			int nSum = number[i] - '0' + nTakeOver;
			if (i == nLength - 1)
				//����ǵ�һλ����λ
			{
				nSum++;
			}
			if (nSum >= 10)//�н�λ
			{
				if (i == 0)
					//��������λ�н�λ��˵�������˸����õ����ֵ��Խ��
				{
					isOverflow = true;
				}
				else
				{
					nTakeOver = 1;
					number[i] = nSum - 10 + '0';//�Ե�iλ��������
				}
			}
			else//û�н�λ
				//���õ�iλ����
				//��ֱ������ѭ��
			{
				number[i] = nSum + '0';
				break;
			}
		}
		return isOverflow;
	}
	void saveNumber(string number)
		//���ڴ˴����������Ҫ�޸�number����˲���Ҫ������
	{
		string s = "";
		bool isBegin0 = true;
		string::iterator it = number.begin();
		while (it != number.end())
		{
			if (isBegin0 && *it != '0') isBegin0 = false;
			if (!isBegin0)
			{
				s += *it;
			}
			it++;
		}
		int num = stoi(s);
		res.push_back(num);
	}
};