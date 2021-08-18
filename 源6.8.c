#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* r1 = p1;
	char* r2 = p2;
	char* pek = p1;
	if (*p2 == '\0')
	{
		return p1;
	}
	while (*pek)
	{
		r1 = pek;
		r2 = p2;
		while ((*r1 != '\0') && (*r2 != '\0') && (*r1 == *r2))
		{
			r1++;
			r2++;
		}
		if (*r2 == '\0')
		{
			return pek;
		}
		pek++;
	}
	return NULL;
}
int main()
{
	char* p1 = "abbbcdef";
	char* p2 = "bbc";
	char* ret = my_strstr(p1, p2);
 	printf("%s", ret);
}