#include<stdio.h>
//编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来
int main()
{
	char first_name[10];
	char second_name[10];
	printf("Input your first name:\n");
	scanf("%s",first_name);
	printf("Input your second name\n");
	scanf("%s",second_name);
	printf("%s,%s\n", first_name,second_name);


	return 0;
}