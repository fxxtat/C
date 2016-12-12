#include<stdio.h>
/*输出：
F
FE
FED
FEDC
FEDCB
FEDCBA
*/
int main()
{
    for (int i=0;i < 6;i++)//输出6行
    {
        for (int j=0;j < i+1;j++)//每行输出行数各字母
        {
            printf("%c",'F'-j);
        }
        printf("\n");
    }
    getchar();
    return 0;
}
