#define _CRT_SECURE_NO_WARNINGS 1
public int[] SingleNumber(int[] nums)
{
	// C# �� Sort ������������ʱ�临�Ӷ�Ϊ On (log n)*1
	Array.Sort(nums);
	int[] result = new int[2];
	//ͨ����Ǹ����ؽ���������±�Ϊ 0 �� 1 ��Ԫ�ظ�ֵ
	bool sign = true;
	//�ж���Ԫ���Ƿ�ΪΨһ����
	if (nums[0] != nums[1])
	{
		result[0] = nums[0];
		sign = false;
	}
	//�ж�βԪ���Ƿ�Ϊ�ظ�����
	if (nums[nums.Length - 1] != nums[nums.Length - 2])
	{
		result[sign ? 0 : 1] = nums[nums.Length - 1];
		//βԪ�غ͵����ڶ���Ԫ�ؿ��ܾ�ΪΨһ��
		if (nums.Length > 2 && nums[nums.Length - 2] != nums[nums.Length - 3])
		{
			result[1] = nums[nums.Length - 2];
			return result;
		}
	}
	for (int i = 1; i < nums.Length - 1; i++)
	{
		//Ψһ����Ȼ����ͬ����������Ԫ��
		if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
		{
			result[sign ? 0 : 1] = nums[i];
			sign = false;
		}




public int[] SingleNumber(int[] nums)
{
	HashSet<int> numbers = new HashSet<int>();
	foreach(int number in nums)
	{
		//�� C# �У�ͨ�� HashSet ʵ���� Add �������Ԫ��ʱ
		//������Ԫ���Ѵ��ڹ�ϣ���У��������� False
		//ע���߼���(!)������
		if (!numbers.Add(number))
			numbers.Remove(number);;//�ظ����Ƴ�
	}
	return numbers.ToArray();
}




public int[] SingleNumber(int[] nums)
{
	int sign = 0;
	//ȡ������������Ψһ���İ�λ�����
	for (int i = 0; i < nums.Length; i++)
	{
		sign ^= nums[i];
	}
	//��ȡ��������Ψһ���ı���λ�������ֵ
	//Ҳ����д�ɣ�sign &= (~sign) + 1
	sign &= -sign;
	int[] result = new int[2];
	//ͨ����ʶ��������������
	for (int i = 0; i < nums.Length; i++)
	{
		if ((nums[i] & sign) == sign)
			result[0] ^= nums[i];
		else
			result[1] ^= nums[i];;
	}
	return result;
}