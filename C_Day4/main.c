#include <stdio.h>
#include <math.h>

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
//ˮ�ɻ���
void Test2()
{
	int n = 0;	
	printf("��������Ҫ�жϵ�ˮ�ɻ���: ");
	scanf_s("%d",&n);
	for (int i = 0; i < n; ++i)
	{
		int count = 1;
		int sum = 0;
		//�����Ǽ�λ��
		int tmp = i;
		while (tmp > 9)
		{
			count++;
			tmp /= 10;
		}
		//�õ�ÿһλ
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
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮��
void Test3()
{
	int n, m;
	int sum = 0,next=0;
	printf("��������Ҫ�ۼӵ�����");
	scanf_s("%d%d", &n, &m);
	for (int i = 0; i < m; ++i)
	{
		next = next * 10 + n;
		sum = sum + next;
	}
	printf("%d\n", sum);
}
//�ӱ�׼�����ȡCԴ���룬����֤���еĻ����Ŷ���ȷ�ĳɶԳ���
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
			printf("��ƥ��\n");
			return;
		}
		else if (ch == '}')
			count--;
	}
	if (count == 0)
	{
		printf("ƥ��\n");
	}
	else
	{
		printf("��ƥ��\n");
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