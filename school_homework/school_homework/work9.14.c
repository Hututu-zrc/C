#define _CRT_SECURE_NO_WARNINGS
#include"Head.h"
////C语言第一次作业
//////A	输出下面的字符串-2
////int main()
////{
////	printf("I love \\t this \\bgame \\n !\\n");
////	return 0;
////}
//// 
//////B	输出一个小数的天花板和地板
////int main()
////{
////	double a = 0;
////	scanf("%f", &a);
////	printf("%d\n", (int)a + 1);
////	printf("%d\n", (int)a);
////	return 0;
////}
//
//////问题 C: 求a/b 不保留小数
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	printf("%d\n", a / b);
////}
//
//////问题 D: 读入一个大写字母，输出对应的小写字母
////int main()
////{
////	char a = { 0 };
////	scanf("%c", &a);
////	printf("%c\n", a + 32);
////	return 0;
////}
//// 
//////问题 E : 输入两个整数，求他们相除的余数
////int main()
////{
////	int a = 0;
////	int b = 0;
////	scanf("%d %d", &a, &b);
////	printf("%d\n", a % b);
////	return 0;
////}
//
//////问题 F: N月后是几月
//// 快速版
////int mian()
////{
////	int n = 0;
////	scanf("%d", &n);
////	print("%d\n", (n + 2) % 12 + 1);
////	return 0;
//// }
////int main()
////{
////	int N = 0;
////	int a = 0;
////	int i = 0;
////	scanf("%d", &N);
////	if (N < 10)
////	{
////		printf("%d\n", 3 + N);
////	}
////	else if (N >= 10)
////	{
////		a = N % 12;
////		if (a >= 10)
////		{
////			printf("%d\n", a - 9);
////		}
////		else
////		{
////			printf("%d\n", a + 3);
////		}
////	}
////	return 0;
////}
//
////C语言第二次作业
//
//////问题 A: 输入一个字符，判断是否阿拉伯数字
////int main()
////{
////	char ch = { 0 };
////	scanf("%c", &ch);
////	if (ch >= '0' && ch <= '9')
////	{
////		printf("YES\n");
////	}
////	else
////	{
////		printf("NO\n");
////	}
////}
////问题 B: 编写程序，输入x，输出y
////
////int main()
////{
////	int x = 0;
////	scanf("%d", &x);
////	if (x <= 5)
////	{
////		printf("%d\n", x * x + 3 * x - 4);
////	}
////	else
////	{
////		printf("%d\n", x * x - 5 * x + 7);
////	}
////	
////	return 0;
////}
//////问题 C: 输出最大的数。
////int main()
////{
////	int a, b, c;
////	scanf("%d %d %d", &a, &b, &c);
////	int ret = a > b ? a : b;
////	ret = ret > c ? ret : c;
////	printf("%d\n", ret);
////	return 0;
////}
////问题 D: 是否闰年.
////int main()
////{
////	int year;
////	scanf("%d", &year);
////	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
////	{
////		printf("L\n");
////	}
////	else
////	{
////		printf("N\n");
////	}
////	return 0;
////}
////问题 E: 人民币大写-1
////int main()
////{
////	int N = 0;
////	scanf("%d", &N);
////	char arr[10][5] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
////	char arr1[4][5] = {"拾","佰","整","元"};
////	if (N < 10 && N>=0)
////	{
////		printf("人民币：%s%s%s\n", arr[N],arr1[3],arr1[2]);
////	}
////	else if (N == 10)
////	{
////		printf("人民币：%s%s%s\n", arr1[0], arr1[3], arr1[2]);
////	}
////	else if (N % 10 == 0)
////	{
////		printf("人民币：%s%s%s%s\n", arr[N / 10], arr1[0], arr1[3], arr1[2]);
////	}
////	
////	else if (N < 100 && N > 10 && N%10!=0)
////	{
////		printf("人民币：%s%s%s%s%s\n",arr[N/10],arr1[0],arr[N%10],arr1[3],arr1[2]);
////	}
////	
////	return 0;
////}
//// 
//// ////问题F：日期的大小
////#include <stdio.h>
////int main()
////{
////    int year, month, day;
////    int year1, month1, day1;
////    scanf("%d-%d-%d", &year, &month, &day);
////    scanf("%d-%d-%d", &year1, &month1, &day1);
////    if (year1 > year)
////    {
////        printf("%d-%d-%d\n", year1, month1, day1);
////    }
////    else if (year == year1)
////    {
////        if (month1 > month)
////        {
////            printf("%d-%d-%d\n", year1, month1, day1);
////        }
////        else if (month1 == month)
////        {
////            if (day1 > day) 
////            {
////                printf("%d-%d-%d\n", year1, month1, day1);
////            }
////            else
////            {
////                printf("%d-%d-%d\n", year, month, day);
////            }
////        }
////        else
////        {
////            printf("%d-%d-%d\n", year, month, day);
////        }
////    }
////    else
////    {
////        printf("%d-%d-%d\n", year, month, day);
////    }
////    return 0;
////}
//// 问题 G: 人民币的大写
////int main()
////{
////	int num = 0;
////	char arr1[10][5] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
////	char arr2[5][5] = {"拾","佰","仟","整","元"};
////	while (scanf("%d", &num) != EOF)
////	{
////		if (num % 100 == 0)
////		{
////			printf("%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1],arr2[4], arr2[3]);
////		}
////		else if ((num /10) % 10 == 0)
////		{
////			printf("%s%s%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1], arr1[(num / 10) % 10], arr1[num%10], arr2[4], arr2[3]);
////		}
////		else if (num % 10 == 0)
////		{
////			printf("%s%s%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1], arr1[(num / 10) % 10], arr2[0], arr2[4], arr2[3]);
////		}
////		else
////		{
////			printf("%s%s%s%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1], arr1[(num / 10) % 10], arr2[0], arr1[num % 10], arr2[4], arr2[3]);
////		}
////	}
////	return 0;
////}
////
//////问题H：	2019年1月1日是星期二，2019年x月y日是星期几
////int main()
////{
////	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
////	int month, day,ret;
////	int sum = 0;
////	scanf("%d,%d", &month, &day);
////	for (int i = 1; i < month; i++)
////	{
////		sum += arr[i];
////	}
////	ret = (sum + day )%7;
////	switch (ret + 1)
////	{
////		case 0:
////			printf("Sunday");
////			break;
////		case 1:
////			printf("Monday");
////			break;
////		case 2:
////			printf("Tuesday");
////			break;
////		case 3:
////			printf("Wednesday");
////			break;
////		case 4:
////			printf("Thursday");
////			break;
////		case 5:
////			printf("Friday");
////			break;
////		case 6:
////			printf("Saturday");
////			break;
////
////
////	}
////
////	return 0;
////}
////#include <stdio.h>
////int main()
////{
////	int  ten, one;
////	int N = 0;
////	const char* D[] = { "","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
////	ten = N / 10;
////	one = N % 10;
////	scanf("%d", &N);
////	if (N % 10 == 0) {
////		printf("人民币：%s拾元整", D[ten]);
////	}
////	else {
////		printf("人民币：%s拾%s元整", D[ten], D[one]);
////	}
////
////}
////#include <stdio.h>
////
////int main() {
////    int N, ten, one;
////
////    // 数字大写表
////    const char* num[] = { "", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖" };
////    scanf("%d", &N);
////
////    ten = N / 10;  // 十位数字
////    one = N % 10;  // 个位数字
////
////    printf("人民币：");
////
////    if (ten > 0) {  // 十位数字不为0时
////        printf("%s拾", num[ten]);
////    }
////
////    if (one == 0) {  // 个位数字为0时
////        printf("元整");
////    }
////    else {
////        printf("%s元整", num[one]);
////    }
////
////    return 0;
////}
/////
////C语言第三次作业
////问题 A: 输出一个整数的逆数
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	while (n)
////	{
////		if (n % 10 != 0)
////		{
////			break;
////		}
////		else
////			n /= 10;
////		
////		
////	}
////	while (n)
////	{
////		printf("%d", n % 10); n /= 10;
////	}
////	
////	return 0;
////}
////问题 B: 1的个数
////int main()
////{
////	int n = 0;
////	while ((scanf("%d", &n)) != EOF)
////	{
////		int count = 0;
////		for (int m = 1; m <= n; m++)
////		{
////			int i = m;
////			while (i)
////			{
////				if (i % 10 == 1)
////				{
////					count++;
////				}
////				i /= 10;
////			}
////		}
////		printf("%d\n", count);
////	}
////	return 0;
////}
////问题 C: 1970年1月1日是星期四，x年y月z日是星期几
////#include <stdio.h>
////int main()
////{
////	int year, month, day;
////	scanf("%d-%d-%d", &year, &month, &day);
////	char ch[7][10] = { "Sunday", "Monday", "Tuesday",
////		"Wednesday","Thursday","Friday","Saturday" };
////	int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////	int sum = 0;
////	int daysum = 0;
////	int yearsum = 365;
////	for (int i = 1970; i < year; i++)
////	{
////		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
////		{
////			sum += yearsum + 1;
////		}
////		else
////		{
////			sum += yearsum;
////		}
////	}
////	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
////	{
////		arr[2] = 29;
////	}
////	for (int i = 0; i < month; i++)
////	{
////		daysum += arr[i];
////	}
////	int total = (daysum + sum + day + 2) % 7 + 1;
////
////	printf("%s\n", ch[total]);
////	//printf("%d", sum);
////	return 0;
////}
////问题 D: 计算整数个数
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	for (int z = 0; z < n; z++)
////	{
////		int m = 0;
////		int one = 0, five = 0, ten = 0;
////		scanf("%d", &m);
////		int arr[300] = { 0 };
////		for (int i = 0; i < m; i++)
////		{
////			scanf("%d", &arr[i]);
////		}
////		for (int i = 0; i < m; i++)
////		{
////			if (arr[i] == 1)
////			{
////				one++;
////			}
////			else if (arr[i] == 5)
////			{
////				five++;
////			}
////			else if (arr[i] == 10)
////			{
////				ten++;
////			}
////		}
////		printf("%d %d %d\n", one, five, ten);
////	}
////}
////
////问题 E: count characters
////int main()
////{
////	int n = 0;
////	while ((getchar()) != EOF)
////	{
////		n++;
////	}
////	printf("%d\n", n);
////	return 0;
////}
////问题 F: 最复杂的数
////#include <stdio.h>
////
////int main()
////{
////	int T = 0;
////	while ((scanf("%d", &T)) != EOF)
////	{
////		int arr[100];
////		int max, max_num;
////		for (int i = 0; i < T; i++)
////		{
////			scanf("%d", &arr[i]);//读取多个数
////			max = 0;//最大的约数
////			max_num = 0;//约数个数
////			for (int j = 1; j <= arr[i]; j++)//每个数，从1到arr[i]
////			{
////				int count = 0;
////				
////				//计算约数
////				for (int k = 1; k <= j; k++)
////				{
////					if (j % k == 0)
////					{
////						count++;
////					}
////				}
////				if (max_num < count)
////				{
////					max_num = count;
////					max = j;
////				}
////			}
////			printf("%d %d\n", max, max_num);
////		}
////		
////	}
////	return 0;
////}
//
////
////#include <stdio.h>
////int main()
////{
////	int year = 0;
////	while (scanf("%d", &year) != EOF)
////	{
////		int start_year = 1900;
////		int start_week = 1;
////		int count1 = 0;
////		int count2 = 0;
////		for (int i = 1900; i <= year - 1; i++)
////		{
////			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
////			{
////				count1++;
////			}
////		}
////		int new_week = (year - start_year + count1 + start_week - 1) % 7 + 1;
////		int s = 365;
////		int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
////		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
////		{
////			s = 366;
////			arr[1] = 29;
////		}
////		for (int i = 1; i <= s - 1; i++)
////		{
////			int sign1 = (new_week + i - 1) % 7 + 1;
////			int sign2;
////			int sum = 0;
////			int x = 0;
////			for (int j = 0; j < 12; j++)
////			{
////				if (j > 0)
////				{
////					x += arr[j - 1];
////				}
////				sum += arr[j];
////				if (1 + i <= sum)
////				{
////					break;
////				}
////			}
////			sign2 = (i + 1 - x);
////			if (sign1 == 5 && sign2 == 13)
////			{
////				count2++;
////			}
////		}
////		if (count2 > 0)
////		{
////			printf("%d\n", count2);
////		}
////		else
////		{
////			printf("NO\n");
////		}
////	}
////	return 0;
////}
//
//
////2022级C语言第四次作业
////问题 A: 字符出现的次数
////#include <stdio.h>
////int main()
////{
////	char arr[100];
////	while ((fgets(arr, 100, stdin)) != NULL)
////	{
////		char ch;
////		scanf("%c", &ch);
////		int i = 0;
////		int count = 0;
////		while (arr[i] != '\0')
////		{
////			if (arr[i] == ch)
////			{
////				count++;
////			}
////			i++;
////		}
////		printf("%d\n", count);
////		getchar();
////		getchar();
////	}
////	return 0;
////}
//// 
//////问题 B : 字符在字符串中出现的位置
////int main()
////{
////	char arr[101];
////	while ((fgets(arr,101,stdin)) != NULL)
////	{
////		char ch;
////		scanf("%c", &ch);
////		int i = 0,signal=0;
////		while (arr[i] != '\0')
////		{
////			if (ch == arr[i])
////			{
////				printf("%d ", i);
////				signal = 1;
////			}
////			i++;
////				
////		}
////		if (signal == 0)
////		{
////			printf("NULL");
////		}
////		printf("\n");
////		getchar();
////	}
////	return 0;
////}
////
////问题 C: 删除字符串末尾的0
////int main()
////{
////	char arr[100];
////	while ((gets(arr)) != NULL)
////	{
////		int sz = strlen(arr);
////		for (int i = sz - 1; i >= 0; i--)
////		{
////			if (arr[i] != '0')
////				break;
////			arr[i] = '\0';
////		}
////		puts(arr);
////	}
////	return 0;
////}
////
////问题 D: 删除字符串前面的0
////int main()
////{
////	char arr[100];
////	while ((gets(arr)) != NULL)
////	{
////		int sz = strlen(arr);
////		while (arr[0] == '0')
////		{
////			for (int j = 0; arr[j] != '\0'; j++)
////				arr[j] = arr[j + 1];
////		}
////		puts(arr);
////	}
////	return 0;
////}
////
////问题 E: 字符串的大小
////#include <stdio.h>
////int main()
////{
////	char arr[3][50];
////	while (scanf("%s", arr[0]) != EOF)
////	{
////		scanf("%s", arr[1]);
////		scanf("%s", arr[2]);
////		char* ps[3], * temp;
////		for (int i = 0; i < 3; i++)
////		{
////			ps[i] = arr[i];
////		}
////		for (int i = 0; i < 2; i++)
////		{
////			for (int j = 0; j < 2 - i; j++)
////			{
////				if (strcmp(ps[j], ps[j + 1]) < 0)
////				{
////					temp = ps[j];
////					ps[j] = ps[j + 1];
////					ps[j + 1] = temp;
////				}
////			}
////		}
////		printf("%s>%s>%s\n", ps[0], ps[1], ps[2]);
////	}
////	return 0;
////}
////
////问题 F : 数字字符串
////#include<string.h>
////#include <stdio.h>
////int main()
////{
////	char arr[101];
////	while ((gets(arr)) != NULL)
////	{
////		int singal = 0;
////		for (int i = 0; arr[i] != '\0'; i++)
////		{
////			if (!(isdigit(arr[i])))
////			{
////				puts("NO");
////				singal = 1;
////				break;
////			}
////		}
////		if(singal==0)
////			puts("YES");
////	}
////	return 0;
////}
////
////问题 G: 是否可能是身份证号码
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char arr[50];
////	while((gets(arr)) != NULL)
////	{
////		int signal = 0;
////		int sz = strlen(arr);
////		if (sz != 18)
////		{
////			puts("NO");	signal = 1;
////			goto again;
////		}
////		for (int i = 0;i<sz-2; i++)
////		{
////			if (!(isdigit(arr[i])))
////			{
////				
////				puts("NO"); signal = 1;
////				break;
////			}	
////		}
////		if (!((isdigit(arr[17])) || arr[17] == 'X' || arr[17] == 'x'))
////		{
////			puts("NO"); signal = 1;
////		}
////		again:
////		if (signal == 0)
////			puts("YES");
////	}
////	return 0;
////}
//
////魔方阵问题  跑不出来
//// 
////int main()
////{
////	int arr[3][3];
////	for (int i = 123456789; i <= 987654321; i++)
////	{
////		arr[2][2] = i % 10; arr[2][1] = i % 100; arr[2][0] = i % 1000;
////		arr[1][2] = i % pow(10, 4);arr[1][1] = i % pow(10, 5);arr[1][0] = i % pow(10, 6);
////		arr[0][2] = i % pow(10, 7);arr[0][1] = i % pow(10, 8);arr[0][0] = i % pow(10, 9);
////		if(arr[0][0]+arr[0][1]+arr[0][2]== arr[1][0]+ arr[1][1]+ arr[1][2] &&
////			arr[2][0] + arr[2][1] + arr[2][2] == arr[1][0] + arr[1][1] + arr[1][2] &&
////			arr[0][0] + arr[0][1] + arr[0][2] == arr[2][0] + arr[2][1] + arr[2][2] &&
////			arr[0][0]+arr[1][0]+arr[2][0]== arr[0][1] + arr[1][1] + arr[2][1] &&
////			arr[0][2]+arr[1][2]+arr[2][2]== arr[0][1] + arr[1][1] + arr[2][1] &&
////			arr[0][2]+arr[1][2]+arr[2][2]== arr[0][0] + arr[1][0] + arr[2][0] &&
////			arr[0][0]+arr[1][1]+arr[2][2]==arr[0][2]+arr[2][2]+arr[0][1] &&
////			arr[0][0] + arr[1][1] + arr[2][2]== arr[0][0] + arr[0][1] + arr[0][2]
////			)
////			for (int j = 0; j < 3; j++)
////			{
////				for (int k = 0; k < 3; k++)
////				{
////					printf("%d", arr[j][k]);
////				}
////				printf("\n");
////			}
////
////	}
////	return 0;
////}
//
////问题 A: 奇数还是偶数
////int Judge(int n)
////{
////	if (n % 2 == 0)
////		return n % 2;
////	else
////		return n % 2;
////}
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	int ret = Judge(n);
////	if (ret == 0)
////		printf("EVEN\n");
////	else
////		printf("ODD\n");
////	return 0;
////}
//
////问题 B: 读入两个正整数m和n，计算m和n的最大公约数
////int Max(int n, int m)
////{
////	int temp;
////	do
////	{
////		temp = n % m;
////		n = m;
////		m = temp;
////	} while (temp);
////	return n;
////}
////int main()
////{
////	int n, m;
////	scanf("%d %d", &n, &m);
////	int ret = Max(n, m);
////	printf("%d\n", ret);
////}
//
//
////问题 C: 是否素数。(15分)4
////#include <stdio.h>
////#include <math.h>
////void Prime(int n)
////{
////	int signal = 0;
////	for (int i = 2; i <n; i++)
////	{
////		if (n % i == 0)
////		{
////			puts("not prime");
////			signal = 1;
////			break;
////		}
////	}
////	if (signal == 0)
////		puts("prime");
////}
////int main()
////{
////	int n;
////	scanf("%d", &n);
////	Prime(n);
////	return 0;
////}
//
////问题 D: 完数
////void Sum(int n)
////{
////	int sum = 0;
////	for (int i = 1; i < n; i++)
////	{
////		if (n % i == 0)
////			sum += i;
////	}
////	if (sum == n)
////		puts("YES");
////	else
////		puts("NO");
////}
////int main()
////{
////	int n;
////	while (scanf("%d", &n) != EOF)
////	{
////		Sum(n);
////	}
////	return;
////}
//
////问题 E : 相邻的素数
////int Prime(int n)
////{
////	int signal = 0;
////	for (int i = 2; i < n; i++)
////	{
////		if (n % i == 0)
////		{
////			signal = 1;
////			return 0;
////			break;
////		}
////	}
////	if (signal == 0)
////		return n;
////}
////int main()
////{
////	int n;
////	while (scanf("%d", &n) != EOF)
////	{
////		for (int i = n - 1; i >= 2; i--)
////		{
////			if (Prime(i) != 0)
////			{
////				printf("%d<", i);
////				break;
////			}
////		}
////		for (int j = n + 1; j; j++)
////		{
////			if (Prime(j) != 0)
////			{
////				printf("%d<%d\n", n, j);
////				break;
////			}
////		}
////	}
////	return 0;
////}
//
//
////计科 099 檀江浩
////#include<stdio.h>
////int A(int x)
////{
////	int i, j;
////	int count = 0;
////	int low = 0;
////	int t;
////	for (i = x - 1; i > 1; i--)
////	{
////		for (j = 2; j < i; j++)
////		{
////			if (i % j == 0)
////			{
////				count++;
////			}
////		}
////		t = i;
////		if (count == 0)
////		{
////			low = t;
////			break;
////		}
////	}
////	return(low);
////}
////
////int B(int x)
////{
////	int i, j;
////	int count = 0;
////	int high = 0;
////	int t;
////	for (i = x + 1; i <= 2 * x; i++)
////	{
////		for (j = 2; j < i; j++)
////		{
////			if (i % j == 0)
////			{
////				count++;
////			}
////		}
////		t = i;
////		if (count == 0)
////		{
////			high = t;
////			break;
////		}
////	}
////	return(high);
////}
////main()
////{
////	int n;
////	int p, q;
////	while (scanf("%d", &n) != EOF)
////	{
////		p = A(n);
////		q = B(n);
////		printf("%d<%d<%d\n", p, n, q);
////	}
////}
//
////问题 A: 输出一个整数的逆数
////void Inverse(int input)
////{
////	while (input % 10 == 0)
////		input /= 10;
////	while (input)
////	{
////		printf("%d", input % 10);
////		input /= 10;
////	}
////}
////int main()
////{
////	int input;
////	scanf("%d", &input);
////	Inverse(input);
////	return 0;
////}
//
////问题 B: Prime Number
////int Prime(int n)
////{
////	int signal = 1;
////	for (int i = 2; i < n; i++)
////	{
////		if (n % i == 0)
////		{
////			signal = 0;
////			break;
////		}	
////	}
////	return signal;
////}
////int main()
////{
////	int input;
////	
////	while (scanf("%d", &input) != EOF)
////	{
////		int i = 3;
////		if (input == 1)
////			puts("2");
////		else
////		{
////			int count = 1;
////			while (i &&count<input)
////			{
////				if (Prime(i) == 1)
////					count++;
////				i++;
////			}
////		}
////		printf("%d\n", i - 1);
////	}
////	return 0;
////}
//
////问题 C: 1的个数
////int Count(int n)
////{
////	int count = 0;
////	for (int i = 1; i <= n; i++)
////	{
////		int temp = i;
////		while (temp)
////		{
////			if (temp % 10 == 1)
////				count++;
////			temp /= 10;
////		}
////	}
////	return count;
////}
////int main()
////{
////	int input;
////	while (scanf("%d", &input) != EOF)
////	{
////		int ret = Count(input);
////		printf("%d\n", ret);
////	}
////	return 0;
////}
//
////问题 D: 求和-n
////int Sum(int n)
////{
////	int sum = 0;
////	if (n == 1)
////		return 1;
////	else
////	{
////		for (int i = 2; i <= n; i++)
////		{
////			for (int j = 1; j <= i; j++)
////			{
////				sum += i * 10 + j;
////			}
////		}
////		return sum+1;
////	}
////}
////int main()
////{
////	int input;
////	while (scanf("%d", &input)!= EOF)
////	{
////		int ret = Sum(input);
////		printf("%d\n", ret);
////	}
////	return 0;
////}
//
////问题 E: 10进制转3进制
////void Scale(int n)
////{
////	if (n < 3)
////		printf("%d",n);
////	else
////	{
////		Scale(n /3);
////		printf("%d", n % 3);
////	}
////}
////int main()
////{
////	int input;
////	while (scanf("%d", &input) != EOF)
////	{
////		Scale(input);
////		printf("\n");
////	}
////	return 0;
////}
//
//
////问题 A: 输出中间的一个数
////#include <stdio.h>
////#include<string.h>
////int main()
////{
////	char arr[100] = { 0 };
////	gets(arr);
////	char temp[2] =" ";
////	int arr1[100] = { 0 };
////	int count = 0;
////	char* token = strtok(arr,temp);
////	while (token != NULL)
////	{
////		arr1[count] = atoi(token);
////		count++;
////		token = strtok(NULL, temp);
////	}
////	printf("%d\n", arr1[count / 2]);
////	return 0;
////}
////
//
////int main()
////{
////	char arr[100] = { 0 };
////	gets(arr);
////	int i = 0, count = 0;
////	while (arr[i] != '\0')
////	{
////		if (isdigit(arr[i]))
////			count++;
////		i++;
////	}
////	printf("%c\n", arr[(count/2)*2]);
////	return 0;
////}
//
//
//
//////问题 B: 数组的循环移动
////#include <stdio.h>
////int main()
////{
////	int n, m; int arr[100];
////	scanf("%d", &n);
////	for (int i = 0; i < n; i++)
////		scanf("%d", &arr[i]);
////	scanf("%d", &m);
////	for (int i = n - m; i < n; i++)
////		printf("%d ", arr[i]);
////	for (int i = 0; i < n - m; i++)
////		printf("%d ", arr[i]);
////	return 0;
////}
////
//////问题 C: 哥德巴赫猜想
////int prime(int n)
////{
////	int signal = 0;
////	for (int i = 2; i < n; i++)
////	{
////		if (n % i == 0)
////		{
////			signal = 1;
////			break;
////		}
////	}
////	if (signal == 0)
////	{
////		return 1;
////	}
////	return 0;
////}
////int main()
////{
////	int input;
////	
////	while (scanf("%d", &input) !=EOF)
////	{
////		int count = 0;
////		int arrcount = 0;
////		int arr[100];
////		for (int i = 2; i < input; i++)
////		{
////			if (prime(i))
////			{
////				arr[arrcount] = i;
////				arrcount++;
////			}
////		}
////		int mid = input / 2;
////		int numsignal = 0;
////		int tmp1 = 2, tmp2 = input - 1;
////		for (int i = 0; i <= arrcount-1; i++)
////		{
////			if (mid < arr[i])
////			{
////				numsignal = i-1;
////				break;
////			}
////		}
////		for (int i = 0; i <= numsignal; i++)
////		{
////			for (int j = arrcount-1; j >= numsignal; j--)
////			{
////				if (arr[i] + arr[j] == input)
////					count++;
////			}
////		}
////		printf("%d\n", count);
////	}
////	return 0;
////}
////
//////问题 D : 出现的次数
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	while (scanf("%d", &n) != EOF)//循环
////	{
////		int arr[1000] = { 0 };
////		for (int x = 0; x < n; x++)
////		{
////			scanf("%d", &arr[x]);//读入
////		}
////		//排序
////		for (int i = 0; i < n - 1; i++)
////		{
////			for (int j = 0; j < n - 1 - i; j++)
////			{
////				if (arr[j] > arr[j + 1])
////				{
////					int temp = arr[j];
////					arr[j] = arr[j + 1];
////					arr[j + 1] = temp;
////				}
////			}
////		}
////		int array1[1000][3] = { 0 };
////		int count = 0;
////		array1[count][1] = 0;
////		array1[count][0] = arr[0];
////		for (int i = 0; i < n; i++)
////		{
////
////			if (arr[i] == array1[count][0])
////			{
////				array1[count][1]++;
////			}
////			else
////			{
////				count++;
////				array1[count][0] = arr[i];
////				array1[count][1] = 1;
////			}
////		}
////		for (int i = 0; i >= 0; i++)
////		{
////			if (array1[i][0] == 0)
////			{
////				break;
////			}
////			else
////			{
////				printf("%d %d\n", array1[i][0], array1[i][1]);
////			}
////		}
////
////	}
////	return 0;
////}
////
//////问题 E: 最长子序列
////#include <stdio.h>
////int main()
////{
////	int n;
////	while ((scanf("%d", &n)) != EOF)
////	{
////		int arr[100] = { 0 };
////		for (int i = 0; i < n; i++)
////			scanf("%d", &arr[i]);
////		int count = 1, maxlen = 0;
////		for (int i = 0; i < n; i++)
////		{
////			if (arr[i] < arr[i + 1])
////				count++;
////			else
////				count = 1;
////			maxlen = maxlen > count ? maxlen : count;
////		}
////		printf("%d\n", maxlen);
////	}
////}
//
//
////C_language_work_8
////问题 A: 是否标识符
////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////#include <ctype.h>
////int main()
////{
////	char arr[100];
////	again:
////	while (gets(arr) != NULL)
////	{
////		if (!isalpha(arr[0])&&arr[0]!='_')
////		{
////			puts("NO");
////			goto again;
////		}
////		for (int i = 1; arr[i] != '\0'; i++)
////		{
////			if (!isdigit(arr[i]) && !isalpha(arr[i]) && arr[i]!= '_')
////			{
////				puts("NO");
////				goto again;
////			}
////		}
////		puts("YES");
////	}
////	return 0;
////}
////#include <stdio.h>
////#include <string.h>        
////int main()
////{
////	char s[1000];
////	while (scanf("%s", s) != EOF)
////	{
////		int flag = 0;
////		if ((s[0] >= 'a' && s[0] <= 'z') || (s[0] >= 'A' && s[0] <= 'Z') || s[0] == '_')
////		{
////			flag = 2;
////			for (int i = 1; i < strlen(s); i++)
////			{
////				if (s[i] != '_' && ((s[i] > 'z' || s[i] < 'a') && (s[0] < 'A' || s[0] > 'Z') &&
////					(s[i] < '0' || s[i] > '9')))
////				{
////					flag = 1;
////					break;
////				}
////			}
////		}
////		if (flag == 0 || flag == 1)
////		{
////			printf("NO\n");
////		}
////		else if (flag == 2)
////		{
////			printf("YES\n");
////		}
////	}
////	return 0;
////}
//
//
////问题 B : Reverse your input string
////#include <stdio.h>
////int main()
////{
////	char ch[1000] = { 0 };
////	while (scanf("%s", ch) != EOF)
////	{
////		int sz = strlen(ch);
////		for (int i = 0; i < sz - 1; i++)
////		{
////			for (int j = 0; j < sz - 1 - i; j++)
////			{
////				char tmp = ch[j];
////				ch[j] = ch[j + 1];
////				ch[j + 1] = tmp;
////			}
////		}
////		printf("%s\n", ch);
////		for (int i = 0; i < sz; i++)
////		{
////			ch[i] = '\0';
////		}
////	}
////
////	return 0;
////}
//
//
////问题 C: 安全的密码
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	int arr[4] = { 0 };
////	for (int i = 0; i < n; i++)
////	{
////		char ch[100] = { 0 };
////		scanf("%s", ch);
////		char sh[] = { '!','~','@','#','$','%','^' };
////		int sz = strlen(ch);
////		for (int j = 0; j < sz; j++)
////		{
////			if (ch[j] > 'A' && ch[j] < 'Z')
////			{
////				arr[0] = 1;
////			}
////			else if (ch[j] > 'a' && ch[j] < 'z')
////			{
////				arr[1] = 1;
////			}
////			else if (ch[j] > '0' && ch[j] < '9')
////			{
////				arr[2] = 1;
////			}
////			else
////			{
////				for (int x = 0; x < 7; x++)
////				{
////					if (ch[j] == sh[x])
////					{
////						arr[3] = 1;
////					}
////				}
////			}
////		}
////		int sum = 0;
////		for (int i = 0; i < 4; i++)
////		{
////			sum += arr[i];
////			arr[i] = 0;
////		}
////		if (sum < 3 || sz >= 16 || sz < 8)
////		{
////
////			printf("NO\n");
////		}
////		else if (sum >= 3 && sz < 16 && sz >= 8)
////		{
////			printf("YES\n");
////		}
////
////	}
////}
//
////问题 D: IP地址的合法性检查。
////#include <stdio.h>
////int main()
////{
////	int n = 0;
////	scanf("%d", &n);
////	for (int i = 0; i < n; i++)
////	{
////		int a, b, c, d;
////		char ch[10] = { 0 };
////		if ((scanf("%d.%d.%d.%d", &a, &b, &c, &d)) != 4)
////		{
////			printf("NO\n");
////		}
////
////		else
////		{
////			gets(ch);
////			if ((a >= 0 && a <= 255) && (b >= 0 && b <= 255)
////				&& (c >= 0 && c <= 255) && (d >= 0 && d <= 255))
////			{
////				int signal = 0;
////				for (int j = 0; j < 10; j++)
////				{
////					if (ch[j] != '\0')
////					{
////						signal = 1;
////					}
////				}
////				if (signal == 0)
////				{
////					printf("YES\n");
////				}
////				else
////				{
////					printf("NO\n");
////				}
////			}
////			else
////			{
////				printf("NO\n");
////			}
////		}
////	}
////	return 0;
////}
////
////
//
////问题 E: 最长子字符串
////#include <string.h>
////#include <stdio.h>
////int main()
////{
////	char arr1[100];
////	char arr2[100];
////	while (gets(arr1) != NULL && gets(arr2) != NULL)
////	{
////		int i=0, j=0,count=0,maxlen=0,signal=0;
////		while (arr2[j] != '\0')
////		{
////			if (arr1[i] == '\0')
////			{
////				i = 0;
////				j++;
////			}
////			if (arr1[i] != arr2[j])
////			{
////				
////				if (maxlen < count)
////				{
////					maxlen = count;
////					count = 0;
////					signal = i-maxlen;
////				}
////				i++;
////			}
////			else
////			{
////				count++; i++; j++;
////			}
////		}
////		if (maxlen < count)
////		{
////			maxlen = count;
////			signal = i - maxlen;
////		}
////		for (int k = 0; k < maxlen; k++)
////			printf("%c", arr1[signal + k]);
////		printf("\n");
////	}
////
////	return 0;
////}
//
//
////问题 F: 通配符
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char arr1[100];
////	char arr2[100];
////	char temp[100] = { 0 };
////	gets(arr1);
////	int counts = 0, countn = 0;
////	for (int i = 0; arr1[i] != '\0'; i++)
////	{
////		if (arr1[i] == '?')
////			counts++;
////		else if (arr1[i] != '*')
////			countn++;
////	}
////	while (gets(arr2) != NULL)
////	{
////		int sz2 = strlen(arr2);
////		int i = 0, j = 0;
////		while (arr2[j] != '\0')
////		{
////			if (arr1[i] != arr2[j] || arr1[i]=='*')
////			{
////				if (arr1[i] == '?')
////				{
////					temp[j] = arr2[j];
////					i++; j++;
////				}
////				else if (arr1[i] == '*')
////				{
////					i++;
////					if (sz2 - countn - counts >= 0)
////					{
////						strncpy(temp + j, arr2 + j, (sz2 - countn - counts));
////						j += sz2 - countn - counts;
////					}
////					else
////						goto loop;
////					
////				}
////			}
////			else 
////			{
////				temp[j] = arr2[j];
////				i++; j++;
////			}
////		}
////		if (!strcmp(temp, arr2))
////			puts("YES");
////		else
////		{
////			loop:
////			puts("NO");
////		}
////			
////	}
////	return 0;
////}
////
//
////#include <stdio.h>
////#include <string.h>
////int main()
////{
////	char arr1[100];
////	gets(arr1);
////	int count1 = 0;//other
////	for (int i = 0; arr1[i] != '\0'; i++)
////	{
////		if (arr1[i] != '*')
////			count1++;
////	}
////	char arr2[100];
////	while (scanf("%s", arr2) != EOF)
////	{
////		int i = 0, j = 0;
////		int sz = strlen(arr2);
////		int signal = 0;
////		int other = sz - count1;
////		if (other < 0)
////			signal = 1;
////		while (arr2[j] != '\0')
////		{
////			if (arr1[i] != arr2[j] || arr1[i]=='*')
////			{
////				if (arr1[i] == '?')
////				{
////					i++; j++;
////				}
////				else if (arr1[i] == '*')
////				{
////					i++;
////					j += other;
////				}
////				else
////				{
////					signal = 1;
////					i++; j++;
////				}
////			}
////			else 
////			{
////				i++; j++;
////			}
////		}
////		if (signal == 1)
////			puts("NO");
////		else
////			puts("YES");
////	}
////}
//
//
////#include <stdio.h>
////#include <string.h>
////
////int isMatch(char* pattern, char* str) {
////    if (*pattern == '\0' && *str == '\0') {
////        return 1;
////    }
////
////    if (*pattern == '*') {
////        int i;
////        for (i = 0; i <= strlen(str); i++) {
////            if (isMatch(pattern + 1, str + i)) {
////                return 1;
////            }
////        }
////    }
////
////    if (*pattern == '?' || *pattern == *str) {
////        return isMatch(pattern + 1, str + 1);
////    }
////
////    return 0;
////}
////
////int main() {
////    char pattern[100];
////    scanf("%s", pattern);
////
////    char str[100];
////    while (scanf("%s", str) != EOF) {
////        if (isMatch(pattern, str)) {
////            printf("YES\n");
////        }
////        else {
////            printf("NO\n");
////        }
////    }
////
////    return 0;
////}
//
////int main()
////{
////	printf("NO");
////	return 0;
////}
//
//////C语言上级作业第九次
////问题 A: Write a program that prints its input one word per line.
////#include <stdio.h>
////int main()
////{
////	char ch;
////	char prechar;
////	while ((ch = getchar()) != EOF)
////	{
////		if (ch != ' ' && ch != '\t' && ch != '\n')
////		{
////			putchar(ch);
////		}
////		else if (prechar != '\t' && prechar != '\n' && prechar != ' ')
////		{
////			putchar('\n');
////		}
////		prechar = ch;
////	}
////	return 0;
////}
//
//
////问题 B: 合法的日期
////#include <stdio.h>
////#include <string.h>
////#include <stdlib.h>
////int main()
////{
////	char arr[20];
////	{
////	again:
////		while ((gets(arr)) != NULL)
////		{
////			int ch[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////			if (arr[4] != '-' || arr[7] != '-')
////			{
////				puts("NO"); goto again;
////			}
////			char* token = strtok(arr, "-"); char* temp;
////			if (strspn(token, "0123456789") != 4 || atoi(token) < 0 || atoi(token) > 9999)
////			{
////				puts("NO"); goto again;
////			}
////			ch[2] = 28 + (atoi(token) % 4 == 0 && atoi(token) % 100 != 0 || atoi(token) % 400 == 0);
////			token = temp = strtok(NULL, "-");
////			if (strspn(token, "0123456789") != 2 || atoi(token) < 0 || atoi(token) > 12)
////			{
////				puts("NO"); goto again;
////			}
////			token = strtok(NULL, "-");
////			if (strspn(token, "0123456789") != 2 || atoi(token) > ch[atoi(temp)] || atoi(token) < 0)
////			{
////				puts("NO"); goto again;
////			}
////			puts("YES");
////		}
////	}
////	return 0;
////}
//
////
////#include <stdio.h>
////#include <string.h>
////#include <ctype.h>
////int main()
////{
////	char arr[20];
////	again:
////	while (gets(arr) != NULL)
////	{
////		int ch[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
////		if (arr[4] != '-' || arr[7] != '-')
////		{
////			puts("NO");
////			goto again;
////		}
////		for (int i = 0; arr[i] != '\0'; i++)
////		{
////			if (i != 4 && i != 7)
////			{
////				if (isdigit(arr[i]) == 0)
////				{
////					puts("NO");
////					goto again;
////				}
////			}
////		}
////		char* temp = strtok(arr, "-");
////		int year = atoi(temp);
////		temp = strtok(NULL, "-");
////		int month = atoi(temp);
////		int day = (arr[8]-'0') * 10 + (arr[9]-'0');
////		temp = NULL;
////		if (!(year >= 0 &&  year <= 9999))
////		{
////			puts("NO");
////			goto again;
////		}
////		else if (!(month >= 1 && month <= 12))
////		{
////			puts("NO");
////			goto again;
////		}
////		else
////		{
////			ch[2] += (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
////			if (!(day >= 1 && day <= ch[month]))
////			{
////				puts("NO");
////				goto again;
////			}
////		}
////		puts("YES");
////	}
////	return 0;
////}
//
//
////问题 C: 单词的缩写
////#include <stdio.h>
////int main()
////{
////	char arr[100];
////	while ((gets(arr)) != NULL)
////	{
////		char ch[7] = { 'a','e','i','o','u','y' };
////		putchar(arr[0]);
////		for (int i = 1; arr[i] != '\0'; i++)
////		{
////			int signal = 0;
////			for (int j = 0; j < 6; j++)
////			{
////				if (arr[i] == ch[j])
////				{
////					signal = 1;
////					break;
////				}
////			}
////			if (signal != 1)
////			{
////				putchar(arr[i]);
////			}
////		}
////		putchar('\n');
////	}
////	return 0;
////}
//
//
////问题 D: 输出< >间的信息
////#include <stdio.h>
////int main()
////{
////	char arr[150];
////	while ((gets(arr)) != NULL)
////	{
////		int ch[50][2];
////		int sz = strlen(arr);
////		int k = 0;
////		int signal = 0;
////		for (int i = 0; i < sz; i++)
////		{
////			if (arr[i] == '<')
////			{
////				ch[k][0] = i;
////				for (int j = i; j < sz; j++)
////				{
////					if (arr[j] == '>')
////					{
////
////						ch[k][1] = j;
////
////						for (int x = ch[k][0]; x <= ch[k][1]; x++)
////						{
////							printf("%c", arr[x]);
////							signal = 1;
////						}
////						i = ch[k][1];
////						k++;
////						printf("\n");
////						break;
////					}
////				}
////			}
////		}
////		if (signal == 0)
////		{
////			printf("NO\n");
////		}
////	}
////	return 0;
////}
////
//
//////问题 E: 压缩字符串
////#include <stdio.h>
////#include <string.h>
////int compact(char* string)
////{
////	int count = 0;
////	while (*string == *(string + 1))
////	{
////		count++;
////		string++;
////	}
////	return count+1;
////}
////int main()
////{
////	char arr[1000];
////	while (gets(arr) != NULL)
////	{
////		int sz1 = strlen(arr);
////		char arra[200] = { 0 };
////		char* p = arr;
////		int count = 0;
////		while (*p != '\0')
////		{
////			arra[count]= *p;
////			count++;
////			int ret = compact(p);
////			arra[count] = ret + '0';
////			count++;
////			p += ret;
////		}
////		int sz2 = strlen(arra);
////		if (sz1<=sz2)
////			printf("%s\n",arr);
////		else
////			printf("%s\n",arra);
////	}
////	return 0;
////}
//
//
//
//////问题 F: 字符串没有重复的字符
////首个和所有的比较
////遇到相同就先前覆盖，代码简单，但是时间复杂度高
////#include <stdio.h>
////int main()
////{
////	char arr[1000];
////	while ((gets(arr)) != NULL)
////	{
////		int k;
////		for (int i = 0; arr[i]; i++)
////		{
////			for (int j = i + 1; arr[j];)
////			{
////				if (arr[i] == arr[j])
////				{
////					for (k = j; arr[k]; k++)
////					{
////						arr[k] = arr[k + 1];
////					}
////				}
////				else
////				{
////					j++;
////				}
////			}
////		}
////		puts(arr);
////	}
////	return 0;
////}
//
//
//////问题 G: 身份证号码的条数(去重)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20] = { 0 };
//	char twoarr[1000][20] = { 0 };
//	int count = 0;
//	while (scanf("%s",arr) !=EOF && arr[0] != '0')
//	{
//		int signal = 0;
//		for (int i = 0; i < count; i++)
//		{
//			if (strcmp(twoarr[i], arr) == 0)
//			{
//				signal = 1;
//				break;
//			}
//		}
//		if (signal == 0)
//		{
//			strcpy(twoarr[count], arr);
//			count++;
//		}	
//		
//	}
//	//for (int i = 0; i < count-1; i++)
//	//{
//	//	for (int j = 0; j < count - 1-i; j++)
//	//	{
//	//		if (twoarr[j][0] < twoarr[j + 1][0])
//	//		{
//	//			char temp[20];
//	//			strcpy(temp, twoarr[j]);
//	//			strcpy(twoarr[j], twoarr[j+1]);
//	//			strcpy(twoarr[j + 1], temp);
//	//		}
//	//	}
//	//}
//	/*int ret = count;
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = i+1; j < count; j++)
//		{
//			if (strcmp(twoarr[j], twoarr[i]) == 0)
//				ret--;
//		}
//	}*/
//	printf("%d\n", count);
//	return 0;
//}
//
//
////作业比赛编号: 1055 - 2022级C语言第十次作业
////问题 A: count characters
////#include <stdio.h>
////int main()
////{
////	char arr[100] = { 0 };
////	int i = 0;
////	int count = 0;
////	while (scanf("%c", &arr[i]) != EOF)
////	{
////		count++;
////		i++;
////	}
////	printf("%d", count);
////	return 0;
////}
//
////#include <stdio.h>
////int main()
////{
////	char ch;
////	int count=0;
////	while ((ch = getchar()) != EOF)
////		count++;
////	printf("%d\n", count);
////}

