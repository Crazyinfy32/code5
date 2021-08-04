//写一个自动关机的程序
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char output[20] = { 0 };
	system("shutdown -s -t 180");
	again:
	printf("请注意，输入：我是猪，来取消关机\n");
	scanf("%s", output);
	if (strcmp(output, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}