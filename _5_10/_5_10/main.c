#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int main()
{
	//SanShuMax();//求三数从小到大排序函数
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


int SanShuMax()//求三数从小到大排序
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


int Plus3()//求3的倍数
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
	printf("请输入两个数字求他们的最大公约数");
	scanf_s("%d%d", &a, &b);
	while (a % b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	printf("%d", b);

}


int RunNain()//计算0年到2022年的闰年
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
	printf("\n0年到2022年一共有：%d年\n", count);
	return 0;
}


int JiSuan()//两习题选项计算结果
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


int ZuiDaZhi()//数组最大值
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


int JiuJiu()//99乘法表
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


int JieMian()//游戏界面
{
	int xuanxiang;
	srand((unsigned int)time(NULL));
	do
	{
		UI();
		printf("请选择选项（1/2）：");
		scanf_s("%d", &xuanxiang);
		switch (xuanxiang)
		{
		case 1:
			game();
			break;
		case 2:
			printf("退出游戏成功！\n\n\n\n");
			break;
		default:
			printf("选项输入错误！\n\n\n\n");
			break;
		}
	} while (xuanxiang);
	return 0;
}


int UI()//游戏图形界面
{
	printf("********************\n");
	printf("欢迎来带到猜数字游戏\n");
	printf("***请输入以下选项***\n");
	printf("--------------------\n");
	printf("*****1:开始游戏*****\n");
	printf("*****2:退出游戏*****\n");
	printf("********************\n");
	return 0;
}


int game()//游戏算法
{
	int suijishu;
	int a;
	suijishu = rand() % 100 + 1;
	while (1)
	{
		printf("\n猜一个1到100之间的随机数吧\n");
		scanf_s("%d", &a);
			if (a > suijishu)
			{
				printf("你输入的数大于我们时间戳生成的数,请重新输入\n");
			}
			else if (a < suijishu)
			{
				printf("你输入的数小于我们时间戳生成的数,请重新输入\n");
			}
			else
			{
				printf("嗨嗨嗨，你终于找到我这个老六了！\n");
				break;
			}
	}
	return 0;
}


int shutdown()//关机程序
{
	char a[20] = {0};
	system("shutdown -s -t 12000");
	ZaiCiShuRu:
	printf("请注意你的电脑将在两分钟后关机，如果想终止关机请输入：“我爱英语”\n请输入：");
	scanf("%s", &a);
	if (strcmp(a,"我爱英语") == 0)
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