//问题 B: Count white spaces!
//#include <stdio.h>
//int main()
//{
//	char ch;
//	int count = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch == ' ' || ch == '\n' || ch == '\t')
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//问题 C : Replace to single blank
//#include <stdio.h>
//int main()
//{
//	char input[1000] = { 0 };
//	char prechar='\0', ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (prechar == ' ' && ch != ' ')
//			printf("%c%c", prechar,ch);
//		else if (ch != ' ')
//			printf("%c", ch);
//		prechar = ch;
//	}      
//	return 0;
//}

//问题 D: Replace backslach and newline character
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char input[1000] = { 0 };
//	char temp[100] = { 0 };
//	while (fgets(temp, sizeof(temp),stdin) != NULL)
//		strcat(input, temp);
//	
//	for (int i = 0; input[i] != '\0'; i++)
//	{
//		if (input[i] == '\\')
//			printf("\\\\");
//		else if (input[i] == '\n')
//			printf("\\n");
//		else
//			printf("%c", input[i]);
//	}
//
//	return 0;
//}

//问题 E: Write a program that prints its input one word per line.

//int main()
//{
//	char input[1000] = { 0 };
//	char temp[100] = { 0 };
//	while (fgets(temp, sizeof(temp), stdin) != NULL)
//		strcat(input, temp);
//	input[strlen(input)-1]='\0';
//	for (int i = 0; input[i] != '\0'; i++)
//	{
//		if (input[i] == ' ' && input[i + 1] != ' ')
//			printf("\n");
//		else if(input[i]!=' ')
//			printf("%c", input[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char input[1000] = { 0 };
//	char temp[100] = { 0 };
//	while (fgets(temp, sizeof(temp), stdin) != NULL)
//		strcat(input, temp);
//	char* tmp = strtok(input, " ");
//	while (tmp)
//	{
//		printf("%s\n", tmp);
//		tmp = strtok(NULL," ");
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char s[100] = { 0 };
//    char input[100] = { 0 };
//    while (gets(s))
//    {
//        strcat(input, s);
//    }
//    char* mark = strtok(input, " ");
//    while (mark)
//    {
//        printf("%s\n", mark);
//        mark = strtok(NULL, " ");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char s[100] = { 0 };
//    char input[100] = { 0 };
//    while (fgets(s,sizeof(s),stdin))
//    {
//        strcat(input, s);
//    }
//    input[strlen(input)-1] = '\0';
//    char* mark = strtok(input, " ");
//    while (mark)
//    {
//        if (*mark == '\n')
//            mark++;
//        printf("%s\n", mark);
//        mark = strtok(NULL, " ");
//    }
//    return 0;
//}

