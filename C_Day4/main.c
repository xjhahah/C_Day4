#include <stdio.h>
#include <math.h>

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
//水仙花数
void Test2()
{
	int n = 0;	
	printf("请输入你要判断的水仙花数: ");
	scanf_s("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		int count = 1;
		int sum = 0;
		//计算是几位数
		int tmp = i;
		while (tmp > 9)
		{
			count++;
			tmp /= 10;
		}
		//得到每一位
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}
	}
}
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和
void Test3()
{
	int n, m;
	int sum = 0,next=0;
	printf("请输入你要累加的数：");
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i < m; ++i)
	{
		next = next * 10 + n;
		sum = sum + next;
	}
	printf("%d\n", sum);
}
//从标准输入读取C源代码，并验证所有的花括号都正确的成对出现
void Test4()
{
	int ch=0;
	int count = 0;
	while (ch == getchar() != EOF)
	{
		if (ch == '{')
			count++;
		else if (ch == '}'&&count == 0)
		{
			printf("不匹配\n");
			return;
		}
		else if (ch == '}')
			count--;
	}
	if (count == 0)
	{
		printf("匹配\n");
	}
	else
	{
		printf("不匹配\n");
	}
}
int main()
{
	Test1();
	Test2();
	Test3();
	Test4();
	getchar();
	return 0;
}