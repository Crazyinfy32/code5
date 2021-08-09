#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* ch)
{
	char* start = ch;
	char* end = ch;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char ch[] = "bit";
	int len = my_strlen(ch);
	printf("%d ", len);
	return 0;
}