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

////1026: 求a/b保留小数点后3位
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%.3lf\n", (double)a / b);
//	return 0;
//}

////1027: 星期几？
//int main()
//{
//	int N, M;//N是星期，M是天数
//	scanf("%d %d", &N, &M);
//	char* arr[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
// //一维数组不能存放多个字符串
//	int X = (N + M)%7;
//	printf("%s\n", arr[X]);
//	return 0;
//}

////1028: 输入三角形的三边长，使用海伦公式计算三角形的面积
//int main()
//{
//	double a, b, c, p, s;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	p = (a + b + c) / 2;
//	s = p * (p - a) * (p - b) * (p - c);
//	printf("%.2lf\n", pow(s, 0.5));
//	return 0;
//}

////1030: 字符的转换
//int main()
//{
//	char  a= { 0 };
//	scanf("%c", &a);
//	if (a >= 65 && a <= 90)
//	{
//		printf("%c\n", a + 32);
//	}
//	else 
//	{
//		printf("%c\n", a);
//	}
//
//	return 0;
//}

////1031: 给定x值，输出对应的y值。
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x < 1)
//	{
//		printf("%d\n", x);
//	}
//	else if (x > 1 && x < 10)
//	{
//		printf("%d\n", 2 * x - 1);
//	}
//	else if (x > 10)
//	{
//		printf("%d\n", 3 * x - 11);
//	}
//	return 0;
//}

////1032: 输出成绩等级’A’、 ’B’、 ’C’、 ’D’、 ’E’
//int main()
//{
//	int  score = 0;
//	scanf("%d",&score);
//	char arr[] = { 'A','B','C','D','E' };
//	if (score >= 0 && score <= 100)
//	{
//		if (score < 60)
//		{
//			printf("%c\n", arr[4]);
//		}
//		else if (score < 69 && score >= 60)
//		{
//			printf("%c\n", arr[3]);
//		}
//		else if (score < 80 && score >= 70)
//		{
//			printf("%c\n", arr[2]);
//		}
//		else if (score < 90 && score >= 80)
//		{
//			printf("%c\n", arr[1]);
//		}
//		else if (score >= 90)
//		{
//			printf("%c\n", arr[0]);
//		}
//	}
//	return 0;
//}

//////1033: 输入当月利润，求应发放奖金总数
//int main()
//{
//	int earnings = 0;
//	double bonus = 0.0;
//	int a = (int)pow(10, 5);
//	scanf("%d", &earnings);
//	if (earnings <=a )
//	{
//		bonus = earnings * 0.1;
//		printf("%.2lf\n", bonus);
//	}
//	else if (earnings > a && earnings <= 2*a)
//	{
//		bonus = a * 0.1 + (earnings - a) * 0.075;
//		printf("%.2lf\n", bonus);
//	}	
//	else if (earnings > 2*a && earnings <= 4*a)
//	{
//		bonus = a * 0.1 + a* 0.075+ (earnings - 2*a) * 0.05;
//		printf("%.2lf\n", bonus);
//	}	
//	else if (earnings > 4*a && earnings <= 6*a)
//	{
//		bonus = a * 0.1 + a * 0.075 +2*a* 0.05 + (earnings - 4 * a) * 0.03;
//		printf("%.2lf\n", bonus);
//	}	
//	else if (earnings > 6*a && earnings <= 10*a)
//	{
//		bonus = (earnings - 6 * a) * 0.015 + a * 0.1 + a * 0.075 + 2 * a * 0.05 + 2*a* 0.03;
//		printf("%.2lf\n", bonus);
//	}
//	else if (earnings > 10 * a)
//	{
//		bonus=(earnings-10*a)*0.01+4*a* 0.015 + a * 0.1 + a * 0.075 + 2 * a * 0.05 + 2 * a * 0.03;
//		printf("%.2lf\n", bonus);
//	}
//	return 0;
//}

////1034: 输入一个字符，判断是否阿拉伯数字
//int main()
//{
//	char num = { 0 };
//	scanf("%c", &num);
//	if (num >= 48&& num <= 57)
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}

//1035: 公式求和
//int main()
//{
//	int i = 0;
//	
//	
//	int sum2 = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		int j = 0;
//		int tmp = 0;
//		int sum = 1;
//		for (j = 1; j <= i; j++)
//		{
//			sum *= j;
//			tmp = sum;
//		}
//		sum2 += tmp;
//	}
//	printf("%d\n", sum2);
//	return 0;
//}

//////1036: 字母概率
//int main()
//{
//	
//	char alp ;//"0"
//	char arr[200] = { 0 };
//	while ((scanf("%c %s", &alp, arr)) != EOF)
//	{
//		double count = 0;
//		getchar();
//		if (alp >= 65 && alp <= 90)
//		{
//			alp += 32;
//		}
//		double  st = strlen(arr);//  
//		for (int n = 0; n < st; n++)
//		{
//			if (arr[n] >= 65 && arr[n] <= 90)
//			{
//				arr[n] += 32;
//			}
//		}
//		for (int i = 0; i < st; i++)
//		{
//			if (alp == arr[i])//取出每个元素进行对比
//			{
//				count++;
//			}
//		}
//		 double ret = count / st;
//		printf("%.5lf\n", ret);
//	}
//	return 0;
//}
////1038: 读入年、月、日，计算该日在当年中是第几天
//typedef struct time
//{
//	int year;
//	int month;
//	int day;
//
//}tm;
//int days(tm* p)
//{
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31};
//	if (p->year % 4 == 0 && p->year % 100 != 0 || p->year % 400 == 0)
//	{
//		arr[2] = 29;
//	}
//	int sum = 0;
//	for (int i = 1; i < p->month; i++)
//	{
//		sum += arr[i];
//	}
//	return sum + p->day;
//}
//int main()
//{
//	tm ca;
//	scanf("%d %d %d", &ca.year, &ca.month, &ca.day);
//	int ret = days(&ca);
//	printf("%d\n", ret);
//	return 0;
//}

////1037: 500年前是一家(5分)
//int main()
//{
//	int n;
//	while (scanf("%d", &n) !=EOF)
//	{
//		int arra[10];
//		int arrb[10];
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d %d", &arra[i], &arrb[i]);
//		}
//		if (0 == n % 2)
//		{
//			if (arrb[n - 1] > arrb[n - 2])
//			{
//				printf("you are my elder\n");
//			}
//			else if (arrb[n - 1] == arrb[n - 2])
//			{
//				printf("you are my brother\n");
//			}
//			else if (arrb[n - 1] < arrb[n - 2])
//			{
//				printf("you are my younger\n");
//			}
//		}
//		if (n % 2 != 0)
//		{
//			if (arrb[n - 1] > arrb[n - 2])
//			{
//				printf("you are my younger\n");
//			}
//			else if (arrb[n - 1] == arrb[n - 2])
//			{
//				printf("you are my elder\n");
//			}
//			/*else if (arrb[n - 1] < arrb[n - 2])
//			{
//				printf("you are my brother\n");
//			}*/
//			
//		}
//	
//
//	}
//	return 0;
//}
// 
//#include <stdio.h>
//
//int main() {
//	int n, i, j, one, two, g1, g2;
//	while (scanf("%d", &n) != EOF) 
//	{
//		int a[10][2];
//		for (i = 0, j = 0; i < n; j++) 
//		{
//			if (j == 2) {
//				i++;
//				j = 0;
//			}
//			if (i == n && j == 0)
//			{
//				break;
//			}
//			scanf("%d", &a[i][j]);
//		}
//		one = a[0][1];
//		two = a[1][1];
//		g1 = 0;
//		g2 = 0;
//		for (i = 0; i < n; i++) 
//		{
//			if (one == a[i][0]) 
//			{
//				one = a[i][1];
//				g1++;
//			}
//			if (two == a[i][0]) 
//			{
//				two = a[i][1];
//				g2++;
//			}
//		}
//
//		if (g1 > g2)
//		{
//			printf("You are my elder\n");
//		}
//		
//		else if (g1 == g2)
//		{
//			printf("You are my brother\n");
//		}
//			
//		else
//		{
//			printf("You are my younger\n");
//		}
//	
//	}
//
//}

