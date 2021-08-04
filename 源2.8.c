#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int yon = 0;
	for (i = 0; i < sz; i++)
	{
		yon = yon ^ arr[i];
	}
	printf("Find it:%d ", yon);
	/*for (i = 0; i < sz; i++)
	{
		int j = 0;
		int count = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("Find it:%d", arr[i]);
			break;
		}
	}*/
	return 0;
}