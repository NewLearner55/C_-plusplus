#define _CRT_SECURE_NO_WARNINGS 1
public class Solution {
	public int MoreThanHalfNum_Solution(int[] array) {
		if (array == null || array.length == 0)return 0;
		int preValue = array[0];//������¼��һ�εļ�¼
		int count = 1;//preValue���ֵĴ��������֮��
		for (int i = 1; i < array.length; i++){
			if (array[i] == preValue)
				count++;
			else{
				count--;
				if (count == 0){
					preValue = array[i];
					count = 1;
				}
			}
		}
		int num = 0;//��Ҫ�ж��Ƿ�����Ǵ���1����
		for (int i = 0; i < array.length; i++)
		if (array[i] == preValue)
			num++;
		return (num > array.length / 2) ? preValue : 0;

	}
}