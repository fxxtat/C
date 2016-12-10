/*输出：
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include<stdio.h>
int main()
{
    for (int i=1;i<6;i++)
    {
        for (int j=5;j>i;j--)
        {
            printf(" ");
        }
        for (int k=0;k<i;k++)
        {
            printf("%c",'A'+k);
        }
        printf("\n");
    }
    getchar();
    return 0;
}