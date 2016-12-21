/*
编写一个程序，提示用户输入一周的工作的小时数，然后打印工资总额，税金和净收入。做假设如下：
a.基本工资 = 1000美元/小时
b.加班(超过40小时) = 1.5 倍的时间
c.税率：前300美元为15%，续150美元为20%，余下的为25%
用#define定义符号常量。不用在意是否符合当前的税法
*/
#include<stdio.h>
#define basis_salary 1000
#define overwork 1.5
#define duty1 0.15
#define duty2 0.2
#define duty3 0.25
int main()
{
	int hours;
	float salary;
	float duty;
	float income;

	printf("input hours\n");
	scanf("%d",&hours);

	if (hours <= 40)
		salary = 1000 * hours;
	else if (hours > 40)
	{
		salary = 1500 * (hours - 40);
	}
	if (salary <= 300)
		duty = salary * duty1;
	else if (salary <= 450)
	{
		duty += (salary - 300) * duty2;
	}
	else 
		duty += (salary - 450) * duty3;
	printf(" total salary :%.2f\n", salary);
	printf("total duty %.2f\n", duty);
	printf("income : %.2f\n", salary - duty);


	return 0;
}