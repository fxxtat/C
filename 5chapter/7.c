/*提示用户输入一个double类型的数，并打印该数的立方值。自己设计一个函数计算并打印立方值。main()函数要把
用户输入的值传递给该函数*/
#include<stdio.h>
void showCube(double x);
int main()
{
	double number;

	printf("input a number\n");
	scanf("%lf",&number);
	showCube(number);

	return 0;
}
void showCube(double x)
{
	printf("%f\n", x*x*x);
}