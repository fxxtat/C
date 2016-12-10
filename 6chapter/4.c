/*输出：
A       'A'
BC      1,2
DEF     3,4,5
GHIJ    6,7,8,9
KLMNO
PQRSTU
*/
#include<stdio.h>
int main()
{
    int num = 0;
    for (int i=1;i<7;i++)
    {
        for (int j=0;j<i;j++)
        {
            printf("%c",'A'+num);
            num++;
        }


        printf("\n");
    }
    
    getchar();
    return 0;
}