//1039: 编写两个函数input和print
//#include <stdio.h>
//
//struct Student {
//    int number;
//    char name[20];
//    int course1;
//    int course2;
//    int course3;
//};
//
//void input(struct Student* p)
//{
//    for (int i = 0; i < 5; i++) {
//        scanf("%d %s %d %d %d", &(p[i].number), p[i].name, &(p[i].course1), &(p[i].course2), &(p[i].course3));
//    }
//}
//
//void print(struct Student* p)
//{
//    for (int i = 0; i < 5; i++) {
//        printf("%d %s %d %d %d\n", p[i].number, p[i].name, p[i].course1, p[i].course2, p[i].course3);
//    }
//}
//
//int main()
//{
//    struct Student stu[5];
//    input(stu);
//    print(stu);
//    return 0;
//}
//
////1042: 移位运算。
//int main()
//{
//	unsigned int a, n;
//	scanf("%u %u", &a, &n);
//	//for (n = 1; n <= 30; n++)
//	//{
//	//	a = a >> n;
//	//}
//	printf("%u\n", a<<(32-n) | (a>>n));
//	return 0;
// }
////1043: 左右循环移位。
//int  move(unsigned int value, int n)
//{
//	return  (value << (32 - n) | (value >> n));
//}
//int main()
//{
//	int value, n;
//	scanf("%u %d", &value, &n);
//	int ret = move(value, n);
//	printf("%u\n", ret);
//}
// 
// 
//// 1040: 编写一个函数new
//typedef struct Room
//{
//	int* p;
//}room;
//void new(room* space,int n)
//{
//	space->p = (int* )malloc(n);
//	if (space->p == NULL)
//	{	
//		exit(-1);
//	}
//}
//void free1(room*space)
//{
//	free((*space).p);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	room space;
//	new(&space,n);
//	free1(&space);
//	printf("OK");
//}
//// 1041: 链表的合并。
//typedef struct Stu1
//{
//	int num;
//	int grade;
//	St* next;
//}St;
//
//St* LinkListInit()
//{
//	St* p = (St*)malloc(sizeof(St));
//	if (p == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//
//	return p;
//}
//
//int main()
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	St s1;
//	St s2;
//	St s3;
//	LinkListInit(&s1);
//	LinkListInit(&s2);
//	LinkListInit(&s3);
//
//	return 0;
//}
// 
//1044: 设计一个函数，使得给出一个16位整数的原码，能够得到该数的补码。
//int main()
//{
//	char ch[17];
//	scanf("%s", &ch);
//	if (ch[0] == '0')
//	{
//		printf("%s\n", ch);
//	}
//	else
//	{
//		for (int i = 1; i < 16; i++)
//		{
//			if (ch[i] == '0')
//			{
//				ch[i] = '1';
//			}
//			else
//			{
//				ch[i] = '0';
//			}
//		}
//		if (ch[15] == '1')
//		{
//			ch[15] = '0';
//			for (int i = 14; i > 0; i--)
//			{
//				if (ch[i] == '1')
//				{
//					ch[i] = '0';
//					break;
//				}
//			}
//		}
//		else
//		{
//			ch[15] = '1';
//		}
//		printf("%s\n", ch);
//	}
//	return 0;
//}

//1045: 输出摄氏温度
//int main()
//{
//	double F,C;
//	scanf("%lf", &F);
//	C = 5*(F - 32) / 9;
//	printf("c=%.2lf\n", C);
//	return 0;
//}
//1047: 求算式的和-1
//int main()
//{
//	int a, b, c;
//	int sum1= 0; 
//	int sum2 = 0;
//	double sum3 = 0.0;
//	scanf("%d %d %d", &a, &b, &c);
//	while (a)
//	{
//		sum1 += a;
//		a--;
//	}
//	for (int i = 1; i <= b; i++)
//	{
//		sum2 += (int)pow(i, 2);
//	}
//	for (int i = 1; i <= c; i++)
//	{
//		sum3 += 1.0/ i;
//	}
//	double sum = sum1 + sum2 + sum3;
//	printf("%.2lf\n",sum);
//	return 0;
//}
// 

