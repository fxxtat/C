#include<stdio.h>
/*
	提示用户输入一个整数，然后打印从该数到比该数大10的所有整数（如输入5，打印5-15）
	要求打印的各值之间用一个空格，制表符或换行符
*/
int main()
{
	int num;
	int num2;
	printf("input a num\n");
	scanf("%d",&num);
	printf("%d\n", num);

	num2 = num+11;
	while(num < num2)
	{
		printf("%d\n", num);
		num++;
	}
	return 0;
}