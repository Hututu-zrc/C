#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	for (int i = 3; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

#include<stdio.h>
//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a < b) {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//    if (a < c) {
//        int temp = a;
//        a = c;
//        c = temp;
//    }
//    if (b < c) {
//        int temp = b;
//        b = c;
//        c = temp;
//    }
//    printf("%d %d %d\n", a, b, c);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int a, b, c;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to
//        if (a + b > c && a + c > b && b + c > a) {
//            if (a == b && b == c && a == c)
//                printf("Equilateral triangle!\n");
//            else if ((a == b) || (a == c) || (b == c))
//                printf("Isosceles triangle!\n");
//              
//
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//
//    }
//    return 0;
//}
//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//	return 0;
//}
//#include <math.h>
//int main()
//{
//	int i = 1;
//	double sum = 0.0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += (-1.0 / i)*pow(-1,i);
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int count = 0;
//	for ( int i = 1; i <= 100; i++)
//	{
//		int temp = i;
//		while (temp)
//		{
//			if (temp % 10 == 9)
//			{
//				count++;
//			}
//			temp /= 10;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
////【一维数组】输入10个整数，求平均值
//int main()
//{
//	int arr[10], sum=0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		sum += arr[i];
//	}
//	printf("%d\n", sum / 10);
//	return 0;
//}
// 
// 
//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//	printf("%d %d\n", sizeof(acX), sizeof(acY));
//	printf("%d %d", strlen(acX), strlen(acY));
//	return 0;
//}

////KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的X形图案。
//#include <stdio.h>
//int main()
//{
//    int n;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == j || j + i == n - 1)
//                    putchar('*');
//                else
//                    putchar(' ');
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”正方形图案。
//#include <stdio.h>
//
//int main() {
//    int n;
//    while ((scanf("%d", &n)) != EOF)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            if (i == 0 || i == n - 1)
//            {
//                for (int j = 0; j < 2 * n; j++)
//                {
//                    if (j % 2 == 0)
//                        putchar('*');
//                    else
//                        putchar(' ');
//                }
//                printf("\n");
//            }
//            else
//            {
//                for (int j = 0; j < 2 * n; j++)
//                {
//                    if (j == 0 || j == 2 * n - 2)
//                        putchar('*');
//                    else
//                        putchar(' ');
//                }
//                printf("\n");
//            }
//        }
//    }
//    return 0;
//}
//描述KiKi有一个矩阵，他想知道转置后的矩阵（将矩阵的行列互换得到的新矩阵称为转置矩阵），请编程帮他解答。
#include <stdio.h>
#include <stdio.h>
//
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    int arr[100][100];
//    for (int i = 0; i < a; i++)
//    {
//        for (int j = 0; j < b; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    for (int i = 0; i < b; i++)
//    {
//        for (int j = 0; j < a; j++)
//        {
//            printf("%d ", arr[j][i]);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//输入10个整数，要求按输入时的逆序把这10个数打印出来。逆序输出，就是按照输入相反的顺序打印这10个数。
//#include <stdio.h>
//
//int main()
//{
//    int arr[10];
//    int i = 0;
//    while (i < 10)
//    {
//        scanf("%d", &arr[i]);
//        i++;
//    }
//    for (i -= 1; i >= 0; i--)
//        printf("%d ", arr[i]);
//    return 0;
//}

////交换数组里面的内容
//int main()
//{
//	int arr1[2] = { 1,2 };
//	int arr2[2] = { 3,4 };
//	for (int i = 0; i < 2; i++)
//	{
//		int swap = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = swap;
//	}
//	printf("%d %d\n", arr1[0], arr1[1]);
//	printf("%d %d\n", arr2[0], arr2[1]);
//}

//有序序列的合并
//#include <stdio.h>
//void input(int n, int* arr)
//{
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//}
//int main()
//{
//    int a, b, k = 0, i = 0,j = 0,temp=0;
//    scanf("%d %d", &a, &b);
//    int arr1[1000], arr2[1000], arr3[30000];
//    input(a, arr1); input(b, arr2);
//    while (i < a && j < b)
//    {
//        if (arr1[i] <= arr2[j])
//        {
//            arr3[k] = arr1[i];
//            k++; i++;
//        }
//        else
//        {
//            arr3[k] = arr2[j];
//            k++; j++;
//        }
//    }
//    for (int x = i + j; x < a + b; x++)
//    {
//        if (j<b)
//        {
//            arr3[x] = arr2[j];
//            j++;
//        }
//        else if(i<a)
//        {
//            arr3[x] = arr1[i];
//            i++;
//        }
//    }
//        
//    for (int i = 0; i < a + b; i++)
//        printf("%d ", arr3[i]);
//    return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//#include <stdio.h>
//int main()
//{
//	int input;
//	while ((scanf("%d", &input)) != EOF)
//	{
//		for (int i = 1; i <= input; i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				printf("%d*%d=%d ", i, j, i * j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
////实现函数判断year是不是润年。
//int main()
//{
//	int year;
//	while (scanf("%d", &year) != EOF)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("闰年\n");
//		else
//			printf("非闰年\n");
//	}
//	
//	return 0;
//}