//oj过的答案
//#include <stdio.h>
//int main()
//{
//	char ch;
//	char prechar;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch != ' ' && ch != '\t' && ch != '\n')
//		{
//			putchar(ch);
//		}
//		else if (prechar != '\t' && prechar != '\n' && prechar != ' ')
//		{
//			putchar('\n');
//		}
//		prechar = ch;
//	}
//	return 0;
//}
//
//
////问题 F: the sum of prime number
//int Prime(int n)
//{
//	int flag = 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		int sum = 0;
//		for (int i = 2; i <= input; i++)
//		{
//			if (Prime(i))
//				sum += i;
//		}
//		printf("%d\n", sum);
//	}
//	return 0;
//}

//问题 G: Reverse your input string
//int main()
//{
//	char arr[100];
//	while (gets(arr) != NULL)
//	{
//		//strlen计算的时候不包括'\0',但是这里要减去1，因为下标
//		for (int i = strlen(arr)-1; i >= 0; i--)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr[100];
//	gets(arr);
//	printf("%d\n", strlen(arr));
//	return 0;
//}

//问题 H: Prime Number
//int Prime(int n)
//{
//	int flag = 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 1)
//		return 0;
//	else
//		return 1;
//}
// 
// 
//int main()
//{
//	int input;
//	while (scanf("%d", &input) != EOF)
//	{
//		int i = 2,count=0;
//		while (count != input)
//		{
//			if (Prime(i))
//				count++;
//			i++;
//		}
//		printf("%d\n", i - 1);
//	}
//	return 0;
//}


