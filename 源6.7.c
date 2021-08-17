#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	while (*arr1++ == *arr2++)
	{
		if (*arr1 == '\0')
		{
			return 0;
		}
		
	}
	if (*arr1 > *arr2)
		{
			return 1;
		}
	else
		{
			return -1;
		}
}
int main()
{
	char *p = "abcdef";
	char *p2 = "adcge";
	int ret = my_strcmp(p,p2);
	printf("%d ", ret);
	return 0;
}