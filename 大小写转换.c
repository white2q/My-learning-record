#include <stdio.h>

/**
*ʵ�ִ�Сдת�� 
*/

int main()
{
	char res = 'A';
	char temp; 
	//ʵ�ִ�д��ĸת��ΪСд��ĸ
	temp = res + 'a' - 'A'; 
	printf("%c\n",temp);
	//ʵ��Сд��ĸת��Ϊ��д��ĸ
	printf("%c",temp - 'a' + 'A');
	
	return 0;
}
