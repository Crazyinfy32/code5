#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fib1(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>2)
	{
		c = a + b;
		a = b;
		b =c ;
		n--;
	}
	return c;
}
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//	
//}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fib1(n);
	printf("%d", ret);
	return 0;
}