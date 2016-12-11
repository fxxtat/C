/*
编写一个程序打印一个表格，每一行打印一个整数，该数的平方，该数的立方。要求用户输入表格的上下限。使用一个for循环
*/
#include<stdio.h>
int main()
{
    int n1,n2;

    printf("input one number");
    scanf("%d",&n1);
    printf("input another number");
    scanf("%d",&n2);

    for (n1;n1<=n2;n1++)
    {
        printf("%d  %d  %d",n1,n1*n1,n1*n1*n1);
    }
    getchar();
    return 0;
}