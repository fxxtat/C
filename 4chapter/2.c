#include<stdio.h>
/*
	编写一个程序，提示用户输入名和姓，并执行一下操作：
		1.打印名和姓，包括双引号
		2.在宽度为20的字段的右端打印名和姓，包括双引号
		3.在宽度为20的字段的左端打印名和姓，包括双引号
		4.在此姓名宽度宽3的字段中打印名和姓
*/
int main()
{
	char first_name[10];
	char second_name[10];

	printf("input your name\n");
	scanf("%s",first_name);
	printf("input your second name\n");
	scanf("%s",second_name);
	printf("\"%s,%s\"\n", first_name,second_name);//1.

	printf("\"%20s,%20s\"\n", first_name,second_name);//2
	printf("\"%-20s,%-20s\"\n", first_name,second_name);//3
	printf("\"%23s,%23s\"\n", first_name,second_name);//4

	return 0;
}