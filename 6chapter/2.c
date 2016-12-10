/*输出：
$
$$
$$$
$$$$
$$$$$
*/
#include<stdio.h>
int main()
{
    for (int i=1;i<6;i++)
    {
        for (int k = 0;k < i;k++)
        {
            printf("$");
        }
        printf("\n");
    }
    getchar();
    return 0;
}