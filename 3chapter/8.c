#include<stdio.h>
/*在美工的体积称量系统中的，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1汤勺等于3茶勺。
编写一个程序，提示用户输入杯数，并以品脱，盎司，汤勺，茶勺为单位显示等价容量。
*/
int main()
{
	float cups;
	float pint;
	int oz;
	int soups;
	int tea_cups;
	printf("Please input cups:\n");
	scanf("%f",&cups);

	pint = cups/2;
	oz = cups*8;
	soups = oz*2;
	tea_cups = soups * 3;
	printf("%f cups equal:\n", cups);
	printf("%.2f pint\n", pint);
	printf("%d oz\n", oz);
	printf("%d soups\n", soups);
	printf("%d tea_cups\n", tea_cups);
	return 0;
}