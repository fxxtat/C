/*在数组中读取8各整数，然后按倒序打印这8个数*/
#include<stdio.h>
int main()
{
	int array[8];
	printf("input 8 integer\n");
	for (int i=0;i<8;i++)//一个一个读取
	{
		scanf("%d",&array[i]);
	}
	for (int n=7;n>=0;n--)
	{
		printf("%d", array[n]);
	}
	return 0;
}