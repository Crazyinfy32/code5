#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct t
{
	int age;
	char name;
};
struct s
{
	int high;
	int weight;
	struct t sr;
};
int main()
{
	struct s s = { 182,100,{21,'c'} };
	printf("%d %d %d", s.high, s.sr.age, s.weight);
	return 0;
}