// 1048: 用迭代法求平方根
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	double x1;
//	double x2 = 1.0;
//	x1 = (x2 + x / x2) / 2.0;
//	while (fabs(x2 - x1) > 0.00001)
//	{
//		x2 = x1;
//		x1 = (x2 + x / x2) / 2.0;
//	}
//	printf("%.3lf\n", x1);
//	return 0;
//}
// 
// 
//1049: 求一个3×3矩阵对角线元素之和。(15分)
//int main()
//{
//	int arr[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	printf("%d %d\n", arr[0][0] + arr[1][1] + arr[2][2], arr[0][2] + arr[1][1] + arr[2][0]);
//	return 0;
//}
//// 1050: 按原来排序的规律插入数组中
//int main()
//{
//	int arr[10];
//	int n;
//	for (int i = 0; i < 9; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	scanf("%d", &n);
//	for (int i = 8; i >= 0; i--)
//	{
//		if (arr[i] > n)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i+1] = n;
//			break;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
// 
// 
//// 1051: 最大公约数和最小公倍数
//int ma(int a, int b)
//{
//	int tmp = 1;
//	while (tmp)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	return a;
//}
//int mi(int a, int b)
//{
//	return (a * b / ma(a,b));
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret1=ma(x, y);
//	int ret2=mi(x, y);
//	printf("%d %d", ret1,ret2);
//	return 0;
//}
// 1052: 求方程 的根
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = pow(b, 2) - 4 * a * c;
//	double x1, x2;
//	if (ret > 0)
//	{
//		x1 = (-b + pow(ret, 0.5))/ (2.0*a);
//		x2 =  (-b - pow(ret, 0.5)) / (2.0 * a);
//		printf("x1=%.3lf x2=%.3lf\n", x1, x2);
//	}
//	else if (ret == 0)
//	{
//		x1 = (-b + ret) / 2.0 * a;
//		x2 = x1;
//		printf("x1=%.3lf x2=%.3lf\n", x1, x2);
//	}
//	else
//	{
//		double real = -b / (2.0 * a);
//		double fake = sqrt((4 * a * c - b*b)) / (2.0 * a);
//		if (a < 0)
//		{
//			printf("x1=%.3lf%.3lfi x2=%.3lf%.3lfi\n", real, fake, real, fake);
//		}
//		else
//		{
//			printf("x1=%.3lf+%.3lfi x2=%.3lf-%.3lfi\n", real, fake, real, fake);
//		}
//		
//	}
//	return 0;
//}
//// 1053: 写一函数，将两个字符串连接
//int main()
//{
//	char ch1[100];
//	char ch2[100];
//	scanf("%s", ch1);
//	scanf("%s", ch2);
//	printf("%s%s\n", ch1,ch2);
//	return 0;
//}
//// 1054: 写一函数，将字符串中的元音字母复制到另一个字符串，然后输出。
//int main()
//{
//	char ch[100];
//	char sh[100];
//	char dh[6] = "aeiou";
//	scanf("%s", ch);
//	int sz = strlen(ch);
//	int n = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < 6; j++)
//		{
//			if (ch[i] == dh[j])//这里会出现元音字母有重复的问题
//			{
//				sh[n] = ch[i];
//				n++;
//			}
//		}
//	
//	}
//	sh[n] = '\0';
//	printf("%s\n", sh);
//	//这里提供思路：进行遍历如果重复则取出字符并且进行移位
//	return 0;
//}
//1055: 输出已交换后的两个值
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int tmp = x;
//	x = y;
//	y = tmp;
//	printf("%d %d", x, y);
//	return 0;
//}
// 
// 1057: 三角形面积
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double a, b, c,s;
//
//	scanf("%lf %lf %lf", &a, &b, &c);
//	s = (a + b + c) / 2.0;
//	printf("%.3lf\n", sqrt(s*(s-a)*(s-b)*(s-c)));
//	return 0;
//}
//// 1058: 是否闰年.
//int main()
//{
//	int year = 0;
//	scanf("%d",& year);
//	if(year%4==0 && year%100!=0 || year%400==0)
//	{
//		printf("L");
//	}
//	else
//	{
//		printf("N");
//	}
//	return 0;
//}
//// 1059: 输出实数
//int main()
//{
//	double n;
//	scanf("%f", &n);
//	printf("%6.2f\n", n);
//	printf("%6.2f %6.2f\n", n,n);
//	printf("%6.2f %6.2f %6.2f\n", n,n,n);
//
//	return 0;
//}
//// 1060: 三个数中找出最大的数
//int main()
//{
//	double x, y,z;
//	scanf("%lf %lf %lf", &x, &y,&z);
//	double ret = x > y ? x : y;
//	ret = ret > z ? ret : z;
//	printf("%.3lf\n", ret);
//	printf("%.3lf\n", ret);
//	return 0;
//}
//////1062: 计算本年中是第几天
//#include <stdio.h>
//typedef struct Time
//{
//	int year;
//	int month;
//	int day;
//}tim;
//int main()
//{
//	tim input;
//	int sum=0;
//	int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	scanf("%d %d %d", &input.year, &input.month, &input.day);
//	if (input.year % 4 == 0 && input.year % 100 != 0 || input.year % 400 == 0)
//	{
//		arr[2] = 29;
//	}
//	for (int i = 0; i < input.month; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d\n", sum + input.day);
//	return 0;
//}
////1063: 打印一个学生的数据记录
//#include <stdio.h>
//typedef struct Student
//{
//	char number[20];
//	char name[20];
//	int course1;
//	int course2;
//	int course3;
//}stu;
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	stu st[10];
//	for(int i=0;i<n;i++)
//	{
//		scanf("%s %s %d %d %d", st[i].number, st[i].name, &st[i].course1, &st[i].course2, &st[i].course3);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		printf("%s,%s,%d,%d,%d\n", st[i].number, st[i].name, st[i].course1, st[i].course2, st[i].course3);
//	}
//	
//	
//	return 0;
//
//}
////1064: 打印出3门课的总平均成绩，以及最高分的学生的数据
//#include<stdio.h>
//typedef struct Student
//{
//	char number[20];
//	char name[20];
//	int course1;
//	int course2;
//	int course3;
//}stu;
//int main()
//{
//	int n = 0;
//	int sum2, max,averge1,averge2,averge3;
//	int ret=0;
//	int	taverge1 = 0;
//	int	taverge2 = 0;
//	int	taverge3 = 0;
//	scanf("%d", &n);
//	stu *st=(stu*)malloc(n*sizeof(stu));//动态创建结构体数组的大小
//	for(int i=0;i<n;i++)
//	{
//		scanf("%s %s %d %d %d", st[i].number, st[i].name, &st[i].course1, &st[i].course2, &st[i].course3);//循环读入
//	}
//	for (int i = 0; i < n; i++)
//	{
//		taverge1 += st[i].course1;//计算科目1的总和
//		taverge2 += st[i].course2;//计算科目2的总和
//		taverge3 += st[i].course3;//计算科目3的总和
//	}
//	
//	averge1 = taverge1/ n;//计算科目1的平均值
//	averge2 = taverge2/ n;//计算科目2的平均值
//	averge3 =  taverge3/ n;//计算科目3的平均值
//	max = st[0].course1 + st[0].course2 + st[0].course3;
//	for (int i = 1; i < n; i++)//比较出总分最大的人，返回他的结构体数组的下标
//	{
//
//		sum2 = st[i].course1 + st[i].course2 + st[i].course3;
//		if (sum2 > max)
//		{
//			max = sum2;
//			ret = i;
//		}
//	}
//	printf("%d %d %d\n", averge1, averge2, averge3);
//	printf("%s %s %d %d %d\n", st[ret].number, st[ret].name, st[ret].course1, st[ret].course2, st[ret].course3);
//	return 0;
//
//}
//
//
//
//1065: 编写程序求方程ax2 + bx + c = 0的根，a、b、c的值由键盘输入，假设b2 - 4ac > 0
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = pow(b, 2) - 4 * a * c;
//	double x1, x2;
//	if (ret > 0)
//	{
//		x1 = (-b + pow(ret, 0.5)) / (2.0 * a);
//		x2 = (-b - pow(ret, 0.5)) / (2.0 * a);
//		if (x1 > x2)
//		{
//			printf("%.0lf %.0lf\n", x1, x2);
//		}
//		else
//		printf("%.0lf %.3lf\n", x2, x1);
//	}
//
//	return 0;
//}
//
////1066: 计算银行存款的本息
//int main()
//{
//	double money, rate;
//	int year;
//	double ret;
//	scanf("%lf %d %lf", &money, &year, &rate);
//	ret = money * pow((1 + rate), year);
//	printf("%.1lf\n", ret);
//}
////1067: 编写程序，输入x，输出y
//int main()
//{
//	int x = 0;
//	int ret = 0;
//	scanf("%d", &x);
//	if (x > 5)
//	{
//		ret = pow(x, 2) - 5 * x + 7;
//	}
//	else
//	{
//		ret= pow(x, 2) +3 * x -4;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//1068: 输入三个字母，按字母表顺序输出这三个字母
//#include <stdio.h>
//int main()
//{
//	char arr[4] = { 0 };
//	char max = arr[0];
//	char tmp;
//	scanf("%s", arr);
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 2-i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	
//	}
//	printf("%s", arr);
//	return 0;
//}
////1069: 编写一个计算员工收入的程序
//int main()
//{
//	int num = 0;
//	int sum = 0;
//	scanf("%d", &num);
//	if (num <= 160)
//	{
//		sum = num * 10;
//		printf("%d\n", sum);
//	}
//	else
//	{
//		sum = 1600 + 30 * (num - 160);
//		printf("%d\n", sum);
//	}
//	return 0;
//}
//
//1071: 编写程序输出一张摄氏-华氏温度转换表
//int ctof(int i)
//{
//    return  32 + i * 9 / 5;
//}
//int main() 
//{
//    int i, start, end;
//    scanf("%d%d", &start, &end);
//    for (int i = start; i <= end; i += 10) 
//    {
//        printf("%dC=%dF\n", i, ctof(i));
//    }
//    return 0;
//}

