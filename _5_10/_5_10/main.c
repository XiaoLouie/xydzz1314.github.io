#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	//SanShuMax();//��������С����������
	//Plus3();
	//GongYueShuMax();
	//RunNain();
	//JiSuan();
	//ZuiDaZhi();
	//JiuJiu();
	//shutdown();
	//JieMian();
	int n = 6;
	sum(n);
	return 0;
}


int SanShuMax()//��������С��������
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf_s("%d%d%d", &a, &b, &c);
	if (c > b)
	{
		int p;
		p = c;
		c = b;
		b = p;
	}
	if (c > a)
	{
		int p;
		p = c;
		c = a;
		a = p;
	}
	if (b > a)
	{
		int p;
		p = b;
		b = a;
		a = p;
	}
	printf("%d%d%d", a, b, c);
	return 0;
}


int Plus3()//��3�ı���
{
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

int GongYueShuMax()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("�������������������ǵ����Լ��");
	scanf_s("%d%d", &a, &b);
	while (a % b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", b);

}


int RunNain()//����0�굽2022�������
{
	int year;
	int count = 0;
	for (year = 0; year < 2022; year++)
	{
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d\t", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d\t", year);
			count++;
		}
	}
	printf("\n0�굽2022��һ���У�%d��\n", count);
	return 0;
}


int JiSuan()//��ϰ��ѡ�������
{
	int a = 0;
	int b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20)
			break;
		if (b % 3 == 1)
		{
			b = b + 3;
				continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);
	return 0;
}


int ZuiDaZhi()//�������ֵ
{
	int arr[] = { 1,2,3,4,5,6,7,12,9,10,11 };
	int i = 0;
	int max = 0;
	int shuzulenght = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < shuzulenght; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}


int JiuJiu()//99�˷���
{
	int i;
	int j;
	for (i = 1;i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d\t", j, i, i * j);
		}
		printf("\n");
	}
	return 0;
}


int JieMian()//��Ϸ����
{
	int xuanxiang;
	srand((unsigned int)time(NULL));
	do
	{
		UI();
		printf("��ѡ��ѡ�1/2����");
		scanf_s("%d", &xuanxiang);
		switch (xuanxiang)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ�ɹ���\n\n\n\n");
			break;
		default:
			printf("ѡ���������\n\n\n\n");
			break;
		}
	} while (xuanxiang);
	return 0;
}


int UI()//��Ϸͼ�ν���
{
	printf("********************\n");
	printf("��ӭ��������������Ϸ\n");
	printf("***����������ѡ��***\n");
	printf("--------------------\n");
	printf("*****1:��ʼ��Ϸ*****\n");
	printf("*****2:�˳���Ϸ*****\n");
	printf("********************\n");
	return 0;
}


int game()//��Ϸ�㷨
{
	int suijishu;
	int a;
	suijishu = rand() % 100 + 1;
	while (1)
	{
		printf("\n��һ��1��100֮����������\n");
		scanf_s("%d", &a);
			if (a > suijishu)
			{
				printf("�����������������ʱ������ɵ���,����������\n");
			}
			else if (a < suijishu)
			{
				printf("���������С������ʱ������ɵ���,����������\n");
			}
			else
			{
				printf("�����ˣ��������ҵ�����������ˣ�\n");
				break;
			}
	}
	return 0;
}


int shutdown()//�ػ�����
{
	char a[20] = {0};
	system("shutdown -s -t 12000");
	ZaiCiShuRu:
	printf("��ע����ĵ��Խ��������Ӻ�ػ����������ֹ�ػ������룺���Ұ�Ӣ�\n�����룺");
	scanf("%s", &a);
	if (strcmp(a,"�Ұ�Ӣ��") == 0)
	{
		system("shutdown -a");
	}
	else
	goto ZaiCiShuRu;
	return 0;
}


int sum(int n)
{
	int i;
	int sum = 0;
	for (i = 1; i <= sum; i++)
	{
		sum = sum + i;
		n = sum;
	}
	return n;
}



