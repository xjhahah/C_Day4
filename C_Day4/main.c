#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

//打印菱形
void Test1()
{
	int n = 0;
	printf("请输入要打印的菱形: ");
	scanf_s("%d", &n);
	//先打印上半部分
	for (int i = 0; i < n; ++i)
	{
		//先打空格
		for (int j = 0; j < n - i - 1; ++j)
		{
			printf(" ");
		}
		//再打 * 号 
		for (int j = 0; j < 2 * i + 1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	//在打印下半部分
	for (int i = 0; i < n - 1; ++i)
	{
		//先打印空格
		for (int j = 0; j < i + 1; ++j)
		{
			printf(" ");
		}
		for (int j = 0; j < (n - 1 - i) * 2 - 1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
}
int main()
{
	Test1();
	return 0;
}