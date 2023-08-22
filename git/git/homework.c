#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//写代码将三个整数从大到小输出
//void Swap(int* px,int *py)
//{
//	int tem = *px;
//	*px=*py;
//	*py = tem;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= b)
//	{
//		Swap(&a, &b);
//	}
//	if (a <= c)
//	{
//		Swap(&a, &c);
//	}
//	if (b <= c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//求两个数的最大公约数
//1.0版本
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d", m);
//	return 0;
//}

//2.0版本(辗转相处法)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int m = min;
//	int c = 0;
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//打印1000~2000年之间的闰年
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%4d ", i);
//		}
//	}
//	return 0;
//}

////打印100~200之间的素数
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j==i)
//		{
//			printf("%d ",i);
//			
//		}
//
//	}
//	return 0;
//}

////编写程序数一下，1~100之间有多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

////计算1/1-1/2+1/3-1/4+1/5-1/6...+1/99-1/100的值
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum +flag*(1.0/ i);
//		flag = -flag;
//	}
//	printf("%1f\n",sum);
//	return 0;
//}

////求10数中的最大值
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,-2,3,4,5,6,7,11,9,10 };
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}

//在屏幕上输出9*9的乘法口诀表
//自己写的版本
//int main()
//{
//	int a = 1;
//	int b = 1;
//
//	for (a = 1; a < 10;a++)
//	{
//		for (b = 1; b < 10; b++)
//		{
//
//			printf("%d*%d=%d ",a,b,a*b);
//		
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//进阶版
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d是右对齐，不够的话用空格补齐，"%-2d"是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

////猜数字游戏
// #define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
// void menu()
//{
//	printf("******************************\n");
//	printf("******    1. play        *****\n");
//	printf("******    0. exit        *****\n");
//	printf("******************************\n");
//}
// void game()
//{
//
//	 int guess = 0;
//	 int ret = rand() % 100 + 1;
//	 while (1)
//	{
//		printf("请输入你猜想的数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小啦\n");
//		else if (guess > ret)
//			printf("猜大啦\n");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
// int main()
// {
//	 srand((unsigned int) time(NULL));
//	 int input = 0;
//	 
//	 do
//	 {
//		 menu();
//		 printf("请输入你的选择：", input);
//		 scanf("%d", &input);
//		 switch (input)
//		 {
//		 case 1:
//			game();
//			break;
//		 case 0:
//			printf("退出游戏!\n");
//			break;
//		 default:
//			printf("请按规定输入！！！\n");
//			break;
//		}
//	 } while (input);
//	 return 0;
//}


////二分查找某个整形有序数组的下标，有则输出下标，找不到则输出：找不到
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//也可以写成int mid = left+(right-left)/2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else 
//		{
//			printf("下标为：%d\n", mid);
//			break;
//		}
//			
//	}
//	if (left > right)
//	{
//		printf("找不到下标");
//	}
//	return 0;
//}

////交换两个数的值
//void swap(int* px, int* py)
//{
//	int tem = *px;
//	*px = *py;
//	*py = tem;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个数字（中间用空格隔开):");
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d b=%d",a,b);
//	return 0;
//}
//

//打印乘法口诀表，行列自己决定
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入数字，打印相应的乘法口诀表：");
//	scanf("%d", &n);
//	for (i = 1; i < n+1; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d是右对齐，不够的话用空格补齐，"%-2d"是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印一个整数的每一位（采用递归的形式）
#include<math.h>
//法一：
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	printf("请输入打印的数字：");
//	scanf("%s", arr);
//	int sz=strlen(arr);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//
//}

//法二：
//int main()
//{
//	int a = 0;
//	printf("请输入数字：");
//	scanf("%d",&a);
//	while (a)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}

//法三：
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//	}
//	printf("%d ", x%10);
//}
//int main()
//{
//	int a = 0;
//	printf("请输入数字：");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}


//
//
//int main()
//{
//	int a = 43;
//	printf("%d", printf("%d", printf("%d", a)));
//	return 0;
//}