//问题 I: Lucky 7 in the Pocket
//int main()
//{
//	int input,count;
//	scanf("%d", &count);
//	for (int i = 0; i < count; i++)
//	{
//		scanf("%d", &input);
//		int tmp = input;
//		while (tmp)
//		{
//			if (tmp % 7 == 0 && tmp % 4 != 0)
//			{
//				printf("%d\n", tmp);
//				break;
//			}
//			tmp++;
//		}
//	}
//	return 0;
//}

//问题 J: Longest Substring Without Repeating Characters
//int main()
//{
//	char arr[1000];
//	while (scanf("%s", arr) != EOF)
//	{
//		int length = 1, maxlen = 1;
//		char* head, * tail, * start;
//		head = tail =start= arr;
//		again:
//		while (*(tail) != '\0')
//		{
//			int  sign = 0;
//			tail++;
//			if (*tail == '\0')
//				goto again;
//			for (int i = 0; i < length; i++)
//			{
//				if (*(head + i) == *(tail))
//				{
//					head++;
//					tail = head;
//					sign = 1;
//					length = 1;
//				}
//			}
//			if (sign != 1)
//				length++;
//			if (maxlen < length)
//			{
//				start = head;
//				maxlen = length;
//			}
//		}
//		for (int i = 0; i < maxlen; i++)
//			printf("%c", *(start + i));
//		printf("\n");
//	}
//}

