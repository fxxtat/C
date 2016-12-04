#include<stdio.h>
/*
	1英寸相当于2.54厘米，编写一个程序，提示用户输入身高（/英寸），然后以厘米显示身高
*/
int main()
{
	float inch;
	float hight;

	inch = 2.54;
	printf("Please input your hight \n");
	scanf("%f",&hight);
	printf("your hight is %.2f\n", hight*inch);
	printf("hello\n");
	return 0;
}