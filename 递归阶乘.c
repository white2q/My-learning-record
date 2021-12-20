#include <stdio.h>

int print(int );

int main()
{
	int n;
	scanf("%d",&n);
	int sum = print(n);
	printf("%d",sum);
	return 0;
}
int print(int n)
{
	static int sum = 1;
	if(n > 1)
	{
		print(n - 1);
	}
	sum *= n;
	return sum;
} 
