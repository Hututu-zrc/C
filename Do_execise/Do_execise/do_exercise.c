#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
////1000 输出一行信息
//int main()
//{
//	printf("This is a C program.\n");
//	return 0;
//}

////1001 输出两数之和，并在两者的和之前输出“sum is ”。
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("sum is %d\n", x + y);
//	return 0;
//}

////1002 输入两个整数，比较大小并输出“max=”，之后输出较大的值。
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d,%d", &x, &y);
//	printf("max=%d\n", x > y ? x : y);
//	return 0;
//}
////1003: 编写程序输出文本
//int main()
//{
//	printf("******************************\n");
//	printf("Very good!\n");
//	printf("******************************\n");
//	return 0;
//}
////1004: 输入三个整数。输出“max = ”，之后输出最大的值。
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	scanf("%d,%d,%d", &x, &y, &z);
//	int ret = 0;
//	ret = x > y ? x : y;
//	ret = ret > z ? ret : z;
//	printf("max=%d\n", ret);
//	return 0;
//}

////1005: 输出2个数的乘积和立方
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d#%d", &x, &y);
//	printf("%d,%d,%d\n", x * y, (int)pow(x, 3), (int)pow(y, 3));
//	return 0;
//}

////1006: 求算式的和
//int main()
//{
//	double sum = 0;
//	int x = 0;
//	for (int i = 1; i <= 100; i++)
//	{ 
//		x = i;
//		if (i % 2==0)
//		{
//			x = -i;
//		}
//		sum += 1.0 / x;
//	}
//	printf("%.5lf\n", sum);
//	return 0;
//}

////1007: 是否素数。(15分)
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 2;
//	while (n % i != 0)
//	{
//		i++;
//		if (i >= n-1)
//		{
//			printf("prime\n");
//			break;
//		}
//	}
//	if (i != n - 1 && i!=n)
//	{
//		printf("not prime\n");
//	}
//	return 0;
//}

////1008: 输入10个整数，输出其中最大的数。
//int main()
//{
//	int n = 0;
//	int arr[10] = { 0 };
//	int max = 0;
//	while (scanf("%d", &arr[n]) != EOF)
//	{
//		n++;
//		if (n == 10)
//		{
//			break;
//		}
//	}
//	for(int i=0;i<10;i++)
//	{
//		if(max<arr[i])
//		max = arr[i];
//	}
//	printf("%d\n", max);
//}
////1009: 求1+2+3+.....+n的和。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += i;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////1010: 输出100至200之间的所有素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		int tmp = j;
//		if (tmp>=i-1)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

////1011: 读入两个正整数m和n，计算m和n的最大公约数
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int z = x > y ? y : x;
//	//for (int i = 1; i <= z; i++)
//	//{
//	//	if (x % i == 0 && y % i == 0)
//	//	{
//	//		printf("%d\n", i);
//	//	}
//	//}
//	int tmp=1;
//	while (tmp) 
//	{
//		tmp = x % y;
//		x = y;
//		y = tmp;
//	}
//	printf("%d\n",x);
//	
//	return 0;
//}

//1012: 输出所有闰年
//int main()
//{
//	for (int i = 1900; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

////1013: 输出一个十进制整数的八进制和十六进制表示。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%o ", n);
//	printf("%x\n", n);
//
//	return 0;
//}

//1014: 字符的加密
//int main()
//{
//	char a = { 0 };
//	scanf("%c", &a);
//	if (a + 4 <= 90)
//	{
//		printf("%c\n", a+4);
//	}
//	else if (a + 4 > 90)
//	{
//		printf("%c\n", a - 22);
//	}
//	return 0;
//}

////1015: 求表达式的值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	float x = 0.0;
//	float y = 0.0;
//	scanf("%d %d %f %f", &a, &b, &x, &y);
//	printf("%f\n", ((float)(a + b) / 2) + ((int)x % (int)y));
//	return 0;
//}

////1016: 几点几分
////方法一：
//int main()
//{
//	int hour = 5;
//	int mit = 13;
//	int N = 0;
//	scanf("%d", &N);
//	int ret =N + mit;
//	if (ret <= 59)
//	{
//		printf("%d:%d", hour, ret);
//	}
//	if (ret>59)
//	{
//		hour = hour + ret / 60;
//		mit =ret % 60;
//		if (ret / 60 >=18)
//		{
//			hour -=24;
//		}
//		printf("%d:%02d", hour, mit);
//	}
//	
//	return 0;
//}

////方法二：
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	if (N + 13 <60 )
//	{
//		printf("%d:%d", 5, N + 13);
//	}
//	else if(N+13>=60)
//	{
//		printf("%d:%d", ((N + 13) / 60 + 5)% 24, ((N + 13) % 60));
//	}
//	return 0;
//}
////1018: 计算表达式的值-1
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n", (int)pow(x, 3) + 3 * x + 5);
//
//	return 0;
//}

////1019: 计算表达式的值-2
//int main()
//{
//	double a,b;
//	scanf("%lf", &a);
//	printf("%.3lf\n", cos(a) + sin(a));
//	return 0;
//}

////1020: 输出下面的字符串-1
//int main()
//{
//	char a[] = "I love \"this game\"! ";
//	printf("%s\n", a);
//	return 0;
//}

////输入2个整数用#隔开。输出这2个整数的和。
//int main()
//{
//	int a, b;
//	scanf("%d#%d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}

////1023: 求 a-b
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d\n", a - b);
//	return 0;
//}

//1026: 求a/b保留小数点后3位
int main()
{
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%.3lf\n", (double)a / b);
	return 0;
}