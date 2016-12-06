#include<stdio.h>
#include<float.h>
/*
	编写一个程序，将一个double类型的变量设置为1.0/3.0，一个float类型的变量设置为1.0/3.0。
	分别显示两次计算的结果三次：一次显示小数点后6位数字;一次显示小数点后12位数字;
	一次显示小数点后面16位数字。程序中要包含float.h头文件，并显示FLT_DIG和DBL_DIG的值。
	1.0/3.0的值和这些值一致么？
*/
int main()
{
	double num1;
	float num2;

	num1 = 1.0/3.0;
	num2 = 1.0/3.0;
	//第一次
	printf("%.6f\n", num1);
	printf("%.6f\n", num2);
	//第二次
	printf("%.12f\n", num1);
	printf("%.12f\n", num2);
	//第三次
	printf("%.16f\n", num1);
	printf("%.16f\n", num2);

	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);
	return 0;
}