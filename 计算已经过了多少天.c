#include <stdio.h>
/**
*	 1、输入某天的日期，计算该天在给定年份中是第几天。
* 	 要求：
*	（1）定义包含年，月，日信息的结构体类型。
*	（2）利用scanf函数输入年，月，日的值。
*	（3）输出日期以及该日期是给定年份中的第几天。
*	（4）需要对闰年做判定。
*/
typedef struct _date{
	int year;
	int month;
	int day;
}Date;

int main(void)
{
	int i;
	int result = 0;
	Date date;
	int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 , 31};
	printf("请输入你要计算的准确日期:年 月 日\n");
	scanf("%i %i %i",&date.year, &date.month, &date.day);
	if(date.year % 400 == 0 || date.year % 4 == 0 && date.year % 100 != 0)
		a[1] = 29;
	for(i = 0; i < date.month - 1; i++)
	{
		result += a[i];
	}
	result += date.day;
	printf("该日期是该年的第%d天！",result);
}

