#include<stdio.h>
#define gallon_liter 3.785
#define mile_kilometer 1.609
/*
	编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，
	显示小数点后面一位数字。接下来，使用1加仑大约3.785升，一英里大概为1.609千米，
	把单位是英里/加仑的值转换为升/100公里(欧洲通用的燃料消耗表示法),并显示结果，显示小数点后面1位数字.
	注意，美国采用的方案测量消耗单位燃料的行程（值越大越好）,而欧洲则采用单位距离消耗的燃料测量方案（值越低越好).
	使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数
*/
int main()
{
	float mileage;
	float oil;

	/*	const 创建系数
	const float gallon_liter = 3.785;
	const float mile_kilometer = 1.609;
	*/

	printf("input travel mileage\n");
	scanf("%f",&mileage);

	printf("input the amount of gasoline consumed\n");
	scanf("%f",&oil);
	//US
	double proportion1 = gallon_liter/mile_kilometer;
	float count1 = oil/mileage;
	printf("gallon/mile(gallon_mile)  :%f\n", count1);
	printf("gallon/mile(liter_kilometer) :%f\n",count1*proportion1);
	//eu
	double proportion2 = 1/proportion1;
	float count2 = 1/count1;
	printf("mile/gallon(gallon_mile): %f\n",count2);
	printf("mile/gallon(liter_kilometer): %f\n",count2*proportion2);

	return 0;
}