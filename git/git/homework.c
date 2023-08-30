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

//打印阶乘
//非递归版本
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入想求阶乘的数字：");
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	
//	return 0;
//
//}
//递归版本
//int fac(int n)
//{
//	int ret = 1;
//	if (n >= 1)
//	{
//		ret = n * fac(n - 1);
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入想求阶乘的数字：");
//	scanf("%d", &n);
//	fac(n);
//	printf("阶乘为:%d", fac(n));
//	return 0;
//}

////strlen的模拟实现
////非递归的方法
//int Strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count ++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//
//	int i = 0;
//	char arr[20] = {0};
//	printf("请输入字符串:");
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("长度为：%d\n", ret);
//	return 0;
//}

//strlen模拟，递归法
//int Strlen(char arr[])
//{
//	if (*arr != '\0')
//	{
//		return 1 + Strlen(arr+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[20] = {0};
//	printf("请输入字符串:");
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("长度为：%d\n", ret);
//	return 0;
//}


////逆序打印
//int main()
//{
//	char arr[] = { "adafsdfsdfsfs"};
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = length; i>0 ; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//逆序存放
//非递归版本
//void reverse(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 2;
//	while (left < right)
//	{
//		char tep = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tep;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = { "abcdefg" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof计算字符串长度时候，会算进去\0
//	//所以，我们要先减去一个1，再减去一个1，得到最后一个字符的下标
//	reverse(arr,sz);
//	printf("%s\n",arr);
//	return 0;
//}

////递归版本1.0  多看，多思考
//#include<string.h>
//void reverse(char arr[])//最外层的两个元素不停的调换，直至递归完毕
//{
//	char tmp = '\0';//首先创建一个空的字符变量
//	tmp = *arr;//将第一个元素放到空的字符变量里面
//	int len = strlen(arr);//因为字符串计算长度包含'\0',所以下面要用算出来的长度减一
//	*arr = *(arr+len-1);//将最后一个元素放到第一个里面去
//	*(arr + len - 1) = '\0';//因为要进行递归，所以最后一个位置放上空字符串，方便下面进行递归
//	if (strlen(arr+1) >= 2)//设定限制条件。条件是里面递归的字符数量要大于2个
//		reverse(arr +1);//最外层的元素调整后，进行里面元素的递归
//	*(arr + len - 1) = tmp;//将我们储存在临时变量的元素放回最后一个元素的位置
//}
//// 递归版本2.0
// void reverse(char arr[],int left ,int right)
//{
//
//	if (left < right)
//	{
//		char tep = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tep;
//		reverse(arr, left+1, right-1);
//	}
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;
//	reverse(arr,left,right);
//	printf("%s\n",arr);
//	return 0;
//}

////写一个DigitSum函数把输入的数字，一个一个加起来，，再输出最后的结果
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	printf("请输入数字：");
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d",sum);
//	return 0;
//}

//利用递归实现n的k次方
//double Pow(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k < 0)
//	{
//		return 1.0 / Pow(n, -k);
//	}
//	else
//		return 1;
//	
//	
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入数字以及要求的次方，中间使用空格分开：");
//	scanf("%d %d", &n,&k);
//	double ret = Pow(n,k);
//	printf("%.3f", ret);
//	return 0;
//}

////小青蛙跳台阶,一次上一阶或者二阶，共有多少中上法
////解析：当只有一个台阶的时候只有一种上法； 当有两个台阶的时候 有两种上法 
////假设我们有10个台阶，我们先上一阶，我们剩下上法为fib(9)
////我们先上2个台阶时，我们剩下上法为fib(8)
////我们只能上1个或者2个，所以n>=2时，我们fib(n)=fib(n-1)+fib(n-2)
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	if (n >= 2)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入台阶数(1~30)：");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

////有一个整数序列，删除其中的指定整数，不改变其他整数的位置
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//接收整数序列里面的整数个数
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);//接收整数序列，并把整数序列放入数组里面
//	}
//	int del = 0;
//	scanf("%d", &del);//接受我们需要删除的元素
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//			//利用循环遍历，如果不相等，我们把元素放入arr[j];
//			//如果相等，我们让i++，多走一步，错过我们del，把我们剩下的元素放入arr[j]，达到删除指定元素的效果
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//最后，输出元素
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	printf("请输入成绩的总个数(1~10000):");
	scanf("%d", &n);
	int arr[10000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%3d", &arr[i]);
	}
	int max = 0;
	int min = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
		
	}
	int ret = arr[max] - arr[min];
	printf("差值为：%d", ret);
	return 0;
}