//1072: 编写程序计算排列数 Pmn =M! / (m-n)!
//int fact(int m)
//{
//	int sum = 1;
//	for (int i = 1; i <= m; i++)
//	{
//		sum *= i;
//	}
//	return sum;
//}
//int main() 
//{
//
//	int i, n, m;
//
//	scanf("%d%d", &m, &n);
//
//	printf("%d\n", fact(m) / fact(m - n));
//
//	return 0;
//
//}

//1073: 括号的匹配问题
//#include <stdio.h>
//int main()
//{
//	char ch[101] = { 0 };//存放输入
//	char ch1[101] = { 0 };//存放输出
//	
//	while (scanf("%s", ch) != EOF)
//	{
//		
//		int sz = strlen(ch);
//		//写一个判断方法
//		char bracket = '(';
//		char bracket1 = ')';
//		int  ch2[101] = { 0 };//存放已知配对的）
//		for (int i = sz - 1; i >= 0; i--)
//		{
//			if (ch[i] == bracket)//如果等于'(',找一个与之匹配的')'
//			{
//				for (int j = i; j < sz; j++)//从我们找到的'('开始，往回找，找到最近与之匹配的')'
//				{
//					if (ch[j] == bracket1)
//					{
//						if (ch2[j] != j)//因为我们初始化为，所以里面的数据默认为0，会索引到我们第一个字符
//						{
//							ch1[i] = ' ';//这里是我们的'(',找到有对应的后赋为空
//							ch1[j] = ' ';//这里是我们找到的匹配的')'，赋为空
//							ch2[j] = j;//我们这里把我们记住这个配对的')'的位序
//							break;
//						}
//
//					}
//					else//如果找不到，说明他是单身
//					{
//						ch1[i] = '$';
//					}
//				}
//			}
//			else if (ch[i] == bracket1)//如果等于'）',
//			{
//				ch1[i] = '?';
//			}
//			else
//			{
//				ch1[i] = ' ';
//			}
//		}
//		
//		for (int n = 0; n < sz; n++)
//		{
//			if (ch2[n] != 0)
//			{
//				ch1[ch2[n]] = ' ';
//			}
//
//		}
//	
//		
//		printf("%s\n", ch);
//		printf("%s\n", ch1);
//		for (int m = 0; m < 100; m++)
//		{
//			ch2[m] = 0;
//
//			ch[m] = '\0';
//			ch1[m] = '\0';
//		}
//	
//	}
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	int i, j, count;
//	char s[100], s1[100], s2[100];
//	while (1) {
//		gets(s);
//		if (strlen(s) == 0)
//			break;
//		count = 0;
//		for (i = 0; i < strlen(s); i++) {
//			if (s[i] == '(')
//				s1[count++] = '$';
//			else if (s[i] == ')')
//				s1[count++] = '?';
//			else
//				s1[count++] = ' ';
//		}
//		for (i = 0; i < count; i++)
//			if (s1[i] == '$') {
//				for (j = i; j < count; j++) {
//					if (s1[j] == '?') {
//						s1[j] = ' ';
//						s1[i] = ' ';
//						break;
//					}
//				}
//			}
//
//
//		for (i = 0; i < count; i++)
//			printf("%c", s1[i]);
//		printf("\n");
//	}
//	return 0;
//}









//错误版

	//for (int i = 0; i < sz; i++)
	//{
	//	
	//	if (ch[i] == bracket)//如果等于'(',找一个与之匹配的')'
	//	{
	//		
	//		for (int j = i; j < sz; j++)
	//		{
	//			if (ch[j] == bracket1)
	//			{
	//				ch1[i] = ' ';//找到有对应的后赋为空
	//				ch1[j] = ' ';
	//				count++;

	//			}
	//			else
	//			{
	//				ch1[i] = '$';
	//			}
	//		}
	//	}
	//	else if (ch[i] == bracket1)//如果等于'）',
	//	{
	//		ch1[i] = '?';
	//	}
	//	else
	//	{
	//		ch1[i] = ' ';
	//	}
	//}











////1075: 输出以下信息
//int main()
//{
//	printf("C:\\Program Files\\internet explorer\n");
//	return 0;
//}
////1076: 放大的X
//int main()
//{
//	int n = 0;
//	int a = 0;
//	scanf("%d", &n);
//	for (int x = 0; x < n; x++)
//	{
//		scanf("%d", &a);
//		for (int i = 0; i < a; i++)
//		{
//			for (int j = 0; j < a; j++)
//			{
//				if (i == j || i + j ==a - 1)
//				{
//					printf("X");
//				}
//				else
//				{
//					printf(" ");
//				}
//
//			}
//			printf("\n");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//1077: 企业发放奖金
//#include <stdio.h>
//
//double calculateBonus(int profit) {
//    double bonus = 0.0;
//
//    switch (profit / 100000) {
//    case 0: // 利润低于或等于100000元
//        bonus = profit * 0.1;
//        break;
//    case 1: // 利润在100001-200000元之间
//        bonus = 100000 * 0.1 + (profit - 100000) * 0.075;
//        break;
//    case 2: // 利润在200001-400000元之间
//        bonus = 100000 * 0.1 + 100000 * 0.075 + (profit - 200000) * 0.05;
//        break;
//    case 3: // 利润在400001-600000元之间
//        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + (profit - 400000) * 0.03;
//        break;
//    case 4: // 利润在600001-1000000元之间
//        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + (profit - 600000) * 0.015;
//        break;
//    default: // 利润大于1000000元
//        bonus = 100000 * 0.1 + 100000 * 0.075 + 200000 * 0.05 + 200000 * 0.03 + 400000 * 0.015 + (profit - 1000000) * 0.01;
//        break;
//    }
//
//    return bonus;
//}
//
//int main() {
//    int profit;
//
//    while (scanf("%d", &profit) == 1) {
//        double bonus = calculateBonus(profit);
//        printf("%d\n", (int)bonus); // 输出整数形式的奖金
//    }
//
//    return 0;
//}
//1078: 输入两个正整数m和n，求其最大公约数和最小公倍数
//int ma(int a, int b)
//{
//	int tmp = 1;
//	while (tmp)
//	{
//		tmp = a % b;
//		a = b;
//		b = tmp;
//	}
//	return a;
//}
//int mi(int a, int b)
//{
//	return (a * b / ma(a, b));
//}
//int main()
//{
//	int x, y;
//	scanf("%d %d", &x, &y);
//	int ret1 = ma(x, y);
//	int ret2 = mi(x, y);
//	printf("%d %d", ret1, ret2);
//	return 0;
//}

