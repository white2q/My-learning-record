#include <stdio.h>
/**
*	 1������ĳ������ڣ���������ڸ���������ǵڼ��졣
* 	 Ҫ��
*	��1����������꣬�£�����Ϣ�Ľṹ�����͡�
*	��2������scanf���������꣬�£��յ�ֵ��
*	��3����������Լ��������Ǹ�������еĵڼ��졣
*	��4����Ҫ���������ж���
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
	printf("��������Ҫ�����׼ȷ����:�� �� ��\n");
	scanf("%i %i %i",&date.year, &date.month, &date.day);
	if(date.year % 400 == 0 || date.year % 4 == 0 && date.year % 100 != 0)
		a[1] = 29;
	for(i = 0; i < date.month - 1; i++)
	{
		result += a[i];
	}
	result += date.day;
	printf("�������Ǹ���ĵ�%d�죡",result);
}

