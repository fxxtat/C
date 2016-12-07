#include<stdio.h>
#define TEN 10
int main()
{

	char a = 'a';
	int num = a;
	printf("%c\n", a);
	while (num++ < 103)
		printf("%c\n", num);
	return 0;
}
//打印a-g