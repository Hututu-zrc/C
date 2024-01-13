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

//#include<stdio.h>
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

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//字符串逆序
//#include <stdio.h>
//
//int main()
//{
//    char arr[10000] = { 0 };
//    gets(arr);
//    int sz = strlen(arr);
//    for (int i = sz - 1; i >= 0; i--)
//    {
//        printf("%c", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}

////实现一个函数，可以左旋字符串中的k个字符。
////例如：
////ABCD左旋一个字符得到BCDA
////ABCD左旋两个字符得到CDAB
//#include <stdio.h>
//#include <string.h>
//void LeftRevolve(char* arr, int input,int sz)
//{
//	char temp[100];
//	strncpy(temp,arr+ input,sz+1-input);                                                    
//	strncat(temp, arr, input);
//	strcpy(arr, temp);
//}
//int main()
//{
//	char arr[100];
//	gets(arr);
//	int input;
//	scanf("%d", &input);
//	int sz = strlen(arr);
//	LeftRevolve(arr, input, sz);
//	puts(arr);
//	return 0;
//}

//模拟实现strlen()函数
//int My_strlen(char *arr)
//{
//	int count = 0;
//	if (*arr)
//		return 1 + My_strlen(++arr);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[1000];
//	gets(arr);
//	int ret = My_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//	return 0;
//}

////实现一个对整形数组的冒泡排序
//void Bubble(int* arr, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j+1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,12,45,6,4,8,9,5,1,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Bubble(arr, sz);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}


////调整数组使奇数全部都位于偶数前面。
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,56,16,19,58 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz - 1;
//	while (left < right)
//	{
//		if (arr[right] % 2 == 1 && arr[left]%2==0)
//		{
//			int temp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = temp;
//			left++, right--;
//		}
//		else
//		{
//			left += arr[left] % 2;
//			right -= arr[right] % 2+1;
//		}
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
#include <stdio.h>
#include <string.h>
//char* Reverse(char* arr, int method, int input,int sz)
//{
//	char temp[100] = { 0 };
//	if (method == 1)
//	{
		//strcpy(temp, arr + input);
		//strncat(temp, arr, input);
		//strcpy(arr, temp);
//	}
//	else
//	{
		/*for (int i = 0; i < input; i++)
			temp[i] = arr[sz - 1];
		strncpy(temp, arr, sz - input);
		strcpy(arr, temp);*/
//	}
//	return arr;
//}

//int Reverse(char* s1, char* s2, int sz1, int sz2)
//{
//	if (sz1 != sz2)
//		return 0;
//	else
//	{
//		for (int i = 1; i < sz1; i++)
//		{
//			char temp[100] = { 0 };
//			strcpy(temp, s1 + i);
//			strncat(temp, s1, i);
//			if (!strcmp(temp, s2))
//				return 1;
//		}
//		for (int j = 1; j < sz1; j++)
//		{
//			char temp[100] = { 100 };
//			for (int i = 0; i < j; i++)
//				temp[i] = s1[sz1 - 1];
//			strncpy(temp, s1, sz1 - j);
//			if (!strcmp(temp, s2))
//				return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char s1[100];
//	char s2[100];
//	gets(s1);
//	gets(s2);
//	int sz1 = strlen(s1), sz2 = strlen(s2);
//	int ret= Reverse(s1,s2,sz1,sz2);
//	printf("%d\n", ret);
//	return 0;
//}

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
// 请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N)
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	int i = 0, j = 0,input;
//	scanf("%d", &input);
//	for (; i < 3; i++)
//	{
//		if (arr[i][4] >= input)
//			break;
//	}
//	int left = 0, right = 4, mid =0,signal=1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[i][mid] < input)
//			left = mid + 1;
//		else if (arr[i][mid] > input)
//			right = mid - 1;
//		else
//		{
//			signal = 0;
//			puts("该数存在");
//			break;
//		}
//	}
//	if(signal)
//		puts("该数不存在");
//	return 0;
//}
//
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//typedef struct LinkList
//{
//	char* arr;
//	int judge;
//	struct LinkList* next;
//
//}L;
//int Judge(L* temp,L*D)
//{
//	temp->judge = 0;
//	temp = temp->next;
//	int count = 0;
//	static int counter = 0;
//	while(temp->judge == 1)
//	{
//		if (temp == D)
//		{
//			temp->next->judge = 0;
//		}
//		temp = temp->next;
//		count++;
//	}
//	if (count+counter == 3 && counter!=0 &&counter!=1)
//		return 1;
//	else
//	{
//		counter++;
//		return 0;
//	}	
//}
//int main()
//{
//	L A, B, C, D;
//		L*head,*signal;
//	
//	
//	A.arr = "A\0";
//	head = signal = &A;
//	B.arr = "B\0";
//	C.arr = "C\0";
//	D.arr = "D\0";
//
//	B.next = &C;
//	A.next = &B;
//	C.next = &D;
//	D.next = &C;
//	 
//	int count = 0;
//	while (count!=4)
//	{
//		A.judge = 1;	B.judge = 1;
//		C.judge = 1; D.judge = 1;
//		if (Judge(signal,&D))
//		{
//			printf("%s\n", signal->arr);
//			break;
//		}
//		signal = signal->next;
//		count++;
//	}
//	return 0;
//}

