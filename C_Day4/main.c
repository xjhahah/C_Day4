#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 1

//��ӡ����
void Test1()
{
	int n = 0;
	printf("������Ҫ��ӡ������: ");
	scanf_s("%d", &n);
	//�ȴ�ӡ�ϰ벿��
	for (int i = 0; i < n; ++i)
	{
		//�ȴ�ո�
		for (int j = 0; j < n - i - 1; ++j)
		{
			printf(" ");
		}
		//�ٴ� * �� 
		for (int j = 0; j < 2 * i + 1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	//�ڴ�ӡ�°벿��
	for (int i = 0; i < n - 1; ++i)
	{
		//�ȴ�ӡ�ո�
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