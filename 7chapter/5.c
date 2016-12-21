//使用swith重写练习4
#include<stdio.h>
int main()
{

	char ch;
	printf("input \n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case '!':
				putchar('!');
				break;
			case '.':
				ch = '!';
				break;
		}
		putchar(ch);
	}

	return 0;
}