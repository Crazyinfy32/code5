#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct stu
//{
//	char ch[20];
//	int age;
//	char tele[12];
//};
typedef struct std
{
	char ch[20];
	int age;
	char tele[12];
}std;
int main()
{
	//struct stu s1 = { "张三",20,"xxxxxxxx" };
	std s1 = { "张三",20,"xxxxxxxx" };
	return 0;
}