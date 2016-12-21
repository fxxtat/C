/*
修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级选择。
运行程序后，显示的菜单应该类似这样：
***********************************
Enter the number corresponding to the desired pay rate or action:
1) $8.75/hr	2) $ 9.43/hr
3) $10.00/hr	4) $11.20/hr
5) quit
****************************************
如果选择1-4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非用户输入5.
如果用户输入1-5以外的数字，程序应该提示用户输入正确的选项，然后再重复显示菜单提示用户输入。
使用#define创建常量表示各工资等级和税率
*/
#include<stdio.h>
int main()
{

	printf("*******************\n");
	printf("1) $8.75/hr 2) $9.33/hr\n");
	printf("3) $10.00/hr 4) $11.20/hr\n");
	printf("5)quit\n");
	printf("*********************\n");

	int level;
	float hr;
	int hours;
	float salary;
	float duty;
	printf("input your level\n");
	scanf("%d",&level);

	switch (level)
	{
		case 1:
			hr = 8.75;
			break;
		case 2:
			hr = 9.33;
			break;
		case 3:
			hr = 10.00;
			break;
		case 4:
			hr = 11.29;
			break;
		case 5:
			break;
	}
	printf("input your hours\n");
	scanf("%d",&hours);
	if (hours <= 40)
	{
	salary = hours * hr;
	}
	else 
		salary = (hours - 40) * hr * 1.5 + 40 *hr;

	if (salary <= 300) 
	{
		duty = salary * 0.15;
	}
	else if (salary <= 450)
	{
		duty += (salary-300) * 0.2;
	}
	else 
		duty += (salary - 450)*0.25;
	printf("salary : %.2f\n", salary);
	printf("duty %.2f\n", duty);
	return 0;
}