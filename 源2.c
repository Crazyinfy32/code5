#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_system()
{
	int a = 10;
	return *(char*)&a;
}
int main()
//{
//	int a = 20;
//	char* p = &a;
//	if (*p == 12)
//		printf("С��");
//	else
//		printf("���");
//	return 0;
//}

{
	int ret = check_system();
	if (ret == 1)
		printf("С��");
	else
		printf("���");
}