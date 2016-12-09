#include<stdio.h>
/*
	提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则输出
	18 days are 2 weeks,4 days	
*/
int main()
{

	int day;
	int weeks;
	int days;

	printf("input days number\n");
	scanf("%d",&day);

	weeks = day / 7;
	days = day % 7;

	printf("%d days are %d weeks , %d days\n", day,weeks,days);


	return 0;
}