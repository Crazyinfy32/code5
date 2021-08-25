#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
struct s
{
	int n;
	char arr[10];
};
int main()
{
	struct s s = { 0 };
	fscanf(stdin, " %d %s", &(s.n), s.arr);
	fprintf(stdout, "%d %s", s.n, s.arr);
	return 0;
}