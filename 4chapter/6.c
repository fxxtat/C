#include<stdio.h>
#include<string.h>

/*
	
	编写一个程序，提示用户输入名，然后提示输入姓。在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
	字母数要与相印名和姓的结尾对齐，如下：
	Melissa Honeybee
	      7        8
	接下来，在输出如下：
	Melissa Honeybee
	7       8

	输出有格式错误，暂不知道为什么，无法修改
*/
int main()
{

	char f_name[10];
	char s_name[10];

	printf("input your first name\n");
	scanf("%s",f_name);

	printf("input your second name\n");
	scanf("%s",s_name);

	printf("%s  %s\n", f_name,s_name);
	printf("%*d  %*d\n", strlen(f_name),strlen(f_name),strlen(s_name),strlen(s_name));

	printf("%s  %s\n", f_name,s_name);
	printf("%-*d  %-*d\n", strlen(f_name),strlen(f_name),strlen(s_name),strlen(s_name));

	return 0;
}