#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
typedef struct stu
{
	char name[20];
	char tele[12];
	char gender[20];
	short age;
}stu;
void print2(stu* s1)
{
	printf("%s\n", s1->name);
	printf("%s\n", s1->tele);
}
int main()
{
	struct stu s1 ={ "уехЩ","12345678901","дп",20 };
	print2(&s1);
	return 0;
}