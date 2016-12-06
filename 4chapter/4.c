#include<stdio.h>
/*
	编写一个程序，提示用户输入身高和姓名，然后以下面的格式显示用户刚输入的信息：
	Dabney, you are 6.208 feet tall
	使用float类型，并用/作为除号.输入厘米，输出米
*/
int main()
{

	char name[10];
	float height;

	printf("input your name\n");
	scanf("%s",name);

	printf("input your height(cm):\n");
	scanf("%f",&height);

	printf("%s, you are %.3f m tall\n", name,height/100);
	return 0;
}