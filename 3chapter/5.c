#include<stdio.h>
int main()
{

	//一年大约有3.156*10^7秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数
	float second_num;
	int age;
	second_num = 3.156e7;
	printf("Please input your age:\n");
	scanf("%d",&age);
	printf("%d\n", age);
	printf("%f\n", age*second_num);
	return 0;
}