////1079: 求圆周长，圆面积，圆球表面积，圆球体积，圆柱体积。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	float r, h;
//	float PI = 3.14f;
//	float C1, Sa, Sb, Va, Vb;
//	scanf("%f %f", &r, &h);
//	C1 = 2 * PI * r;
//	Sa = PI * pow(r, 2);
//	Sb = 4 * PI * pow(r, 2);
//	Va = (4 / 3.0) * PI * pow(r, 3);
//	Vb = Sa * h;
//	printf("C1=%.2f\n", C1);
//	printf("Sa=%.2f\n", Sa);
//	printf("Sb=%.2f\n", Sb);
//	printf("Va=%.2f\n", Va);
//	printf("Vb=%.2f\n", Vb);
//	return 0;
//}
//
////1080: 输入数字（表示ASCII码），输出相对应的字符信息
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int  arr[1000] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		printf("%c", arr[j]);
//	}
//	
//	return 0;
//}
////1081: 软件的版本号
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][3];
//	int arr1[100][3];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &arr[i][0], &arr[i][1], &arr[i][2]);
//		scanf("%d %d %d", &arr1[i][0], &arr1[i][1], &arr1[i][2]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i][0] > arr1[i][0])
//		{
//			printf("First\n");
//		}
//		else if(arr[i][0] == arr1[i][0])
//		{
//			if (arr[i][1] > arr1[i][1])
//			{
//				printf("First\n");
//			}
//			else if(arr[i][1] == arr1[i][1])
//			{
//				if (arr[i][2] > arr1[i][2])
//				{
//					printf("First\n");
//				}
//				else if(arr[i][2] == arr1[i][2])
//				{
//					printf("Same\n");
//				}
//				else
//				{
//					printf("Second\n");
//				}
//			}
//			else
//			{
//				printf("Second\n");
//			}
//		}
//		else
//		{
//			printf("Second\n");
//		}
//	}
//	return 0;
//}

////1082: 小明兑换人民币
//int main()
//{
//	
// 
//  dollar = 0.0;
//	scanf("%lf", &dollar);
//	double arr[12];
//	for (int i = 0; i < 12; i++)
//	{
//		scanf("%lf", &arr[i]);
//	}
//	double max = .0;
//	for (int i = 0; i < 12; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%.2lf\n", max * dollar);
//	return 0;
//}

//1083: 现请你构建一个N*N的矩阵
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num[100];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//	int arr[9][9];
//	for (int a = 0; a < n; a++)
//	{
//		
//		for (int i = 0; i < num[a]; i++)
//		{
//			for (int j = 0; j < num[a]; j++)
//			{
//				arr[i][j] = (i+1) * (j+1);
//			}
//		}

//		for (int i = 0; i <num[a]; i++)
//		{
//			for (int j = 0; j < num[a]; j++)
//			{
//				printf("%d ", arr[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//1084: 元音字母全部为大写 其余字母全部为小写
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char arr[50][50];
//	int arr1[50];
//	char apl[12] = { 'a','A','e','E','i','I','O','o','u','U' };
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%s", &arr[i][50]);
//		arr1[i] = strlen(arr[i][50]);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < arr1[i]; j++)
//		{
//			for (int x = 0; x < 12; x++)
//			{
//				if (arr[i][arr1[j]] == apl[x])
//				{
//
//				}
//
//			}
//		}
//	}
//	
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		char arr[50];
//		scanf("%s", &arr);
//		int sz = strlen(arr);
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[j] >= 'A' && arr[j] <= 'Z')
//			{
//				arr[j] += 32;
//			}
//			if (arr[j] == 'A' || arr[j] == 'a')
//			{
//				arr[j] = 'A';
//			}
//			else if (arr[j] == 'e' || arr[j] == 'E')
//			{
//				arr[j] = 'E';
//			}
//			else if (arr[j] == 'I' || arr[j] == 'i')
//			{
//				arr[j] = 'I';
//			}
//			else if (arr[j] == 'o' || arr[j] == 'O')
//			{
//				arr[j] = 'O';
//			}
//			else if (arr[j] == 'u' || arr[j] == 'U')
//			{
//				arr[j] = 'U';
//			}
//			
//		}
//		printf("%s\n", arr);
//	}
//	return 0;
//}
//

