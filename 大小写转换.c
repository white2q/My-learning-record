#include <stdio.h>

/**
*实现大小写转换 
*/

int main()
{
	char res = 'A';
	char temp; 
	//实现大写字母转换为小写字母
	temp = res + 'a' - 'A'; 
	printf("%c\n",temp);
	//实现小写字母转换为大写字母
	printf("%c",temp - 'a' + 'A');
	
	return 0;
}
