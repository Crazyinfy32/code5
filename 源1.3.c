#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fac1(int n)
{
	int i = 0;
	int j = 1;
	for (i = 1; i <= n; i++)
	{
		j *= i;
	}
	return j;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac1(n);
	printf("%d", ret);
	return 0;
}