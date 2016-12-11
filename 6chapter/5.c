/*输出：
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
//法一

#include<stdio.h>
int main()
{
    int sp;
    char c;
    for (int i=1;i<6;i++)//输出6行
    {
        for (int j=5;j>i;j--)//输出空格
        {
            printf(" ");
        }
        for (c='A';c<65+i;c++)//输出A-当行最大的字母65+i（当前行数）
        {
            printf("%c",c);
        }
        for (c;c-1>65;c--)
        /*此时经过上面一个for循环，c已是当前行最大的一个字母。
        开始输出余下的字母,输出到A
        */
        {
            printf("%c",c-2);
        }
        printf("\n");
    }
    getchar();
    return 0;
}