//在屏幕上打印杨辉三角。
//#define N 25
//int main()
//{
//	int arr[N][N];
//	arr[0][0] = 1; arr[1][0] = 1;
//	arr[1][1] = 1;
//	for (int i = 2; i < N; i++)
//	{
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (int j = 1; j < i; j++)
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j <= i ; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
// 




////关于函数指针的复现
//int Add(int a,int b)
//{
//	return a + b;
//}
//int Sub(int a,int b)
//{
//	return a - b;
//}
//int Mul(int a,int b)
//{
//	return a * b;
//}
//int Div(int a,int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("******************************\n");
//	printf("******    1. Add      *****\n");
//	printf("******    2.Sub       *****\n");
//	printf("******    3.Mul       *****\n");
//	printf("******    4.Div        *****\n");
//	printf("******    0. exit        *****\n");
//	printf("******************************\n");
//}
//int main()
//{
//	int input;
//	int (*pf[100])(int, int) = { 0,Add,Sub,Mul,Div };
//	do
//	{
//		menu();
//		printf("请选择你要进行的操作：");
//		scanf("%d", &input);
//		if (input == 0)
//			exit(0);
//		printf("请输入操作数：");
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%d\n", pf[input](a, b));
//		
//	} while(input);
//	return 0;
//}

// //关于qsort排序二维数组
//int compare(const void* a, const void* b)
//{
//	return (*((int*)b + 2)) - (*((int*)a + 2));
//}
//int main()
//{
//	int arr[3][4] = { 1,2,1,4,5,6,3,8,9,10,7,12 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//}
//
// 
//int compare(const void* a, const void* b)
//{
//	return *(int*)b - *(int*)a;
//}
//int main()
//{
//	int arr[5] = { 9,8,10,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), compare);
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//}

//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//}stu;
//
//
//int compare(const void* a, const void* b)
//{
//	return strcmp(((stu*)a)->name, ((stu*)b)->name);
//}
//int compare2(const void* a, const void* b)
//{
//	return ((stu*)b)->age - ((stu*)a)->age;
//}
//
//int main()
//{
//	struct Stu stu[] = { {"zhuruncai",15,"男"},{"liyichen",18,"男"},{"hujin",19,"男"} };
//	int sz = sizeof(stu) / sizeof(stu[0]);
//	qsort(stu, sz, sizeof(stu[0]), compare2);
//	for(int i=0;i<sz;i++)
//		printf("%s %d %s\n", stu[i].name, stu[i].age, stu[i].sex);
//	return 0;
//}

//单身狗问题
//int compare(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int arr[] = { 0,2,3,4,5,1,2,3,4,6,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), compare);
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] == arr[i + 1])
//			i++;
//		else
//			printf("%d ", arr[i]);
//	}
//}
//

////输出月份
//#include <stdio.h>
//int main()
//{
//    int year, month;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//        arr[2] += (year % 100 != 0 && year % 4 == 0 || year % 400 == 0);
//        printf("%d\n", arr[month]);
//    }
//    return 0;
//}


//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d\n", *(&arr + 1));
//	return 0;
//}



