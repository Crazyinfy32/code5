//дһ���Զ��ػ��ĳ���
#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	char output[20] = { 0 };
	system("shutdown -s -t 180");
	again:
	printf("��ע�⣬���룺��������ȡ���ػ�\n");
	scanf("%s", output);
	if (strcmp(output, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}