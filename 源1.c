#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int factorial (int i)
{
	int m = 0;
	int ret = 1;
	int sum = 0;
        for (m = 1; m <= i; m++)
	{
			ret= ret * factorial(m);
	}
		return sum = sum + ret;
	
	
}
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++ )
	{
		int sum= factorial(i);
		printf("%d", sum);
	}
	return 0;
}