//
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//判断机器的大小端
//union Un 
//{
//	int a;
//	char b;
//}un;
//int main()
//{
//	un.a=1;
//	if(un.b==1)
//		puts("小端");
//	else if(un.b==0)
//		puts("大端"); 
//	return 0;
// } 
//

////strstr 的复现
//void My_strcpy(char *temp,char*arr,int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		temp[i]=arr[i];
//	}
//}
//int main()
//{
//	char arr[1000];
//	scanf("%s",arr);
//	int sz=strlen(arr);
//	char temp[1000];
//	My_strcpy(temp,arr,sz);
//	puts(temp);
//}

////模拟实现strcmp
//int My_strcmp(char*arr,char*arr1)
//{
//	int flag=0;
//	while(*arr!='\0' &&*arr1!='\0') 
//	{
//		if(*arr!=*arr1)
//		{
//			flag=1;
//			break;
//		}
//		arr++; arr1++;
//	}
//	if(flag==0)
//		return 0;
//	else
//	{
//		if(*arr>*arr1)
//			return 1;
//		else
//			return -1;
//	}
//}
//int main()
//{
//	char arr[100];
//	gets(arr);
//	char arr1[100];
//	gets(arr1);
//	if(!My_strcmp(arr,arr1))
//		puts("相同");
//	else if(My_strcmp(arr,arr1)>1)
//		puts("第一个数组大");
//	else
//		puts("第二个数组大"); 
//	return 0;
// } 
//
//

////模拟实现strcat
//void My_strcat(char* arr, char* arr1)
//{
//	while (*arr != '\0')
//		arr++;
//	while (*arr1 != '\0')
//	{
//		*arr = *arr1;
//		arr++;
//		arr1++;
//	}
//	*arr = '\0';
//}
//int main()
//{
//	char arr[100];
//	char arr1[100];
//	gets(arr);
//	gets(arr1);
//	My_strcat(arr, arr1);
//	puts(arr);
//	return 0;
//}

////模拟实现strstr
//#include <assert.h>
//char* My_strstr(char* arr, char* temp)
//{
//	assert(arr && temp);
//	char* tmp = temp;
//	char* tmp2 = arr;
//	while (*tmp2 != '\0')
//	{
//		while(*temp == *tmp2 && *tmp2!='\0')
//		{
//			temp++; tmp2++;
//			if (*temp == '\0')
//				break;
//		}
//		
//		if (*temp == '\0')
//			return arr;
//		tmp2++; arr++;
//	}
//	if (*tmp2 == '\0' && *temp == '\0')
//		return NULL;
//}
//int main()
//{
//	char arr[100];
//	gets(arr);
//	char temp[100];
//	gets(temp);
//	char* ret = My_strstr(arr, temp);
//	printf("%s\n", ret);
//	return 0;
//}
//
//int main()
//{
//	for(int i=0;i<10;i++)
//		printf("%d ",i);
//	return 0;
//}
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
//int main()
//{
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	assert(ptr);
//	for (int i = 0; i < 10; i++)
//		*(ptr + i) = i;
//	for (int i = 0; i < 10; i++)
//		printf("%d ", *(ptr + i));
//	printf("\n");
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)calloc(10, sizeof(int));
//	assert(ptr);
//	//for (int i = 0; i < 10; i++)
//	//	*(ptr + i) = i;
//	for (int i = 0; i < 10; i++)
//		printf("%d ", *(ptr + i));
//	printf("\n");
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}

//int main()
//{
//	int* ptr = (int*)malloc(sizeof(int) * 10);
//	assert(ptr);
//	for (int i = 0; i < 10; i++)
//		*(ptr + i) = i;
//	int* ps = NULL;
//	ps = (int*)realloc(ptr, sizeof(int) * 20);
//	//这个地方不可以直接赋值给ptr，因为可能会扩容失败
//	assert(ps);
//	ptr = ps;
//	for (int i = 10; i < 20; i++)
//		*(ptr + i) = i;
//	for (int i = 0; i < 20; i++)
//		printf("%d ", *(ptr + i));
//	free(ptr);
//	free(ps);
//	ps = ptr = NULL;
//	return 0;
//}



