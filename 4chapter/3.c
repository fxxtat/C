#include<stdio.h>
/*
	编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。用下面的格式进行输出
	1.输入21.3或2.1e+001;
	2.输入+21.290或2.129E+001;
*/
int main()
{
	float num;
	printf("input a float num:\n");
	scanf("%f",&num);
	printf("%f\n", num);
	printf("%e\n", num);
	printf("%E\n", num);
	return 0;
}