#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[] = "abcdef";
	int i = 0;
	for (i = 0; i < (int)strlen(arr1); i++)
	{
		printf("%c ", arr1[i]);

	}
	return 0;
}