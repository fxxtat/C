/*
编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限内所有整数的平方和，并显示计算结果。
然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数小于下限整数为止。结果如下：
Enter lower and upper integer limits: 5 9
The sums of squares from 25 to 81 is 255
Enter next set of limits:3 25
The sums of squares from 9 to 625 is 5520
Enter next set of limits: 5 5
Done
*/
#include<stdio.h>
int main()
{
	int n1,n2;

	printf("input lower and upper integer limits:\n");
	scanf("%d %d",&n1,&n2);
	int sum;
	sum = 0;
	for (int n = n1;n<=n2;n++)
	{
		int product;
		product = n*n;
		sum += product;
	}
	printf("The sums of squares from %d to %d is %d\n",n1,n2,sum);
	printf("Done\n");
	return 0;
}