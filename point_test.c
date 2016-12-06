#include<stdio.h>
int main()
{
	printf("Type int has a size of %u bytes\n", sizeof(int));
	printf("Type char has a size of %u bytes\n", sizeof(char));
	printf("Type long has a size of %u bytes\n", sizeof(long));
	printf("Type has long long a size of %u bytes\n", sizeof(long long));
	printf("Type has double a size of %u bytes\n", sizeof(double));
	printf("Type has long double a size of %u bytes\n", sizeof(long double));
	return 0;


}