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



