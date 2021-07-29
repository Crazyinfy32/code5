#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void wife(int num)
{
	if (num > 9)
	{
		wife(num / 10);
	}
	printf("%d ", num % 10);
}
int main()
{
	unsigned int num = 0;
	scanf("%d", &num);
	wife(num);
	return 0;
}