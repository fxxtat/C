/*
使用if else 语句编写一个程序读取输入，读到#停止。用感叹号替换句号，用两个感叹号
替换原来的感叹号，最后报告进行了多少次替换。
*/
#include<stdio.h>
int main()
{
	char ch;
	int change_count = 0;

	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			change_count += 1;
		}
		else if (ch == '!')
		{
			putchar('!');
			change_count += 1;
		}
	putchar(ch);
	}
	printf("***********%d\n", change_count);

	return 0;
}