//
////关于柔性数组
////注意柔性数组要放在最后一个
////方法一
//typedef struct ST
//{
//	int num;
//	int arr[];
//}st;
//int main()
//{
//	int sz1 = sizeof(st);
//	st* s = (st*)malloc(sizeof(st) + sizeof(int) * 10);
//	//柔性数组，前面开辟的是结构体的空间，后面开辟的就是柔性数组的空间
//	s->num = 10;
//	for (int i = 0; i < 10; i++)
//		(s->arr[i]) = i;
//	for (int i = 0; i < 10; i++)
//		printf("%d ", s->arr[i]);
//	printf("%d\n", s->num);
//	free(s);
//	s = NULL;
//	return 0;
//
//}

//方法二
//typedef struct ST
//{
//	int n;
//	int* arr;
//}st;
//int main()
//{
//	st* s = (st*)malloc(sizeof(st));
//	//这里我们是对结构体里面的指针进行动态扩容
//	s->arr = (int*)malloc(sizeof(int) * 10);
//	//我们这里的最后进行动态内存的释放要进行两边
//	free(s->arr);
//	s->arr = NULL;
//	free(s);
//	s = NULL;
//	return 0;
//}

//关于atoi的复现
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <ctype.h>
//int My_atoi(const char *str)
//{
//	int sum = 0;
//	int count = 0;
//	for (count = 0; isdigit(*(str + count));)
//		count++;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			sum += (int)pow(10, count-1) * ((*str)-'0');
//			count--;
//		}
//		else
//			return sum;
//		str++;
//	}
//	return sum;
//}
//int main()
//{
//	char arr[100];
//	fgets(arr, 100, stdin);
//	int ret1 = My_atoi(arr);
//	int ret2 = atoi(arr);
//	printf("%d\n", ret1);
//	printf("%d\n", ret2);
//	return 0;
//}


//
//int main()
//{
//	int arr[2][2] = { 1,2,3,4 };
//	printf("%p\n", &arr[0][0]);
//	printf("%p\n", &arr[0][1]);
//	printf("%p\n", &arr[1][0]);
//	printf("%p\n", &arr[1][1]);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &(arr+1)[0]);
//	printf("%p\n", &arr[1][0]);
//	//printf("%p\n", &(arr+2)[0]);
//	printf("%d\n", arr[0][0]);
//
//	return 0;
//}


//#define Max 100  //注意：这里是define定义的标识符
////标识符和所替换的东西之间有间隔
//#define Square(x) ((x)*(x))  //这里是define定义宏
////这个Square(x) 之间是没有空格的；如果有空格，就变成了定义标识符
//int main()
//{
//	//int max = Max;
//	//printf("%d\n", max);
//	int r = Square(5); printf("%d\n", r);
//	
//	int r2 = Square(5 + 1);//这里的宏是有缺陷的，他传进去的必须是直接的数，不能计算式子
//	//这里会变成 Square(5+1) ; 5+1*5+1=11;
//	//我们可以对宏进行修改 改为#define Square(x) ((x)*(x))
//	//这里的大括号也有用处 例如：define Doubel(x) (x)+(x)
//	// 10*Double(x)=10*(x)+(x) 我们的计算顺序还是会变的 所以：应是 #define Double(x) ((x)+(x)) 
//	printf("%d\n", r2);
//	return 0;
//}
//
//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");//这里两个字符串可以合并为一个字符串
//	//在C语言里面支持这种写法
//}

//
//#define Print(N) printf("the value of "#N" is %d\n",N)
////这里#N可以把我们传进来的N，变成字符串，然后利用我们上面的多个字符串叠加输出的原理
////最后可以达到我们想要的效果
//int main()
//{
//	int a = 10; int b = 20;
//	printf("the value of a is %d\n", a);
//	printf("the value of b is %d\n", b);
//	//这种我们无法利用函数实现，这里我们使用#define实现
//	Print(a);
//	Print(b);
//	return 0;
//}
//



// 
////关于##的使用
//#define CAT(hu,bei) hu##bei
////##可以把位于它两边的符号合成一个符号
////它允许宏定义从分离的文本片段创建标识符
//int main()
//{
//	int hubei = 10;
//	printf("%d\n", CAT(hu,bei));
//	printf("%d\n", hubei);
//
//	return 0;
//}