//1085: “ACM”字符串
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	//输入n行数据
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	char ch[] = "ACM";
//	char sh[10000] = { 0 };//用来存放复制的字符串
//	for (int j = 0; j < n; j++)
//	{
//		for (int i = 0; i < arr[j]; i++)
//		{
//			strncpy(sh+(i*3), ch,3);
//		}
//		int sz = strlen(sh);
//		for (int x = 0; x < sz; x++)
//		{
//			printf("%s\n", sh);
//		}
//		for (int x = 0; x < sz; x++)
//		{
//			sh[x] = '\0';
//		}
//	}
//	return 0;
//}
////1086: 比特字符串
//#include <string.h>
//int main()
//{
//	char arr[50] = {0};
//	while (scanf("%s", arr))
//	{
//		if (arr[0] == '#')
//		{
//			break;
//		}
//		int sz = strlen(arr);
//		int count = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] == '1')
//			{
//				count++;
//			}
//		}
//		if (arr[sz - 1] == 'e')//默认为偶，判断奇偶性，奇补1，偶补0
//		{
//			if (count % 2 != 0)
//			{
//				arr[sz - 1] = '1';
//			}
//			else
//			{
//				arr[sz - 1] = '0';
//			}
//		}
//		else//默认为奇，
//		{
//			if (count % 2 != 0)
//			{
//				arr[sz - 1] = '0';
//			}
//			else
//			{
//				arr[sz - 1] = '1';
//			}
//		}
//		printf("%s\n", arr);
//		for (int i = 0; i < sz; i++)
//		{
//			arr[i] = '\0';
//		}
//	}
//
//	return 0;
//}
//1087: 分子质量
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	char ch[100] = { 0 };
//	int sum = 0;
//	for (int z = 0; z < n; z++)
//	{
//		scanf("%s", ch);
//		int sz = strlen(ch);
//		for (int i = sz - 1; i >= 0; i--)//倒序查找
//		{
//			if (ch[i] == 'H')
//			{
//				sum += 1;
//			}
//			else if (ch[i]=='C')
//			{
//				sum += 12;
//			}			
//			else if (ch[i]=='N')
//			{
//				sum += 14;
//			}			
//			else if (ch[i]=='O')
//			{
//				sum += 16;
//			}			
//			else if (ch[i]=='F')
//			{
//				sum += 19;
//			}			
//			else if (ch[i]=='P')
//			{
//				sum += 31;
//			}			
//			else if (ch[i]=='S')
//			{
//				sum += 32;
//			}	
//			else if (ch[i]=='K')
//			{
//				sum += 39;
//			}
//			else
//			{
//				if (ch[i-1] == 'H')
//				{
//					sum +=(ch[i]-'0')*1;
//					i -= 1;
//				}
//				else if (ch[i-1] == 'C')
//				{
//					sum += (ch[i ] - '0') * 12;
//					i -= 1;
//				}
//				else if (ch[i-1] == 'N')
//				{
//					sum += (ch[i] - '0') *  14;
//					i -= 1;
//				}
//				else if (ch[i-1] == 'O')
//				{
//					sum += (ch[i ] - '0') * 16;
//					i -= 1;
//				}
//				else if (ch[i-1] == 'F')
//				{
//					sum += (ch[i] - '0') * 19;
//					i -= 1;
//				}
//				else if (ch[i-1] == 'P')
//				{
//					sum += (ch[i] - '0') * 31;
//					i -= 1;
//				}
//				else if (ch[i-1] == 'S')
//				{
//					sum += (ch[i] - '0') * 32;
//					i -= 1;
//				}
//				else if (ch[i-1] == 'K')
//				{
//					sum += (ch[i] - '0') * 39;
//					i -= 1;
//				}
//			}
//
//		}
//			
//		printf("%d\n", sum);
//		sum = 0;
//	}
//	return 0;
//}
////1088: 铺设瓷砖   时2023.9.29这题不会，等我沉淀
//int Pave(int n)
//{
//	if (n==1)//基准时n==1，时只有一种贴法，就是竖着贴1*1
//	{
//		return n;
//	}
//	else if (n == 2)
//	//n==2时，一种是2个1*1竖着贴，一种是2*2的方法
//	//最后一种是两个1*1的横着摆；
//	{
//		return 3;
//	}
//	else
//	//当我们选择铺地砖时，一种是Pave(n-1)先放1*1，
//	// 另一种就是Pave(n-2)有两种方法，是先铺2*2和横着铺1*1，第一排都占两个格子
//	{
//		return  (Pave(n - 1)+Pave(n-2)*2 );
//	}
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &m);
//		int ret = Pave(m);
//		printf("%d\n", ret);
//	}
//
//}
// 
//1089: 是哪种三角形？（10分）
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a, b, c;
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d %d %d", &a, &b, &c);
//		if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
//		{
//			printf("good\n");
//		}
//		else if (a == b || b == c || a == c)
//		{
//			printf("perfect\n");
//		}
//		else
//		{
//			printf("just a triangle\n");
//		}
//	}
//	return 0;
//}
// 
// 1090: 小明的侄子过生日
//int main()
//{
//
//	int m = 0;
//	scanf("%d", &m);
//	for (int z = 0; z < m; z++)
//	{
//		int n = 0;
//		scanf("%d", &n);
//		int x = 0;
//		int ch[10000] = { 0 };
//		int a = 0, b = 0, c = 0;
//		for (int i = n ; i >= 1; i--)
//		{
//			if (n % i == 0)
//			{
//				a = n / i;
//				for (int j = i; j >= 1; j--)
//				{
//					if (i % j == 0)
//					{
//						b = j;
//						c = i / j;
//						ch[x] = (a * b + b * c + a * c) * 2;
//						x++;
//					}
//
//				}
//			}
//
//		}
//		int min = ch[0];
//		for (int k = 1; k < x; k++)
//		{
//			if (ch[k] < min)
//			{
//				min = ch[k];
//			}
//		}
//		printf("%d\n", min);
//	}
//	return 0;
//}
//1094: 小明看电视
//void swap1(int* a, int* b)//交换两行数据
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		if (n == 0)
//		{
//			exit(-1);
//		}
//		int arr[100][2];
//	//循环读入
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d %d", &arr[i][0], &arr[i][1]);
//		}
//
//		//下面的冒泡排序，按照一行里面第二个元素的大小进行递增排序
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				if (arr[j][1] > arr[j + 1][1])
//				{
//					for (int x = 0; x < 2; x++)
//					{
//						swap1(&arr[j][x], &arr[j + 1][x]);
//					}
//				}
//			}
//		}
//		int count = 1;
//		int h = 0;
//		for (int k = 1; k < n; k++)
//		{
//			//第一行属于必看，从第二行开始，找到比第一行的第二个元素大的数
//			//因为我们是按照每行的第二个元素的大小排序，所以只要找到就是最优解
//			if (arr[k][0] >= arr[h][1])
//			{
//				h = k;
//				count++;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
////1097: 二进制数问题
//int main()
//{
//	int count_A = 0;
//	int count_B = 0;
//	for (int i =1; i <= 1000; i++)
//	{
//		int x = 0;
//		int tmp = i;
//		int ch[10];
//		while (tmp!= 0 )
//		{
//
//			ch[x] = tmp % 2;
//			tmp = tmp / 2;
//			x++;
//		}
//		int count_one = 0;
//		int count_zero = 0;
//		for (int j = 0; j < 10; j++)
//		{
//			if (ch[j] == 0)
//			{
//				count_zero++;
//			}
//			else if (ch[j] == 1)
//			{
//				count_one++;
//			}
//		}
//		
//		if (count_one > count_zero)
//		{
//			count_A++;
//		}
//		else 
//		{
//			count_B++;
//		}
//
//	}
//	printf("%d %d\n", count_A, count_B);
//	return 0;
//}
//1098: 最大公约数和最小公倍数问题
//int main()
//{
//	int count = 0;
//	
//	int d, c;
//	int x, y, a, b;
//	scanf("%d %d", &a, &b);
//	y = a > b ? a : b;//y大
//	x = a > b ? b : a;//x小
//	for (int i =x ; i <= y; i++)
//	{
//		if (i % x == 0)
//		{
//			for (int j = i + 1; j <= y; j++)
//			{
//				if (j % x == 0)
//				{
//					if ((j* i) / x == y )
//					{
//						d = j;
//						c = i;
//						int tmp = 1;
//						while (tmp) 
//						{
//							tmp = d % c;
//							d = c;
//							c = tmp;
//						}
//						if (d == x)
//						{
//							count++;
//						}
//						
//					}
//				}
//			}
//		}
//	}
//	printf("%d\n", count*2);
//	return 0;
//}


//1099: 输出一个整数的逆数
//int main()
//{
//	char ch[1000] = { 0 };
//	scanf("%s", &ch);
//	int sz = strlen(ch);
//	char tmp;
//	for (int i = 0;i<sz-1;i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			tmp = ch[j];
//			ch[j] = ch[1+j];
//			ch[j+1] = tmp;
//		}
//	}
//	/*for (int i = sz-1; i >=0; i--)
//	{
//		if (ch[i] == '0' && ch[i - 1] != '0' && ch[i+1]!='0' &&i!=0)
//		{
//			continue;
//		}
//		else if(ch[i] == '0' )
//		{
//			for (int x = i; x < sz; x++)
//			{
//				ch[x] = ch[x + 1];
//			}
//		}
//	}
//	printf("%s\n", ch);
//	return 0;*/
//	int n = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		if (ch[i] == '0')
//		{
//			n++;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (n; n < sz ; n++)
//	{
//		printf("%c", ch[n]);
//	}
//}




















//1100: 输出一个3位整数（100<=x and x<=999）的每一位的数字
//int main()
//{
//	char n[1000] = { 0 };
//	scanf("%s", n);
//	int sz = strlen(n);
//	for (int i = 0; i < sz; i++)
//	{
//		if (i != (sz - 1))
//		{
//			printf("%c", n[i]);
//			printf(",");
//		}
//		else
//		{
//			printf("%c", n[i]);
//			printf("\n");
//		}
//	
//	}
//	return 0;
//}
//1101: 日期加月份
//int main()
//{
//	int year, month, day,n;
//	scanf("%d,%d,%d", &year, &month, &day);
//	scanf("%d", &n);
//	year = year + (month + n) / 13;
//	printf("%d-%d-%d\n", year, (month + n-1) % 12+1,day);
//	return 0;
//}