////檀江浩的
//#include<stdio.h>
//#include<string.h>
//main()
//{
//	int legth, max;
//	char a[100];
//	int end, i, j;
//	while (scanf("%s", a) != EOF)
//	{
//		max = 0; legth = 0;
//		for (i = 0; i < strlen(a); i++)
//		{
//			if (a[i + 1] != a[i])
//			{
//				legth++;
//				if (legth > max)
//				{
//					end = i;
//					max = legth;
//				}
//			}
//			if (a[i + 1] == a[i])
//			{
//				legth = 0;
//			}
//		}
//
//		for (i = end - max + 1; i <= end; i++)
//		{
//
//			int count = 0;
//			for (j = i - 1; j >= end - max + 1; j--)
//			{
//				if (a[j] == a[i])
//				{
//					count = 1;
//					break;
//				}
//			}
//			if (count == 0)
//			{
//				printf("%c", a[i]);
//			}
//		}
//		printf("\n");
//	}
//}

////问题 K: A simple function
//#include <stdio.h>
//#include<ctype.h>
//int main()
//{
//	char ch;
//	while (scanf("%c", &ch) != EOF)
//	{
//		if (isdigit(ch))
//			puts("1");
//		else if (isalpha(ch))
//			puts("2");
//		else
//			puts("0");
//		getchar();
//	}
//	return 0;
//}