//int main()
//{
//	float a = 1.2f, b = 1.5f;
//	float ret = a > b ? a : b;
//	printf("Max=%.3f", ret);
//	return 0;
//
//}

//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}
//
//
////待答
//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}

//union Un
//{
//	int i;
//	char c;
//};
//union Un un;
//// 下面输出的结果是一样的吗？
//int main()
//{
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	//下面输出的结果是什么？
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int i = 0;
//	printf("变种水仙花数：");
//	for (i = 0; i < 99999; i++)
//	{
//		//12345   
//		int a = (i / 10000) * (i % 10000);//1 * 2345
//
//		int b = (i / 1000) * (i % 1000); // 12 * 345
//
//		int c = (i / 100) * (i % 100); // 123 * 45
//
//		int d = (i / 10) * (i % 10); //1234 * 5 
//		int sum = a + b + c + d;
//		if (i == sum) //判断拆分后乘积之和是否等于自身
//		{
//			printf("%d ", i);
//
//		}
//	}
//	return 0;
//}


////变种水仙花数
//#include <stdio.h>
//#include<math.h>
//int main()
//{
//    for (int i = 10000; i < 100000; i++)
//    {
//        int sum = 0, count =1;
//        int temp = i;
//        while (count < 5)
//        {
//            sum += ((temp % (int)pow(10,count)) * (temp / (int)pow(10, count)));
//            count++;
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}

//
//int main()
//{
//	int input = 0, count = 1;;
//	scanf("%d", &input);
//	while (count<3)
//	{
//		printf("/%: %d ", input % (int)pow(10, count));
//		printf("/: %d\n", input / (int)pow(10, count));
//		count++;
//	}
//}
// 
// 
//int main()
//{
//    int temp;
//    int count = 1, sum = 0;
//    scanf("%d", &temp);
//    int a = pow(10, count);
//    int c = (int)pow(10, 3 - count);
//    int b = temp / a;
//    int d = temp % c;
//    while (count < 3)
//    {
//        sum += ((temp % (int)pow(10, 3 - count)) * (temp / (int)pow(10, count)));
//        count++;
//    }
//    if (sum == temp)
//        printf("%d ", temp);
//}
//


////删除指定的数
//#include <stdio.h>
//int main()
//{
//    int arr[50];
//    int input = 0;
//    scanf("%d", &input);
//    for (int i = 0; i < input; i++)
//        scanf("%d", &arr[i]);
//    int del = 0;
//    scanf("%d", &del);
//    int i = 0;
//    while (i < input)
//        if (arr[i] != del)
//        {
//            printf("%d ", arr[i]);
//            i++;
//        }
//    printf("\n");
//    return 0;
//}

//使用联合体的知识，判断机器的大小端

//int is_judge()
//{
//	union un
//	{
//		char a;
//		int b;
//	}u;
//	u.b = 1;
//	return u.a;
//}
//int main()
//{
//	int ret = is_judge();
//	int temp = 1;
//	if(1==ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}

//数组串联
//#include <stdio.h>
//#include <ctype.h>
//
//int main()
//{
//	char arr[100] = { 0 };
//	char ch = { 0 };
//	int count = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isdigit(ch))
//		{
//			arr[count] = ch;
//			count++;
//		}
//	}
//	char* p = NULL;
//	p = (char*)malloc(sizeof(char) * count);
//	putchar('[');
//	for (int i = 0; i < count; i++)
//		printf("%c,", arr[i]);
//	for (int i = 0; i < count - 1; i++)
//		printf("%c,", arr[i]);
//	printf("%c]", arr[count - 1]);
//	return 0;
//}