//1103: 计算整数个数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int z = 0; z < n; z++)
//	{
//		int m = 0;
//		int one = 0, five = 0, ten = 0;
//		scanf("%d", &m);
//		int arr[300] = { 0 };
//		for (int i = 0; i < m; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		for (int i = 0; i < m; i++)
//		{
//			if (arr[i] == 1)
//			{
//				one++;
//			}
//			else if (arr[i] == 5)
//			{
//				five++;
//			}
//			else if (arr[i] == 10)
//			{
//				ten++;
//			}
//		}
//		printf("%d %d %d\n", one, five, ten);
//	}
//}
//1104: 二倍的问题
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int x = 0; x < n; x++)
//	{
//		int arr[100] = { 1 };
//
//		int i = 0;
//		for (i = 0; i >= 0; i++)
//		{
//			scanf("%d", &arr[i]);
//			if (arr[i] == 0)
//			{
//				break;
//			}
//		}
//		int count = 0;
//		for (int z = 0; z < i - 1; z++)
//		{
//			for (int j = 0; j < i - 1; j++)
//			{
//				if (arr[z] * 2 == arr[j])
//				{
//					count++;
//				}
//			}
//		}
//		printf("%d\n", count);
//	}
//
//	return 0;
//}
//
//1105: 喜洋洋
//int main()
//{
//	int n, m, k;
//	
//	while ((scanf("%d %d %d", &n, &m, &k))!=EOF)
//	{
//		int count = 0;
//		for (int i = n; i <= m; i += k)
//		{
//			count += i;
//		}
//		printf("%d\n", count);
//
//	}
//
//	return 0;
//}
//1106: 安全的密码
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[4] = { 0 };
//	for (int i = 0; i < n; i++)
//	{
//		char ch[100] = { 0 };
//		scanf("%s", ch);
//		char sh[] = { '!','~','@','#','$','%','^' };
//		int sz = strlen(ch);
//		for (int j = 0; j < sz; j++)
//		{
//			if (ch[j] > 'A' && ch[j] < 'Z')
//			{
//				arr[0] = 1;
//			}
//			else if (ch[j] > 'a' && ch[j] < 'z')
//			{
//				arr[1] = 1;
//			}
//			else if (ch[j] > '0' && ch[j] < '9')
//			{
//				arr[2] = 1;
//			}
//			else
//			{
//				for (int x = 0; x < 7; x++)
//				{
//					if (ch[j] == sh[x])
//					{
//						arr[3] = 1;
//					}
//				}
//			}
//		}
//		int sum = 0;
//		for (int i = 0; i < 4; i++)
//		{
//			sum += arr[i];
//			arr[i] = 0;
// 		}
//		if (sum < 3 || sz >= 16 || sz < 8)
//		{
//			
//			printf("NO\n");
//		}
//		else if(sum >= 3 && sz<16 &&sz>=8)
//		{
//			printf("YES\n");
//		}
//	
//	}
//}
//1108: count characters
//int main()
//{
//	char arr[100] = { 0 };
//	int i = 0;
//	int count = 0;
//	while (scanf("%c", &arr[i]) != EOF)
//	{
//		count++;
//		i++;
//	}
//	printf("%d",count);
//	return 0;
//}
//1109: Count white spaces!
//int main()
//{
//	char arr[100] = { 0 };
//	int i = 0;
//	int count = 0;
//	while (scanf("%c", &arr[i]) != EOF)
//	{
//		if (arr[i] == ' ' || arr[i] == '\t' || arr[i] == '\n')
//		{
//			count++;
//		}
//		i++;
//	}
//	printf("%d", count);
//	return 0;
//}
//
//// 1110: 整数的位数
//int main()
//{
//	unsigned long int a = 0;
//	scanf("%u", &a);
//	int count = 1;
//	while (a / 10 != 0)
//	{
//		a /= 10;
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//1111: 移动最后一位数到第一位
//int main()
//{
//	char ch[1000] = { 0 };
//	scanf("%s", ch);
//	int sz = strlen(ch);
//	if (ch[sz - 1] != '0')
//	{
//		for (int i = sz - 1; i >= 0; i--)
//		{
//			ch[i + 1] = ch[i];
//		}
//		ch[0] = ch[sz];
//		ch[sz] = '\0';
//		printf("%s\n", ch);
//	}
//	else
//	{
//		ch[sz-1] = '\0';
//		printf("%s\n", ch);
//	}
//	
//	return 0;
//}
//1112: n天后是星期几
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	char ch[7][10] = { "Sunday", "Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday" };
//	printf("%s\n", ch[((3 + n) % 7 + 1)]);
//	return 0;
//}
//1114: 单链表反序输出  不会
//typedef struct num
//{
//	int data;
//	struct num * next;
//}num,*List;
//num* LinkListInit()
//{
//	num* headnode= (num*)malloc(sizeof(num));
//	if (headnode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	headnode->next = NULL;
//	return headnode;
//}
//num* LinkListCreate(int data)
//{
//	num* newnode = (num*)malloc(sizeof(num));
//	if (newnode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
//int main()
//{
//	num* p;
//	num* q;
//	List L = NULL;
//	L=LinkListInit();
//	int value = 0;
//	while (scanf("%d", &value) != EOF)
//	{
//		p = LinkListCreate(value);
//		if (L->next == NULL)
//		{
//			L->next = p;
//		}
//		else
//		{
//			num* tail = L->next;
//			while (tail->next != NULL)
//			{
//				tail = tail->next;
//			}
//			tail->next = p;
//		}
//
//	}
//
//	return 0;
//}

////1115: 判断是否子序列
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	scanf("%s", arr1);
//	scanf("%s", arr2);
//	int sz1 = strlen(arr1);
//	int sz2 = strlen(arr2);
//	int signal = 0;
//	for (int i = 0; i < sz2; i++)
//	{
//		for (int j = 0; j < sz2; j++)
//		{
//			if (arr2[i] == arr2[j])
//			{
//				signal++;
//			}
//		}
//	}
//	return 0;
//}
//1117: 1970年1月1日是星期四，x年y月z日是星期几
//int main()
//{
//	int year, month, day;
//	scanf("%d-%d-%d", &year, &month, &day);
//	char ch[7][10] = { "Sunday", "Monday", "Tuesday",
//		"Wednesday","Thursday","Friday","Saturday" };
//	int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int sum = 0;
//	int daysum = 0;
//	int yearsum = 365;
//	for (int i = 1970; i < year; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			sum += yearsum + 1;
//		}
//		else
//		{
//			sum += yearsum;
//		}
//	}
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		arr[2] = 29;
//	}
//	for (int i = 0; i < month; i++)
//	{
//		daysum += arr[i];
//	}
//	int total = (daysum + sum + day+2) % 7 + 1;
//
//	printf("%s\n", ch[total]);
//	//printf("%d", sum);
//	return 0;
//}

