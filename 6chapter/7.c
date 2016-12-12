/*
编写一个程序吧一个单词读入一个字符数组中，然后倒叙打印这个单词。提示：strlen()
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char n[20];
	int n_len;
	printf("input a word\n");
	gets(n);
	n_len = strlen(n);
	for (int j = n_len;j>0;j--){
		printf("%c",n[j-1] );
	}
	return 0;
}