////malloc,calloc,realloc,free函数的使用
//#define print(x) for (int i = 0; i < 10; i++) printf("%d ", *(x + i));
//int main()
//{
//	int* p = (int*)malloc(sizeof(int) * 10);
//	assert(p);
//	for (int i = 0; i < 10; i++)
//		*(p + i) = 1;
//	int* p2 = (int*)calloc(10, sizeof(int));
//	assert(p2);
//	printf("malloc: "); print(p); printf("\n");
//	printf("calloc: "); print(p2); printf("\n");
//	int* p3 = (int*)realloc(p, sizeof(int) * 5);
//	assert(p3);
//	for (int i = 0; i < 5; i++)
//		*(p3 + i) = 2;
//	printf("realloc: "); 
//	for (int i = 0; i < 5; i++)
//		printf("%d ", *(p3 + i));
//	free(p2);
//	free(p3);
//	p = p3 = NULL;
//	return 0;
//}
//
//malloc生成二维数组，三种方法
//方法一：直接开辟空间，这里是模拟二维数组
// 这里我们只是模拟实现，本质上还是一个一维数组，只不过按照二维数组的形式进行访问
//int main()
//{
//  int row, col;
//  printf("请输入行数和列数（逗号隔开）：");
//  scanf("%d %d", &row, &col);
//	int* p = (int*)malloc(sizeof(int) * row * col);
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			p[i*row+j] = 2;
//		}
//	}
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", p[i*row+j]);
//		}
//		printf("\n");
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//使用二级指针开辟row个一维数组，然后对每个一位数组开辟col个空间
//int main()
//{
//	int row, col;
//	printf("请输入行数和列数（逗号隔开）：");
//	scanf("%d %d", &row, &col);
//	int** p = (int**)malloc(sizeof(int*) * row);
//	//这里是开辟row个一维数组，起始地址赋二级指针p
//	for (int i = 0; i < row; i++)
//		p[i] = (int*)malloc(sizeof(int) * col);
//	//对每个一维数组，开辟col列
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			p[i][j] = i + j;
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////使用数组指针表示二维数组，这里具象化为3行5列的二维数组
//int main()
//{
//	int(*p)[5] = (int(*)[5])malloc(sizeof(int) * 3 * 5);
//	//这句话的意思就是开辟一个6个int的内存空间，然后将其转化为数组指针型的地址
//	//int (*p)[5]表示的就是 ，一行有两个元素的一维数组，所以数组就是15/5=3,共3行的二维数组
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			p[i][j] = i + j;
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>  
//#include<stdlib.h>  
//
//
//int main()
//{
//    int** a;  //用二级指针动态申请二维数组  
//    int i, j;
//    int m, n;
//    printf("请输入行数\n");
//    scanf("%d", &m);
//    printf("请输入列数\n");
//    scanf("%d", &n);
//    a = (int**)malloc(sizeof(int*) * m);
//    for (i = 0; i < m; i++)
//        a[i] = (int*)malloc(sizeof(int) * n);
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%p\n", &a[i][j]);     //输出每个元素地址，每行的列与列之间的地址时连续的，行与行之间的地址不连续
//        }
//    }
//    for (i = 0; i < m; i++)
//        free(a[i]);
//
//    free(a);
//    return 0;
//}
//
//
////关于二维数组指针跳过的问题
//int main()
//{
//	int arr[3][3] = { 0,8,2,3,4,5,6,7,8 };
//	printf("%d\n", *(*(arr)+1));
//	int* p = &(*(arr+1));
//	int(*pf)[3] = &(*(arr + 1));
//	return 0;
//}

////创建两个文件，实现文件的复制
//int main()
//{
//	FILE* pf = fopen("D:\\桌面\\data.txt", "r");
//	assert(pf);
//	FILE* p = fopen("D:\\桌面\\data_copy.txt", "w");
//	assert(p);
//	char ch;
//	while ((ch=fgetc(pf)) != EOF)
//	{
//		fputc(ch,p);
//	}
//	fclose(p);
//	fclose(pf);
//  p=pf=NULL;
//	return 0;
//}

//
////关于const修饰指针变量
//int main()
//{
//	int num = 10;
//	int variable = 20;
//	const int* p = &num;
//	//这里可以理解为const int (*p),我们保证的是(*p)不可以被更改
//	//*p=20; err
//	//p=&variable; OK
//	printf("%d\n", *p);
//	p = &variable;
//	printf("%d\n", *p);
//
//	return 0;
//}
//
//int main()
//{
//	int num = 10;
//	int variable = 20;
//	int* const  p = &num;
//	//这里可以理解为int * const (p),我们保证的是(p)不可以被更改
//	//*p=20; OK
//	//p=&variable; err
//	printf("%d\n", *p);
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}


//关于调试
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}