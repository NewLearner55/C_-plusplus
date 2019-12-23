#define _CRT_SECURE_NO_WARNINGS 1
public int[] SingleNumber(int[] nums)
{
	// C# 的 Sort 方法在最坏情况下时间复杂度为 On (log n)*1
	Array.Sort(nums);
	int[] result = new int[2];
	//通过标记给返回结果数组中下标为 0 或 1 的元素赋值
	bool sign = true;
	//判断首元素是否为唯一的数
	if (nums[0] != nums[1])
	{
		result[0] = nums[0];
		sign = false;
	}
	//判断尾元素是否为重复的数
	if (nums[nums.Length - 1] != nums[nums.Length - 2])
	{
		result[sign ? 0 : 1] = nums[nums.Length - 1];
		//尾元素和倒数第二个元素可能均为唯一数
		if (nums.Length > 2 && nums[nums.Length - 2] != nums[nums.Length - 3])
		{
			result[1] = nums[nums.Length - 2];
			return result;
		}
	}
	for (int i = 1; i < nums.Length - 1; i++)
	{
		//唯一数必然不等同于左右两边元素
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
		//在 C# 中，通过 HashSet 实例的 Add 方法添加元素时
		//如果添加元素已存在哈希集中，方法返回 False
		//注意逻辑非(!)操作符
		if (!numbers.Add(number))
			numbers.Remove(number);;//重复便移除
	}
	return numbers.ToArray();
}




public int[] SingleNumber(int[] nums)
{
	int sign = 0;
	//取得数组中两个唯一数的按位异或结果
	for (int i = 0; i < nums.Length; i++)
	{
		sign ^= nums[i];
	}
	//获取区分两个唯一数的比特位所代表的值
	//也可以写成：sign &= (~sign) + 1
	sign &= -sign;
	int[] result = new int[2];
	//通过标识，区分两个数组
	for (int i = 0; i < nums.Length; i++)
	{
		if ((nums[i] & sign) == sign)
			result[0] ^= nums[i];
		else
			result[1] ^= nums[i];;
	}
	return result;
}