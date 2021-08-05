#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n = 0;
	int count = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
			count++;
	}
	/*while (n)
	{
		if (n & 1 == 1);
		{
			count++;
			n = n >> 1;
		}
	}*/
	printf("%d", count);
	return 0;
}