////问题 L: The index of a character in a string
//#include <stdio.h>
//int Find(char* pf, char ch)
//{
//	int ret = 0;
//	while (*pf != ch && *pf!='\0')
//	{
//		ret++;
//		pf++;
//	}
//	if (*pf == ch)
//		return ret;
//	else
//		return -1;
//}
//int main()
//{
//	char arr[100];
//	char ch;
//	while (scanf("%s %c", arr, &ch) != EOF)
//	{
//		int ret = Find(arr, ch);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


////问题 M: Reverse the string
//#include <stdio.h>
//void Reverse(char* p, int sz)
//{
//
//	if (sz % 2 == 0)
//	{
//		for (int i = 0; i < sz / 2; i++)
//		{
//			char tmp = p[i];
//			p[i] = p[sz  - 1 - i];
//			p[sz  - 1 - i] = tmp;
//		}
//	}
//	else
//	{
//		sz = sz - 1;
//		for (int i = 0; i < sz / 2; i++)
//		{
//			char tmp = p[i];
//			p[i] = p[sz - i];
//			p[sz - i] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	char arr[100];
//	while (gets(arr) != NULL)
//	{
//		int sz = strlen(arr);
//		Reverse(arr,sz);
//		puts(arr);
//	}
//	return 0;
//}

//#include <stdio.h>
//void Reverse(char* p, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[100];
//	while (gets(arr) != NULL)
//	{
//		int sz = strlen(arr);
//		Reverse(arr,sz);
//		puts(arr);
//	}
//	return 0;
//}



//问题 N: The repeated digits
//#include <stdio.h>
//int Differ(char* p)
//{
//	for (int i = 0; p[i] != '\0'; i++)
//	{
//		for (int j = i+1; p[j] != '\0'; j++)
//		{
//			if (p[i] == p[j])
//				return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	char arr[100];
//	while (gets(arr) != NULL)
//	{
//		int ret=Differ(arr);
//		printf("%d\n", ret);
//	}
//	return 0;
//}