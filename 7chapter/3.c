/*读取整数知道用户输入0.输入结束后，程序报告用户输入的偶数（不包括0）
个数，这些偶数的平均值，输入的奇数个数极其奇数的平均值
*/
#include<stdio.h>
int main()
{
	int n;
	double even = 0;//偶数
	double odd = 0;//奇数
	int even_count = 0;
	int odd_count = 0;
	double evens;
	double odds;

	printf("input integer\n");
	while (scanf("%d",&n) == 1 && n != 0)
	{
		if (n % 2 == 0)
		{
			even += n;
			++even_count;
		}
		else 
		{
			odd += n;
			++odd_count;
		}
	}
	printf("event_count : %d ,odd count : %d\n", even_count,odd_count);
	printf("events: %f\n", even / even_count);
	printf("odd: %f\n", odd / odd_count);
	return 0;
}