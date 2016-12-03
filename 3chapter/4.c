#include<stdio.h>
int main()
{
	//编写一个程序，读取一个浮点数，先打印成小数，再打印成指数，在打印出p计数法。
	/*
	eg:
	Enter a floating-point value: 64.25
	fixed-point notation:64.250000
	exponential notation:6.425000e+01
	*/
	float num;
	scanf("%f",&num);
	printf("fixed-ponint nottaion:%f\n", num);
	printf("exponential notation:%e\n",num);


	return 0;
}