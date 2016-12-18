/*
	编写一个程序读取输入，读到#字符停止，然后报告读取的空格数，换行符和其他所有字符的数量
*/
#include<stdio.h>
int main()
{
	int space = 0;
	int n = 0;
	int count = 0;
	char c;
	printf("input :");
	while ((c = getchar()) != '#')
	{
		if (c == ' ')
			space++;
		else if (c == '\n')
			n++;
		else
			count++;
	}
	printf("space = %d ,\\n = %d,count = %d",space,n,count);
	return 0;
}