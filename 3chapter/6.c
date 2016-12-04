#include<stdio.h>
int main()
{
	/*
	一个水分子的质量大约为3.0*10^-23克。1夸脱水大约是950克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量
	*/
	float  quality;
	int quart;
	int gram;
	float waters;
	float num;

	quart = 950;
	quality = 3.0e-23;
	waters = quart/quality;

	printf("Please input quarts\n");
	scanf("%d",&quart);
	num = waters*quart;
	printf("%d quart water has %e \n", quart,num);
	return 0;
}