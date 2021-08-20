#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct A
{
	int a : 2;
	int b : 6;
	int c : 9;
	int d : 20;
};
int main()
{
	struct A a = { 0 };
	printf("%d ", sizeof(a));
	return 0;
}