//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
//#include <stdio.h>
//#include <math.h>
//
//void is_prime(int n)
//{
//	int signal = 0;
//	for (int i = 2; i <= (int)sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			signal = 1; break;
//		}
//	}
//	if (signal == 0)
//		printf("%d ", n);
//}
//int main()
//{
//	for (int i = 2; i <= 200; i++)
//	{
//		is_prime(i);
//	}
//	return 0;
//}
//
////使用函数实现数组操作
//void Init(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		arr[i] = 0;
//}
//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//}
//void Reverse(int* arr, int sz)
//{
//	for (int i = 0; i < sz / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = temp;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	Init(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
//// 
////写一个二分查找函数
////功能：在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1.
//int Binary_Search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = Binary_Search(arr, 0, sz,5);
//	printf("%d\n", ret);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//喝汽水问题
//////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。
////实际上就是求商和求模的问题
//int main()
//{
//	int money;
//	printf("请输入你的钱数：");
//	scanf("%d", &money);
//	int count = money;
//	int vacant =money;
//	int empty = 0;
//	while (vacant+empty >= 2)
//	{
//		if (empty == 2)
//		{
//			count += vacant / 2 + empty / 2;
//			empty %= 2;
//		}
//		else
//		{
//			count += vacant / 2 ;
//		}
//		empty += vacant % 2;
//		vacant = vacant / 2;
//		
//		
//	}
//	printf("%d\n", count);
//	return 0;
//}
//

////输出菱形
//int main()
//{
//	for (int i = 1; i <=7; i++)
//	{
//		for (int j = i;j<= 7; j++)
//			printf(" ");
//		int temp = i;
//		for (int j = 1; j<=2*i-1; j++)
//			printf("*");
//		for (int j = i; j <= 7; j++)
//			printf(" ");
//		printf("\n");
//	}	
//	for (int i = 6; i>=1; i--)
//	{
//		for (int j = 7; j >= i; j--)
//			printf(" ");
//		for (int j = 1; j <= 2 * i - 1; j++)
//			printf("*");
//		for (int j =7; j >= i; j--)
//			printf(" ");
//		printf("\n");
//	}
//	return 0;
//}
//
////
////打印水仙花数
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		int temp = i;
//		int sum = 0, count = 0;
//		while (temp)
//		{
//			temp /= 10;
//			count++;
//		}
//		temp = i;
//		while (temp)
//		{
//			sum += (int)pow((temp % 10), count);
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
///求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int temp=0,total=0,count=0;
//	while (count != 5)
//	{
//		temp = temp * 10 + n;
//		total += temp;
//		count++;
//	}
//		
//	printf("%d\n", total);
//	return 0;
//}


//递归和非递归分别实现求第n个斐波那契数
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = Fib(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//递归实现n的k次方
//int Power(int n, int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n*Power(n, k - 1);
//}
//int main()
//{
//	int n,k;
//	while ((scanf("%d %d", &n,&k)) != EOF)
//	{
//		int ret = Power(n,k);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


////递归实现阶乘
//int Factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//int main()
//{
//	int n;
//	while ((scanf("%d", &n))!= EOF)
//	{
//		int ret = Factorial(n);
//		printf("%d\n", ret);
//	}
//}
//非递归实现阶乘
//int Fac(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		int ret = Fac(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

////计算一个数的每位之和（递归实现）
//int DigitSum(int input)
//{
//	static int sum = 0;
//	if (input)
//		DigitSum(input / 10);
//	return sum += input % 10;
//
//}
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	int ret = DigitSum(input);
//	printf("%d\n", ret);
//	return 0;
//}

////打印一个数的每一位
//void Print(int n)
//{
//	if (n>10)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	Print(n);
//	return 0;
//
//}


//打印整数二进制的奇数位和偶数位
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("偶数位为：");
//	for (int i = 1; i < 8; i += 2)
//	{
//		printf("%d ", n >> i & 1);
//	}	
//	printf("\n");
//	printf("奇数位为：");
//	for (int i = 0; i < 8; i += 2)
//	{
//		printf("%d ", n >> i & 1);
//	}
//	printf("\n");
//	return 0;
//}

//
////不创建临时变量，交换两数
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

//输出二进制里面的1
//三种方法，
//1.移位
//2.模上2
//3.n&n-1
//#include <stdio.h>
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


//操作符作业
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

//
//#include <stdio.h>
//int i;
//int main()
//{
//    i--;
//    if (i > sizeof(i))
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//在一个整型数组中，只有一个数字出现一次，其他数组都是成对出现的，
// 请找出那个只出现一次的数字。
//例如：
//数组中有：1 2 3 4 5 1 2 3 4，只有5出现一次，其他数字都出现2次，找出5
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4,5};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j + 1] < arr[j])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < sz; i+=2)
//	{
//		if (arr[i] != arr[i + 1] || i==sz-1)
//		{
//			printf("%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}