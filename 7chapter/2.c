/*
编写一个程序读取输入，读到#字符停止。程序要打印每个字符以及对应的ASCII码（十进制）。
一行打印8个字符。建议：使用字符计数和求模运算符%，在每8各循环周期打印一个换行符。
*/
#include<stdio.h>
int main()
{

	char ch[8];
	char ch1;
	int num = 0;

	printf("input char:\n");
	while ((ch1 = getchar()) != '#')
	{	
		for (int i=0;i<8;i++)
		{
			ch[i] = ch1;
		}
		for (int j=0;j<8;j++)
		{
			printf("%d ",ch[j] );
		}
	}

	return 0;
}