//1118: 2019年2个日期间的天数
//int main()
//{
//	int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int month, day,month1,day1;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d-%d", &month, &day);
//	scanf("%d-%d", &month1, &day1);
//	if (month == month1)
//	{
//		ret = day1 - day;
//	}
//	else
//	{
//		for (int i = month+1; i < month1; i++)
//		{
//			sum += arr[i];
//		}
//		ret = arr[month] - day + day1+sum;
//	}
//	
//	printf("%d\n", ret);
//	
//	return 0;
//}
//1119: 2个日期间的天数。
//int main()
//{
//	int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int arr1[13] = { 0,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int month, day,month1,day1,year,year1;
//	int ret = 0;
//	int sum = 0;
//	int sum1 = 0;
//	int total = 365;
//	int ret2 = 0;
//	scanf("%d-%d-%d",&year, &month, &day);
//	scanf("%d-%d-%d",&year1, &month1, &day1);
//	if (year == year1 )
//	{
//		if (month == month1)
//		{
//			ret = day1 - day;
//		}
//		else
//		{
//			if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//闰年
//			{
//				for (int i = month + 1; i < month1; i++)
//				{
//					sum += arr1[i];//闰年2月使用arr1
//				}
//				ret = arr[month] - day + day1 + sum;
//			}
//			else
//			{
//				for (int i = month + 1; i < month1; i++)
//				{
//					sum += arr[i];//非闰年2月使用arr
//				}
//				ret = arr[month] - day + day1 + sum;
//			}
//		
//		}
//	}
//	else//两年日期不相等
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)//第一个闰年和非闰年
//		{
//			for (int i = month + 1; i < 13; i++)//闰年
//			{
//				sum += arr1[i];
//			}
//			sum1 = sum + arr1[month] - day;
//		}
//		else
//		{
//			for (int i = month + 1; i < 13; i++)//非闰年
//			{
//				sum += arr[i];
//			}
//			sum1 = sum + arr[month] - day;
//		}
//		if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0)//第二个闰年
//		{
//			for (int j = 1; j < month1; j++)
//			{
//				ret += arr1[j];//第二个输入的年份的月份前几个月天数之和
//			}
//			//sum1是year天数，ret1里面已经计算了year1前几个月的天数
//			ret += sum1 + day1;//此时的ret已经是year年和year1那年的和
//			if (year1 - year == 1)//连续年
//			{
//				;
//			}
//			else//非连续年
//			{
//				for (int x = year + 1; x < year1; x++)
//				{
//					if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//					{
//						ret += total + 1;
//					}
//					else
//					{
//						ret += total;
//					}
//				}
//			}
//			
//		}
//		else//第二个不是闰年
//		{
//			for (int j = 1; j < month1; j++)
//			{
//				ret += arr[j];
//			}
//			ret += sum1 + day1;
//			if (year1 - year == 1)
//			{
//				;
//			}
//			else
//			{
//				for (int x = year + 1; x < year1; x++)
//				{
//					
//					if (x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
//					{
//						ret += total + 1;
//					}
//					else
//					{
//						ret += total;
//					}
//				}
//			}
//		}
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//1120: 整数--均值
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[100]; 
//		double ret = 0.0;
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			ret += arr[i];
//		}
//		printf("%.2lf\n", ret / n);
//	}
//	return 0;
//}
//1121: 分数大战
//int main()
//{
//	int a=0, b=0, c=0, d=0,e=0,f=0,e1=0,f1=0;
//	int tmp = 1;
//	while (scanf("%d %d %d %d",&a,&b,&c,&d) != EOF)
//	{
//		tmp = 1;
//		if (b == d)
//		{
//			f = b;
//			e = a + c;
//			e1 = e;
//			f1 = f;
//			while (tmp)
//			{
//				tmp = e1 % f1;
//				e1 = f1;
//				f1 = tmp;
//			}
//			f /= e1;
//			e /= e1;
//			printf("%d/%d\n", e, f);
//		}
//		else
//		{
//			f = b * d;
//			e = a * d + b * c;
//			e1 = e;
//			f1 = f;
//			while (tmp)
//			{
//				tmp = e1 % f1;
//				e1 = f1;
//				f1 = tmp;
//			}
//			if (e1 == 1)
//			{
//				printf("%d/%d\n", e, f);
//			}
//			else
//			{
//				f /= e1;
//				e /= e1;
//				printf("%d/%d\n", e, f);
//			}
//			
//		}
//	}
//	return 0;
//}
//1122: 输出正方形字符串
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//
//		char ch[] = "ACM";
//		char sh[10000] = { 0 };//用来存放复制的字符串
//		for (int i = 0; i < n; i++)
//		{
//			strncpy(sh +(i*3), ch, 3);
//		}
//		
//		int sz = strlen(sh);
//		for (int x = 0; x < sz; x++)
//		{
//			printf("%s\n", sh);
//		}
//		for (int x = 0; x < sz; x++)
//		{
//			sh[x] = '\0';
//		}
//		
//	}
//	
//	return 0;
//}

//1123: Replace to single blank
////// 错误版
int main()
{
	
	char ch[1000] = { 0 };
	char ch1[1000] = { 0 };
	while (gets(ch) != EOF)
	{
		int sz = strlen(ch);
		int j = 0;
		for (int i = 0; i < sz; i++)
		{
			if (ch[i] != ' ')
			{
				ch1[j] = ch[i];
				j++;
			}
			else
			{
				if (ch[i + 1] != ' ')
				{
					ch1[j] = ch[i];
					j++;
				}
			}

		}
		
		printf("%s\n", ch1);
		int sz1 = strlen(ch1);
		for (int i = 0; i < sz1; i++)
		{
			ch1[i] = '\0';
		}
		for (int i = 0; i < sz; i++)
		{
			ch[i] = '\0';
		}
	}

	return 0;
}
////#include <stdio.h>
////我的理想型
////int main() {
////	char ch;
////	char prevChar = ' ';
////
////	while ((ch = getchar()) != EOF) {
////		if (ch == ' ' && prevChar == ' ') {
////			 如果当前字符是空格且前一个字符也是空格，则不输出
////			continue;
////		}
////
////		putchar(ch);
////		prevChar = ch;
////	}
////
////	return 0;
////}



//1124: Replace backslach and newline character
//int main()
//{
//	char ch[1000] = { 0 };
//	scanf("%s", ch);
//	int j = 0;
//	char ch1[1000] = { 0 };
//	int sz = strlen(ch);
//	for (int i = 0; i < sz; i++)
//	{
//		
//		ch1[j] = ch[i];
//		if (ch[i] == '\\')
//		{
//			ch1[i + 1] = '\\'; 
//			j++;
//		}
//		j++;
//	}
//	return 0;
//}

//1126: 只留字母
//int main()
//{
//	char ch;
//	while (ch = getchar() != EOF)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//
//		}
//	}
//	return 0;
//}








































































































// //1254: 读取字节的低4位
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//		printf("%d\n", ch & 0x0f);
//	return 0;
//}
// //1255: 读取字节的高4位
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d\n", (ch>>4) & 0x0f);
//	return 0;
//
//}
////1256: 读取字节的低5位
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d\n", ch& 0x1f);
//	return 0;
//
//}
////1257: 读取字节的最高的5位
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d\n", (ch>>3)& 0x1f);
//	return 0;
//
//}
//1258: 读取字节的第6位至第2位
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d\n", (ch>>2)& 0xff);
//	return 0;
//
//}

////1258: 读取字节的第6位至第2位
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d\n", (ch >> 2) & 0xff);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char ch[5];
//	scanf("%s", &ch);
//	printf("%s\n", ch);
//	return 0;
//}
// //1259: 交换字符中的数位
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d\n",(ch>>4)&0x06 | (ch<<4) & 0x60 | ch & 0x99);
//	return 0;
//
//}
//// 1260: 高低字节互换
//int main()
//{
//	char ch = { 0 };
//	scanf("%c", &ch);
//	printf("%d\n", ((ch >> 4) & 0x0f) | ((ch << 4) & 0xf0));
//	return 0;
//}
//1265: 问候语
//int main()
//{
//	int i = 0;
//
//	int arr[50];
//	while (scanf("%d", &arr[i])!=EOF)
//	{
//		
//		if (arr[i] >= 0 && arr[i] < 5 || arr[i] == 22 || arr[i] == 23)
//		{
//			printf("HI\n");
//		}
//		else if (arr[i] >= 5 && arr[i] <= 12)
//		{
//			printf("GOOD MORNING\n");
//		}
//		else if (arr[i] > 12 && arr[i] <= 17)
//		{
//			printf("GOOD AFTERNOON\n");
//		}
//		else if (arr[i] > 17 && arr[i] <= 21)
//		{
//			printf("GOOD EVENING\n");
//		}
//		else
//		{
//			printf("HI\n");
//		}
//		i++;
//	}
//	
//	return 0;
//}
