#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <cerrno>
#include<stdlib.h>
int main()
{
	int* p = (int*)calloc(10, sizeof(int));
	if (p == NULL)
	{
		printf("%d ", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
			printf("%d ", *(p + i));
	}
	free(p);
    p = NULL;
	return 0;
}