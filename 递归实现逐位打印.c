#include <stdio.h>

void print(unsigned int);

int main()
{
	unsigned int n;
	scanf("%d",&n);
	print(n);
	return 0;
}
void print(unsigned int n)
{
	if(n > 9)
	{
		print(n / 10);
	}
	printf("%d ",n % 10);
} 
