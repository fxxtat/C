#include<stdio.h>
#define SIZE 26
/*创建一个包含26个元素的数组，并在其中储存26个小写字母。然后打印数组的所有内容*/
int main()
{
    int i;
    char lcase[26];
    for(i = 0;i < SIZE;i++)  
        lcase[i] = 'a' + i;
    for (i = 0;i < SIZE;i++)
        printf("%c",lcase[i]);
    printf("\n");
    getchar();U
    return 0;
}