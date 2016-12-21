#include<stdio.h>
//编写程序读取输入，读到#停止，报告ei出现的次数
int main()
{
	char ch;
	char ch2;
	int count = 0;

	while ((ch = getchar()) != '#')
	{	
		
		if (ch == 'i' && ch2 == 'e')
		{
			count++;
		}
		ch2 = ch;
	}
	printf("****%d\n", count);

	return 0;
}