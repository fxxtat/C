/*编写一个程序，显示求模运算的结果。把用户输入的第一个整数作为求模运算符的第二个运算对象，
该数在运算过程中保持不变。用户输入的数是第一个运算结果。当用户输入一个非正值时，程序结束。输出如下：
This program computes moduli.
Enter an integer to serve as the second operand:256
Now enter the first operand:438
438 % 256 is 182
Enter next number for first operand (<= 0 to quit):1234567
1234567 % 256 is 135
Enter next number for first operand (<= 0 to quit):0
Done
*/
#include<stdio.h>
int main()
{
	int num1,num2;

	printf("Enter an integer to serve as the second operand:\n");
	scanf("%d",&num2);
	printf("Now enter the first operand\n");
	scanf("%d",&num1);
	printf("%d  %%  %d is %d \n", num1,num2,num1%num2);
	printf("Enter next number for fisrt operand (<= 0 to quit)\n");
	while(scanf("%d",&num1) > 0)
		printf("%d  %%  %d is %d \n", num1,num2,num1%num2);
	return 0;
}