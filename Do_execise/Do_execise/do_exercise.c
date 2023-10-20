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
//	double c = a * 1.0 / b;
//	printf("%.3lf\n",c);
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
// 1041: 链表的合并。
//typedef struct LNode 
//{
//	int stnumber;
//	int score;
//	struct LNode* next;
//
//}LNode,*LinkList ;
//LNode*  InitList_A()//带头结点的链表初始化
//{
//	LinkList La = (LNode*)malloc(sizeof(LNode));
//	if (La==NULL)
//	{
//		exit (-1);
//	}
//	La->next = NULL;
//	return La;
//}
//LNode* InitList_B()//带头结点的链表初始化
//{
//	LinkList Lb = (LNode*)malloc(sizeof(LNode));
//	if (Lb==NULL)
//	{
//		exit (-1);
//	}
//	Lb->next = NULL;
//	return Lb;
//}
//LNode* InitList_C()//带头结点的链表初始化
//{
//	LinkList Lc = (LNode*)malloc(sizeof(LNode));
//	if (Lc==NULL)
//	{
//		exit (-1);
//	}
//	Lc->next = NULL;
//	return Lc;
//}
//LNode* CreateNode()
//{
//	LNode *newnode= (LNode*)malloc(sizeof(LNode));
//	if (newnode == NULL)
//	{
//		printf("malloc fail\n");
//		exit(-1);
//	}
//	newnode->next = NULL;
//	return newnode;
//}
//void CreateList_A(LNode **phead,int n)
//{
//	LNode* p = *phead;
//	while(p->next)
//	{
//		p = p->next;
//	}
//	for (int i = 0; i < n; i++)
//	{
//	
//		LNode* s = CreateNode();//这里的s是指针，s里面存放的是结构体的地址，指向了结构体，我们&s得到的才是结构体的地址
//		p->next = s;
//		scanf("%d %d", &s->stnumber,&s->score);
//		s->next = NULL;
//		p = p->next;
//	}
//}
//void CreateList_B(LNode **phead,int m)
//{
//	LNode* p = *phead;
//	while (p->next)
//	{
//		p = p->next;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		LNode* s = CreateNode();
//		p->next = s;
//		scanf("%d %d",&s->stnumber,&s->score);
//		s->next = NULL;
//		p = p->next;
//		
//	}
//}
//void MergeList_L(LNode** La, LNode** Lb, LNode** Lc)
//{
//	LNode* pa = (*La)->next;
//	LNode* pb = (*Lb)->next;
//	LNode* pc;
//	(*Lc) = pc = *La;
//	while (pa && pb)
//	{
//		if (pa->stnumber <= pb->stnumber)
//		{
//			pc->next = pa;
//			pc = pa;
//			pa = pa->next;
//		}
//		else 
//		{
//			pc->next = pb;
//			pc = pb;
//			pb = pb->next;
//		}
//	}
//	pc->next = pa ? pa : pb;
//	free(*Lb);
//}
//void print(LNode*Lc)
//{
//	LNode* p=Lc->next;
//	while (p != NULL)
//	{
//		printf("%d %d\n", p->stnumber, p->score);
//		p = p->next;
//	}
//
//}
//void DestroyList(LNode** L)
//{
//	LinkList pp = *L;
//	while (pp)
//	{
//		*L = (*L)->next;
//		free(pp);
//		pp = *L;
//	}
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	LNode* La = InitList_A();
//	LNode* Lb = InitList_B();
//	LNode* Lc = InitList_C();
//	CreateList_A(&La, n);
//	CreateList_B(&Lb, m);
//	MergeList_L(&La, &Lb, &Lc);
//	print(Lc);
//	DestroyList(&La);
//	//DestroyList(&Lb);
//
//	return 0;
//}
//void FreeList(LinkList* phead) {
	//	LNode* current = (*phead)->next;
	//	while (current != NULL) {
	//		LNode* temp = current;
	//		current = current->next;
	//		free(temp); // 释放当前节点的内存
	//	}
	//	free(*phead); // 释放头结点的内存
	//	*phead = NULL; // 将头指针设置为NULL，以避免悬空指针
	//}
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
//int main()
//{
//	
//	char ch[1000] = { 0 };
//	char ch1[1000] = { 0 };
//	while (gets(ch) != EOF)
//	{
//		int sz = strlen(ch);
//		int j = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (ch[i] != ' ')
//			{
//				ch1[j] = ch[i];
//				j++;
//			}
//			else
//			{
//				if (ch[i + 1] != ' ')
//				{
//					ch1[j] = ch[i];
//					j++;
//				}
//			}
//
//		}
//		
//		printf("%s\n", ch1);
//		int sz1 = strlen(ch1);
//		for (int i = 0; i < sz1; i++)
//		{
//			ch1[i] = '\0';
//		}
//		for (int i = 0; i < sz; i++)
//		{
//			ch[i] = '\0';
//		}
//	}
//
//	return 0;
//}
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
// //错误版
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
//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch == '\\')
//		{
//			putchar(ch);
//			putchar(ch);
//		}
//		else if (ch == '\n')
//		{
//			putchar('\\');
//			putchar('n');
//		}
//		else
//			putchar(ch);
//	}
//	return 0;
//}

//1125: 输出由红、绿、蓝三元色组成的所有排列。
//int main()
//{
//	printf("R,G,B\n");
//	printf("R,B,G\n");
//	printf("G,R,B\n");
//	printf("G,B R\n");
//	printf("B,R,G\n");
//	printf("B,G,R\n");
//	return 0;
//}
// #include <stdio.h>

//// 交换数组元素
//void swap(char* a, char* b) {
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}

//// 递归函数，生成三元色排列
//void generate_permutations(char colors[], int n) {
//	if (n == 1) {
//		for (int i = 0; i < 3; i++) {
//			printf("%c", colors[i]);
//			if (i < 2) {
//				printf(",");
//			}
//		}
//		printf("\n");
//	}
//	else {
//		for (int i = 0; i < n; i++) {
//			// 交换元素
//			swap(&colors[i], &colors[n - 1]);
//			// 递归生成剩余元素的排列
//			generate_permutations(colors, n - 1);
//			// 恢复原始顺序
//			swap(&colors[i], &colors[n - 1]);
//		}
//	}
//}
//
//int main() {
//	char colors[] = { 'R', 'G', 'B' };
//	generate_permutations(colors, 3);
//
//	return 0;
//}

////1126: 只留字母
//int main()
//{
//	char ch;
//	while ((ch = getchar())!= EOF)
//	{
//		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}
//1127: 求和

//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//
//		int arr[100] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int m = 0;
//		int sum = 0;
//		int temp = 0;
//		scanf("%d", &m);
//		for (int i = 1; i <= m; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				temp = i;
//				if (temp == arr[j])
//				{
//					sum -= i;
//				}
//			}
//			sum += i;
//		}
//		printf("%d\n", sum);
//
//	}
//	return 0;
////}
//// 1128: 哥德巴赫猜想
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int count = 0;
//		int m = 0;
//		int i = 2;
//		while (m % i != 0)
//		{
//			i++;
//			if (i >= m - 1)
//			{
//				
//				break;
//			}
//		}
//	}
//	
//}
//1129: 杨辉三角
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int arr[100][100];
//		arr[0][0] = 1;
//		arr[1][0] = 1;
//		arr[1][1] = 1;
//		if (n == 1)
//		{
//			printf("%d\n", arr[0][0]);
//		}
//		else if (n == 2)
//		{
//			printf("%d\n", arr[0][0]);
//			printf("%d %d\n", arr[1][0],arr[1][1]);
//
//		}
//		else
//		{
//			for (int i =2; i < n; i++)
//			{
//				arr[i][0] = 1;
//				for (int j = 1; j < i; j++)
//				{
//					arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//				}
//				arr[i][i] = 1;
//			}
//			for (int i =0; i < n; i++)
//			{
//				for (int j = 0; j <= i; j++)
//				{
//					printf("%d", arr[i][j]);
//					if (j != i) 
//					{
//						putchar(' ');
//					}
//				}
//				printf("\n");
//			}
//			
//		}
//		printf("\n");
//	}
//	return 0;
//}

//1130: 输出三角形-1
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		char ch = '*';
//		for(int i=1;i<=n;i++)
//		{
//			for (int j = 1; j <= i; j++)
//			{
//				printf("%c", ch);
//				if (i != j)
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//
//	return 0;
//}

//1131: 输出三角形 - 2
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		char arr[100][10000];
//		for (int j = 0; j < n; j++)
//		{
//
//			for (int i = j * 2; i < 2 * n - 1; i += 2)
//			{
//
//				arr[j][i] = '*';
//				if (i != 2 * n - 2)
//				{
//					arr[j][i + 1] = ' ';
//				}
//			}
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int k = 0; k < i * 2; k++)
//			{
//				printf(" ");
//			}
//			for (int j = i * 2; j < 2 * n - 1; j++)
//			{
//				printf("%c", arr[i][j]);
//			}
//			printf("\n");
//		}
//
//	}
//	
//	
//	return 0;
//}
// 错误版
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		for (int j = 1; j <=n; j++)
//		{
//			for (int i = j*2-1; i <= 2 * n - 1; i++)
//			{
//				if (i % 2 == 0)
//				{
//					printf(" ");
//				}
//				else
//				{
//					printf("*");
//				}
//				/*for (int j = i * 2; j < 2 * n - 1; j++)
//				{
//					printf("*");
//				}*/
//			}
//			printf("\n");
//		}
//	
//	}
//	return 0;
//}
//
//1132: 缩写词组
//int main()
//{
//	int T = 0;
//	scanf("%d", &T);
//	getchar();
//	for (int x = 0; x < T; x++)
//	{
//		
//		char ch[1000] = { 0 };
//		gets(ch);
//		int count = 0;
//		char arr[100] = { 0 };
//		int sz = strlen(ch);
//		int signal = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (signal == 0)
//			{
//				if (ch[i] >= 'A' && ch[i] <= 'Z')
//				{
//					arr[count] = ch[i];
//					count++;
//				}
//				else if (ch[i] >= 'a' && ch[i] <= 'z')
//				{
//					arr[count] = ch[i] - 32;
//					count++;
//				}
//			}
//			if ((ch[i] >= 'A' && ch[i] <= 'Z') ||
//				(ch[i] >= 'a' && ch[i] <= 'z'))
//			{
//				signal = 1;
//			}
//			else if (ch[i] == ' ')
//			{
//				signal = 0;
//			}
//		}
//		printf("%s\n", arr);
//	}
//	
//	return 0;
//}
////1133: 填数字
//int geometric (int *f,int*g,int*h,int*i,int*j)
//{
//	int dif = (*j) / (*i);
//	(*f) = (*j) * dif;
//	(*g) = (*f) * dif;
//	(*h) = (*g) * dif;
//	(*i) = (*h) * dif;
//	(*j) = (*i) * dif;
//	return 0;
//}
//int arithmetic (int* f, int* g, int* h, int* i, int* j)
//{
//	int dif = (*j) - (*i);
//	(*f) = (*j) + dif;
//	(*g) = (*f) + dif;
//	(*h) = (*g) + dif;
//	(*i) = (*h) + dif;
//	(*j) = (*i) + dif;
//	return 0;
//}
//int Fib(int* f, int* g, int* h, int* i, int* j)
//{
//	(*f) = (*j) + (*i);
//	(*g) = (*f) + (*j);
//	(*h) = (*f) +(*g) ;
//	(*i) = (*g) + (*h);
//	(*j) = (*i) + (*h);
//	return 0;
//}
//int main()
//{
//	int a, b, c, d, e;
//	while ((scanf("%d %d %d %d %d", &a, &b, &c, &d, &e) != EOF))
//	{
//		if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
//		{
//			break;
//		}
//		 if ((e - d) == (d - c))
//		{
//			arithmetic(&a,&b, &c, &d, &e);
//		}
//		 else if ((e == (d + c)))
//		 {
//			 Fib(&a, &b, &c, &d, &e);
//		 }
//		 else if ((e / d) == (d / c))
//		{
//			geometric(&a, &b, &c, &d, &e);
//		}
//		 
//		 printf("%d %d %d %d %d\n", a, b, c, d, e);
//	}
//}
//1134: Write a program that prints its input one word per line.
// 错误版
//int main()
//{
//	char ch[1000] = { 0 };
//	char arr[1000] = { 0 };
//	gets(ch);
//	int signal = 1;
//	int sz = strlen(ch);
//	for (int i = 0; i < sz; i++)
//	{
//		if ((ch[i] >= 'A' && ch[i] <= 'Z') ||(ch[i] >= 'a' && ch[i] <= 'z'))
//		{
//			if (signal == 1)
//			{
//				arr[i] = ch[i];
//				signal = 1;
//			}
//			
//		}
//		else if (ch[i] == ' ')
//		{
//			signal = 0;
//		}
//	}
//	return 0;
//}
// 正确版
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
//		else if(prechar != '\t' && prechar != '\n' && prechar!=' ')
//		{
//			putchar('\n');
//		}
//		prechar = ch;
//	}
//	return 0;
//}
//#include <stdio.h>
//1135: 子网掩码
//int main()
//{
//	int a, b, c, d, e, f, g, h,input;
//	int a1, b1, c1, d1,ret1,ret2,ret3,ret4;
//	scanf("%d.%d.%d.%d", &a, &b, &c, &d);
//	scanf("%d.%d.%d.%d", &e, &f, &g, &h);
//	scanf("%d", &input);
//	ret1 = a & e;
//	ret2 = b & f;
//	ret3 = c & g;
//	ret4 = d & h;
//	for (int i = 0;i<input ;i++)
//	{
//		scanf("%d.%d.%d.%d", &a1, &b1, &c1, &d1);
//		if ((ret1 == (e & a1)) && (ret2 == (f & b1)) &&
//			(ret3 == (g & c1)) && (ret4 == (h & d1)))
//		{
//			printf("INNER\n");
//		}
//		else
//		{
//			printf("OUTER\n");
//		}
//	}
//	return 0;
//}
//1136: 湖北警官学院IP地址

//int main()
//{
//	int a, b, c, d;
//	while ((scanf("%d.%d.%d.%d", &a, &b, &c, &d)) != EOF)
//	{
//		if (a == 122)
//		{
//			if (b == 204)
//			{
//				if (c >= 224 && c <= 231)
//				{
//					if (d >= 0 && d <= 255)
//					{
//						printf("YES\n");
//					}
//					else
//					{
//						printf("NO\n");
//					}
//				}
//				else
//				{
//					printf("NO\n");
//				}
//			}
//			else
//			{
//				printf("NO\n");
//			}
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	
//	return 0;
//}

//1137: 等差数列
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int arr[5];
//		int ch[4];
//		int count = 0;
//		scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
//		for (int j = 0; j < 4; j++)
//		{
//			ch[j] = arr[j + 1] - arr[j];
//		}
//		for (int j = 0; j < 3; j++)
//		{
//			if (ch[j] == ch[j + 1])
//			{
//				count++;
//			}
//		}
//		if (count==3 )
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
//1138: IP地址的合法性检查。
////是否有四个点
////是否全是数字
////是否在~255之间
//	}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int a, b, c, d;
//		char ch[10] = { 0 };
//		if ((scanf("%d.%d.%d.%d", &a, &b, &c, &d)) !=4)
//		{
//			printf("NO\n");
//		}
//		
//		else
//		{
//			gets(ch);
//			if ((a>= 0 &&a<= 255) && (b>= 0 && b<= 255)
//				&& (c>= 0 && c<= 255) && (d>= 0 && d<= 255)) 
//			{
//				int signal = 0;
//				for (int j = 0; j < 10; j++)
//				{
//					if (ch[j] != '\0')
//					{
//						signal = 1;
//					}
//				}
//				if (signal == 0)
//				{
//					printf("YES\n");
//				}
//				else
//				{
//					printf("NO\n");
//				}
//			}
//			else
//			{
//				printf("NO\n");
//			}
//		}
//	}
//	return 0;
//}
//
//1139: 费波拉契数列
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int arr[5];
//		scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
//		int singal = 0;
//		for (int j = 2; j < 5; j++)
//		{
//			if (arr[j] == arr[j - 1] + arr[j - 2])
//			{
//				singal++;
//			}
//
//		}
//		if (singal == 3)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//		
//	return 0;
//}

//1142: Reverse your input string
//int main()
//{
//	char ch[1000] = { 0 };
//	while (scanf("%s", ch) != EOF)
//	{
//		int sz = strlen(ch);
//		for (int i = 0; i < sz - 1; i++)
//		{
//			for (int j = 0; j < sz - 1 - i; j++)
//			{
//				char tmp = ch[j];
//				ch[j] = ch[j + 1];
//				ch[j + 1] = tmp;
//			}
//		}
//		printf("%s\n", ch);
//		for (int i = 0; i < sz; i++)
//		{
//			ch[i] = '\0';
//		}
//	}
//
//	return 0;
//}
//1143: 完数
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int sum = 0;
//		int i = 1;
//		while (i)
//		{
//			if (n % i == 0)
//			{
//				sum += i;
//			}
//			
//			i++;
//			if (i>=n)
//			{
//				break;
//			}
//		}
//		if (sum == n)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
//

//1145: 求一元二次方程的解
//int main()
//{
//	int a, b, c;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if ((b * b - 4.0 * a * c) < 0)
//		{
//			printf("NO SOLUTION\n");
//		}
//		else
//		{
//			double num = sqrt(b * b - 4.0 * a * c);
//			double ret1 = (-b + num) / (2 * a);
//			double ret2 = (-b - num) / (2 * a);
//			printf("%.3lf~~~%.3lf\n", ret1, ret2);
//		}
//
//	}
//	return 0;
//}
//1146: 求最大值
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int arr[100] = { 0 };
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int max = arr[0];
//		for (int i = 0; i < n; i++)
//		{
//			if (max < arr[i])
//			{
//				max = arr[i];
//			}
//		}
//		printf("%d\n", max);
//	}
//	return 0;
//}
//
////1147: 级数求和
//int main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	double sum = 0.0;
//	int i = 1;
//	while (i)
//	{
//		sum += 1.0 / i;
//		i++;
//		if (sum > k)
//		{
//			break;
//		}
//	}
//	printf("%d\n", i-1);
//}
//
//
//// 1148: 出现的次数
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)//循环
//	{
//		int arr[1000] = { 0 };
//		for (int x = 0; x < n; x++)
//		{
//			scanf("%d", &arr[x]);//读入
//		}
//		//排序
//		for (int i = 0; i < n - 1; i++)
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//			}
//		}
//		int array1[1000][3] = { 0 };
//		int count = 0;
//		array1[count][1] = 0;
//		array1[count][0] = arr[0];
//		for (int i = 0; i < n; i++)
//		{
//			
//			if (arr[i] == array1[count][0])
//			{
//				array1[count][1]++;
//			}
//			else
//			{
//				count++;
//				array1[count][0] = arr[i];
//				array1[count][1] = 1;
//			}
//		}
//		for (int i = 0; i >= 0; i++)
//		{
//			if (array1[i][0] == 0)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d %d\n", array1[i][0], array1[i][1]);
//			}
//		}
//
//	}
//	return 0;
//}
//1149: 阿拉伯数字
//int main()
//{
//	char ch[1000];
//	while (gets(ch) != NULL)
//	{
//		
//		int sz = strlen(ch);
//		int signal = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (ch[i] >= '0' && ch[i] <= '9')
//			{
//				signal = 1;
//			}
//			else
//			{
//				signal = 0;
//				break;
//			}
//		}
//		if (signal == 1)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//
//	return 0;
//
//}
//1150: 求费波拉契序列的第n项
//int main()
//{
//	int n = 0;
//	
//
//	while ((scanf("%d", &n) != EOF))
//	{
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		for (int count = 3; count <= n; count++)
//		{
//			a = b;
//			b = c;
//			c = a + b;
//		}
//		printf("%d\n", c);
//	}
//}
//
//1151: 求整数和
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100] = { 0 };
//	for (int j = 0; j < n; j++)
//	{
//		scanf("%d", &arr[j]);
//		int sum = 0;
//		if (arr[j] > 0)
//		{
//			for (int i = arr[j]; i <= 2 * arr[j]; i++)
//			{
//				sum += i;
//			}
//		}
//		else if (arr[j] < 0)
//		{
//			for (int i = arr[j]; i >= 2 * arr[j]; i--)
//			{
//				sum += i;
//			}
//		}
//		else
//		{
//			sum = 0;
//		}
//		printf("%d\n", sum);
//	}
//
//}

//1152: Prime Number
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		int count = 1;
//		int num =2;
//
//		if (n == 1)
//		{
//			printf("2");
//			
//		}
//		while (count != n)
//		{
//			int i = 2;
//			num++;
//			while (num % i != 0)
//			{
//				if (i >= num - 1)
//				{
//					count++;
//					break;
//				}
//				i++;
//			}
//			
//		}
//		printf("%d\n", num);
//		
//	}
//	return 0;
//}

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
//1154: 减去1234
//int main()
//{
//	char arr[100];
//	
//	while ((gets(arr)) !=NULL)//注意gets是NULL
//	{
//		int sz = strlen(arr);
//		int j = 0;
//		int ch[100] = { 0 };
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] >= '0' && arr[i] <= '9')
//			{
//				ch[j] = arr[i] - '0';
//				j++;
//			}
//		}
//		int tmp = 4;
//		for (int x = j-1; x >= j - 4; x--)
//		{
//			if (ch[x] >= tmp)
//			{
//				ch[x] -= tmp;
//				tmp--;
//			}
//			else
//			{
//				ch[x - 1] -= 1;
//				ch[x] = ch[x] + 10 - tmp;
//				tmp--;
//			}
//		}
//		int count = 0;
//		for (int y = 0; y < j; y++)
//		{
//			if (ch[y] == 0)
//			{
//				count++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		for (int y = count; y < j; y++)
//		{
//			printf("%d", ch[y]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//
//}
//1155: ISBN号码
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[20];
//	
//	while ((gets(ch))!=NULL)
//	{
//		int sz = strlen(ch);
//		int temp = 0;
//		int signal = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (ch[i] >= '0' && ch[i] <= '9')
//			{
//				arr[temp] = ch[i] - '0';
//				temp++;
//			}
//			else
//			{
//				if (ch[i] == 'X')
//				{
//					signal = 1;
//				}
//			}
//		}
//		int ret = (arr[0] * 1 + arr[1] * 2 + arr[2] * 3 + arr[3] * 4 +
//			arr[4] * 5 + arr[5] * 6 + arr[6] * 7 + arr[7] * 8 + arr[8] * 9) % 11;
//		if (sz != 13 || ch[1] != '-' || ch[5] != '-' || ch[11] != '-')
//		{
//			
//			if (ret == 10)
//			{
//				printf("%d-%d%d%d-%d%d%d%d%d-%c\n", arr[0],
//					arr[1], arr[2], arr[3], arr[4], arr[5],
//					arr[6], arr[7], arr[8], 'X');
//			}
//			else
//			{
//				printf("%d-%d%d%d-%d%d%d%d%d-%d\n", arr[0],
//					arr[1], arr[2], arr[3], arr[4], arr[5],
//					arr[6], arr[7], arr[8], ret);
//			}
//		}
//		else
//		{
//			if (ret == arr[9] || signal==1)
//			{
//				printf("Right\n");
//			}
//			else if (ret == 10)
//			{
//				printf("%d-%d%d%d-%d%d%d%d%d-%c\n", arr[0],
//					arr[1], arr[2], arr[3], arr[4], arr[5],
//					arr[6], arr[7], arr[8], 'X');
//			}
//			else
//			{
//				printf("%d-%d%d%d-%d%d%d%d%d-%d\n", arr[0],
//					arr[1], arr[2], arr[3], arr[4], arr[5],
//					arr[6], arr[7], arr[8], ret);
//			}
//		}
//	}
//
//	return 0;
//}
//1157: 减去某个整数
//int main()
//{
//	char arr[100];
//	char arr1[100];
//	while ((gets(arr)) != NULL)//注意gets是NULL
//	{
//		gets(arr1);
//		int sz = strlen(arr);
//		int sz1 = strlen(arr1);
//		int j = 0;
//		int ch[100] = { 0 };
//		for (int i = sz-1; i>=0; i--)
//		{
//			if (arr[i] >= '0' && arr[i] <= '9')
//			{
//				ch[j] = arr[i] - '0';
//				j++;
//			}
//		}
//		int ch1[100] = { 0 };
//		int k = 0;
//		for (int i = sz-1; i >=0; i--)
//		{
//
//			if (arr1[i] >= '0' && arr1[i] <= '9')
//			{
//				ch1[k] = arr1[i] - '0';
//				k++;
//			}
//		}
//
//		int sum = 0;
//		int sum1 = 0;
//		for (int i = 0; i < k; i++)
//		{
//			sum += ch1[i] * pow(10, i);
//		}
//		for (int i = 0; i < j; i++)
//		{
//			sum1 += ch[i] * pow(10, i);
//		}
//		printf("%d\n", sum1 - sum);
//
//	}
//
//	return 0;
//
//}
//
////1158: 一个拆二代的征婚广告
//int  main()
//{
//	int num = 2;
//	int a = 0;
//	int b = 0;
//	int k = 0;
//	long int c = 7140229933;
//	//判断一个数是不是素数
//	double f=0.0;
//	k = (int)sqrt((double)num);
//	while (num <= c)
//	{
//		for (int i = 2; i <= k; i++)
//		{
//			if (num % i == 0)
//			{
//				break;
//			}
//		}
//		if (num > k)//确定一个较小的素数
//		{
//			a = num;
//			f = c*1.0 / a;//用c除以这个素数得到的是小数直接排除
//			if (f != (int)f)
//			{
//				break;
//			}
//			else if(num % 6 != 1 && num % 6 != 5)
//			{
//				break;
//			}
//			else
//			{
//				//判断另一个数是不是素数
//				for (int i = 2; i <= (int)sqrt((double)f); i++)
//				{
//					if ((int)f % i == 0)
//					{
//						break;
//					}
//				}
//				if ((int)f > (int)sqrt((double)f))
//				{
//					break;
//				}
//				else
//				{
//					num++;
//				}
//			}
//		}
//		else
//		{
//			num++;
//		}
//	}
//	printf("Lin%d%d", num, (int)f);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	for (long long int i = 2; i < 100000; i++)
//	{
//		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
//		{
//			for (long long int j = i + 1; j < 100000; j++)
//			{
//				if (j % 2 != 0 && j % 3 != 0 && j % 5 != 0 && j % 7 != 0 && i * j == 7140229933)
//				{
//					printf("Lin%lld%lld", i, j);
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
// 1159: 输出一个数的最大素因子。
//int prime(int n)
//{
//	int i = 2;
//	for (; i <sqrt(n); i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i <= sqrt(n))
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (int i = n; i >= 2; i--)
//		{
//			if (n % i == 0 && prime(i) == 1)
//			{
//				printf("%d\n", i);
//				break;
//			}
//		}
//	}
//	return 0;
//}
//1160: 输出大写的英文字母
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		char arr[30] = { 65,66,67,68,69,70,71,72,
//		73,74,75,76,77,78,79,80,81,82,83,84,85,
//		86,87,88,89,90 };
//		for (int i = 0; i < n-1; i++)
//		{
//			printf("%c,", arr[i]);
//		}
//		printf("%c\n", arr[n - 1]);
//	}
//	return 0;
//}
//
////1161: 求和的数对
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10000];
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sum = 0;
//	int k = 0;
//	scanf("%d", &sum);
//	int ch[10000][2] = { 0 };
//	for (int i = 0; i < n-1; i++)
//	{
//		for (int j = 0; j < n -1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1; j < n; j++)
//		{
//			if (sum == (arr[i] + arr[j]))
//			{
//				ch[k][0] = arr[i];
//				ch[k][1] = arr[j];
//				k++;
//			}
//		}
//	}
//	if (ch[0][0] != 0 && ch[0][1] != 0)
//	{
//		printf("%d %d", ch[0][0], ch[0][1]);
//	}
//	else
//	{
//		printf("NO\n");
//	}
//	return 0;
//}
////1162: 找最小的日期  
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) != EOF))
//	{
//		int temp = 0;
//		int time[102][3];
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d-%d-%d", &time[i][0], &time[i][1], &time[i][2]);
//		}
//		for (int i = 0; i < n-1; i++)//year排序
//		{
//			for (int j = 0; j < n - 1 - i; j++)
//			{
//				if (time[j][0] > time[j + 1][0])
//				{
//					for (int k = 0; k < 3; k++)
//					{
//						swap(&time[j][k], &time[j + 1][k]);
//					}
//				}
//			}
//		}
//		for (int i = 1; i <= n; i++)//判断year是否存在相同的
//		{
//			if (time[i][0] != time[0][0])
//			{
//				temp = i;
//				break;
//			}
//		}
//		for (int i = 0; i < temp-1; i++)//如果有相同的直接开始month排序
//		{
//			for (int j = 0; j < temp-1- i; j++)
//			{
//				if (time[j][1] > time[j + 1][1])
//				{
//					for (int k = 1; k < 3; k++)
//					{
//						swap(&time[j][k], &time[j + 1][k]);
//					}
//				}
//			}
//		}
//		for (int i = 1; i <= n; i++)//判断month是否有相同的
//		{
//			if (time[i][1] != time[0][1])
//			{
//				temp = i;
//				break;
//			}
//		}
//		for (int i = 0; i < temp-1; i++)//对day排序
//		{
//			for (int j = 0; j < temp-1- i; j++)
//			{
//				if (time[j][2] > time[j + 1][2])
//				{
//					swap(&time[j][2], &time[j + 1][2]);
//				}
//			}
//		}
//		printf("%d-%02d-%02d\n", time[0][0], time[0][1], time[0][2]);
//	}
//	return 0;
//}
//
////1163: 最复杂的数
//void swap(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int T = 0;
//	while ((scanf("%d", &T)) != EOF)
//	{
//		int arr[100];
//		int output[100000][2];
//		for (int i = 0; i < T; i++)
//		{
//			scanf("%d", &arr[i]);//读取多个数
//			int n = 0;
//			for (int j = 1; j <= arr[i]; j++)//每个数，从1到arr[i]
//			{
//				int count = 0;
//				//计算约数
//				for (int k = 1; k <= j; k++)
//				{
//					if (j % k == 0)
//					{
//						count++;
//					}
//				}
//				output[n][0] = j;
//				output[n][1] = count;
//				n++;
//			}
//			for (int x = 0; x < arr[i] - 1; x++)
//			{
//				for (int y = 0; y < arr[i] - 1 - x; y++)
//				{
//					if (output[y][1] < output[y + 1][1])
//					{
//						for (int m = 0; m < 2; m++)
//						{
//							swap(&output[y][m], &output[y + 1][m]);
//						}
//					}
//				
//				}
//			}
//			printf("%d %d\n", output[0][0], output[0][1]);
//
//		}
//		
//	
//	}
//	return 0;
//}
// chat版本
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//
//void swap(int* a, int* b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
//int main() {
//    int T;
//    while (scanf("%d", &T) != EOF) {
//        for (int t = 0; t < T; t++) {
//            int n;
//            scanf("%d", &n);
//
//            int** output = (int**)malloc(n * sizeof(int*));
//            for (int i = 0; i < n; i++) {
//                output[i] = (int*)malloc(2 * sizeof(int));
//                output[i][0] = i + 1;
//                output[i][1] = 0;
//            }
//
//            for (int j = 1; j <= n; j++) {
//                int sqrt_j = sqrt(j);
//                for (int k = 1; k <= sqrt_j; k++) {
//                    if (j % k == 0) {
//                        output[j - 1][1]++;
//                        if (k != j / k) {
//                            output[j - 1][1]++;
//                        }
//                    }
//                }
//            }
//
//            for (int x = 0; x < n - 1; x++) {
//                for (int y = 0; y < n - 1 - x; y++) {
//                    if (output[y][1] < output[y + 1][1]) {
//                        for (int m = 0; m < 2; m++) {
//                            swap(&output[y][m], &output[y + 1][m]);
//                        }
//                    }
//                }
//            }
//
//            printf("%d %d\n", output[0][0], output[0][1]);
//
//            for (int i = 0; i < n; i++) {
//                free(output[i]);
//            }
//            free(output);
//        }
//    }
//    return 0;
//}
//
//1164: 查找-1
//int main()
//{
//	int N = 0;
//	while ((scanf("%d", &N)) != EOF)
//	{
//		int arr[100];
//		for (int i = 0; i < N; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		int m = 0;
//		scanf("%d", &m);
//		int signal = 0;
//		for (int i = 0; i < N; i++)
//		{
//			if (m == arr[i])
//			{
//				signal = 1;
//				printf("%d\n", i + 1);
//				break;
//			}
//		}
//		if (signal == 0)
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
////1165: 求平均分
//#include <stdio.h>
//#include <stdlib.h>
//int compare(const void* a, const void* b)
//{
//	return ((*(int*)a) - (*(int*)b));
//}
//int main()
//{
//	int n = 0;
//	while((scanf("%d",&n))!=EOF)
//	{
//		int arr[100];
//	
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		size_t sz = sizeof(arr[0]);
//		qsort(arr, n, sz, compare);
//		double sum = 0.0;
//		for(int i=0;i<n;i++)
//		{
//			sum += arr[i] * 1.0;
//		}
//		printf("%d %d %.2lf\n", arr[n-1], arr[0], sum / n);
//		
//
//	}
//}
////1166: 数组升序
//int compare(const void* a, const void* b)
//{
//	return ((*(int*)a) - (*(int*)b));
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int arr[100];
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		qsort(arr, n, sizeof(int), compare);
//		for (int i = 0; i < n; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//
//
//1167: 合法的手机号码
//int main()
//{
//	char arr[30];
//	while ((fgets(arr, 25, stdin)) != NULL)
//	{
//		int sz = strlen(arr)-1;
		//if (arr[0] == '1' && sz == 11)
		//{
		//	if (arr[1] == '3' || arr[1] == '5' ||
		//		arr[1] == '7' || arr[1] == '8')
		//	{
		//		int signal = 0;
		//		for (int i = 2; i < 11; i++)
		//		{
		//			if (arr[i] >= '0' && arr[i] <= '9')
		//			{
		//				signal = 1;
		//				break;
		//			}
		//			else
		//			{
		//				signal = 0;
		//				break;
		//			}
		//		}
		//		if (signal == 1)
		//		{
		//			printf("YES\n");
		//			
		//		}
		//		else
		//		{
		//			printf("NO\n");
		//			
		//		}
		//		
		//	}
		//	else
		//	{
		//		printf("NO\n");
		//		
		//	}
		//}
		//else
		//{
		//	printf("NO\n");
		//	
		//}
//	}
//	return 0;
//}
//1168: 从一个文本中找出所有的手机号码
//int main()
//{
//	char arr[150];
//	while ((fgets(arr, 150, stdin)) != NULL)
//	{
//		int sz = strlen(arr) - 1;
//		int i = 0;
//		int signal2 = 0;
//		for (; i < sz; i++)//开始循环判断每一个数
//		{
//			if (arr[i] >= '0' && arr[i] <= '9' && (i+11)<sz)
//			{
//				for (int j = i; j < i + 11; j++)
//				{
//					//判断是不是电话号码
//					if (arr[j] == '1')
//					{
//						if (arr[j + 1] == '3' || arr[j + 1] == '5' ||
//							arr[j + 1] == '7' || arr[j + 1] == '8')
//						{
//							int signal = 0;
//							for (int x = j + 2; x < j + 11; x++)
//							{
//								if (arr[x] >= '0' && arr[x] <= '9')
//								{
//									signal = 1;
//									
//								}
//								else
//								{
//									signal = 0;
//									break;
//								}
//							}
//							if (signal == 1)
//							{
//								for (int y = j; y < 11 + j; y++)
//								{
//									signal2 = 1;
//									printf("%c", arr[y]);
//
//								}
//								printf("\n");
//							}
//						}
//						else
//						{
//							break;
//						}
//					}
//					else
//					{
//						break;
//					}
//			
//					
//				}
//			}
//		}
//
//		if (i >= sz - 1 && signal2==0)
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
//
//
//
//1169: 中文字符
//int main()
//{
//	char arr[100];
//	while ((fgets(arr, 150, stdin)) != NULL)
//	{
//		int sz = strlen(arr) - 1;
//		int signal = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if ((arr[i] >> 15 & 1) == 1)
//			{
//				printf("YES\n");
//				signal = 0;
//				break;
//			}
//			else
//			{
//				signal = 1;
//			}
//		}
//		if (signal == 1)
//		{
//			printf("NO\n");
//		}
//	}
//}
//
//
//1170: 输出< >间的信息 AC50%
//int main()
//{
//	char arr[150];
//	while ((fgets(arr, 150, stdin)) != NULL)
//	{
//		int ch[50][2];
//		int sz = strlen(arr)-1;
//		int k = 0;
//		int signal = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] == '<')
//			{
//				ch[k][0] = i;
//				for (int j = i; j < sz; j++)
//				{
//					if (arr[j] == '>')
//					{
//						
//						ch[k][1] = j;
//						
//						for (int x = ch[k][0];x <= ch[k][1]; x++)
//						{
//							printf("%c", arr[x]);
//							signal = 1;
//						}
//						i = ch[k][1];
//						k++;
//						printf("\n");
//						break;
//					}
//				}
//			}
//		}
//		if (signal == 0)
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
////1171: 数字字符串
//int main()
//{
//	char arr[100];
//	while ((fgets(arr, 150, stdin)) != NULL)
//	{
//		int sz = strlen(arr) - 1;
//		int a = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (!(arr[i] >= '0' && arr[i] <= '9'))
//			{
//				printf("NO\n");
//				a = 1;
//				break;
//			}
//			
//		}
//		if (a == 0)
//		{
//			printf("YES\n");
//		}
//	}
//	return 0;
//}
//
//1172: 升序数组的插值
//int compare(const void* a, const void* b)
//{
//	return ((*(int*)a) - (*(int*)b));
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int arr[150];
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		scanf("%d", &arr[n]);
//		qsort(arr, n + 1, sizeof(int), compare);
//		for (int i = 0; i < n + 1; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//1173: 是否标识符
//int main()
//{
//	char arr[1000];
//	while ((fgets(arr, 1000, stdin)) != NULL)
//	{
//		int sz = strlen(arr) - 1;
//		int signal = 0;
//		if ((arr[0] >= 'a' && arr[0] <= 'z') || (arr[0] >= 'A' && arr[0] <= 'Z') || (arr[0] == '_'))
//		{
//			if (sz == 1)
//			{
//				printf("YES\n");
//			}
//			else
//			{
//				for (int i = 1; i < sz; i++)
//				{
//					if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z') ||
//						(arr[i] >= '0' && arr[i] <= '9') || (arr[i] == '_'))
//					{
//						signal = 1;
//					}
//					else
//					{
//						printf("NO\n");
//						signal = 0;
//						break;
//					}
//				}
//			}
//		}
//		else
//		{
//			printf("NO\n");
//
//		}
//
//		if (signal == 1)
//		{
//			printf("YES\n");
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <ctype.h>
//
//bool isValidIdentifier(char* str) {
//	if (strlen(str) == 0) {
//		return false;
//	}
//
//	 //判断第一个字符是否为英文字母或下划线
//	if (!(isalpha(str[0]) || str[0] == '_')) {
//		return false;
//	}
//
//	 //检查剩余字符
//	for (int i = 1; i < strlen(str); ++i) {
//		 //字符既不是数字也不是字母或下划线，则不是合法标识符
//		if (!(isalnum(str[i]) || str[i] == '_')) {
//			return false;
//		}
//	}
//
//	return true;
//}
//
//int main() {
//	char input[100];
//	while (fgets(input, sizeof(input), stdin) != NULL) {
//		 //去除换行符
//		input[strcspn(input, "\n")] = 0;
//
//		if (isValidIdentifier(input)) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//	}
//	return 0;
//}

////1174: 黑色星期五
//int main()
//{
//	int n, start=1;
//	while ((scanf("%d",&n)) != EOF)
//	{
//		int count = 0, sum = 0, init = 0;
//		for (int i = 1900; i < n; i++)
//		{
//			sum += 365 + (i % 4 == 0 && i % 100 != 0 || i % 400 == 0);
//		}
//		start =1+ (sum) % 7 ;
//		int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//			arr[2] = 29;
//		init = (start + 5);
//		if (init > 7)
//			init = (start + 5) % 7;
//		for (int i = 0; i < 12; i++)
//		{
//			if((init+arr[i])%7==5)
//			{ 
//				count++;
//			}
//			init = (init + arr[i]) % 7;
//		}
//		if (count != 0)
//			printf("%d\n", count);
//		else
//			printf("NO\n");
//		
//	}
//	return 0;
//}
// 
//// 1175: 真假身份证
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[20];
//	while (fgets(arr, 20, stdin) != NULL)
//	{
//		int sum = (arr[0]-'0') * 7 + (arr[1]-'0') * 9 + (arr[2] - '0') * 10 + (arr[3] - '0') * 5 +
//			(arr[4] - '0') * 8 + (arr[5] - '0') * 4 + (arr[6] - '0') * 2 +( arr[7] - '0') * 1 + (arr[8] - '0') * 6 +
//			(arr[9] - '0') * 3 + (arr[10] - '0') * 7 + (arr[11] - '0') * 9 + (arr[12] - '0') * 10 + (arr[13] - '0') * 5 +( arr[14] - '0') * 8 +
//			(arr[15] - '0') * 4 +( arr[16] - '0') * 2;
//		int ret = 0;;
//		char ch;
//		switch (sum % 11)
//		{
//		case 0:
//			ret = 1;
//			break;
//		case 1:
//			ret = 0;
//			break;
//		case 2:
//			ch = 'X';
//			break;
//		case 3:
//			ret = 9;
//			break;
//		case 4:
//			ret = 8;
//			break;
//		case 5:
//			ret = 7;
//			break;
//		case 6:
//			ret = 6;
//			break;
//		case 7:
//			ret = 5;
//			break;
//		case 8:
//			ret = 4;
//			break;
//		case 9:
//			ret = 3;
//			break;
//		case 10:
//			ret = 2;
//			break;
//		}
//		int temp = sum % 11;
//		if (temp == 2)
//		{
//			if (arr[17]!=ch)
//			{
//				printf("NO\n");
//			}
//			else 
//			{
//				printf("YES\n");
//			}
//		}
//		else
//		{
//			if ((arr[17]-'0') == ret)
//			{
//				printf("YES\n");
//			}
//			else
//			{
//				printf("NO\n");
//			}
//		}
//	}
//
//	return 0;

//}
// //1176: #####的匹配
//int main()
//{
//	char arr[100];
//	while (fgets(arr, 100, stdin) != NULL)
//	{
//		int sz = strlen(arr) - 1;
//		int count1 = 0;
//		int count2 = 0;
//		for (int i = 0; i < sz; i++)
//		{
//			if (arr[i] == '#')
//			{
//				count1++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		for (int j = sz - 1; j >= 0; j--)
//		{
//			if (arr[j] == '#')
//			{
//				count2++;
//			}
//			else
//			{
//				break;
//			}
//		}
//		if (count1 < count2)
//		{
//			int temp = count2 - count1;
//			arr[sz - temp] = '\0';
//		}
//		else if (count1 > count2)
//		{
//			for (int i = sz; i < sz + count1 - count2; i++)
//			{
//				arr[i] = '#';
//			}
//			arr[sz + count1 - count2] = '\0';
//		}
//		int sz1 = strlen(arr);
//		for (int i = 0; i < sz1; i++)
//		{
//			printf("%c", arr[i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 1177: 评委打分
//int compare(const void* a, const void* b)
//{
//	return ((*(int*) a) - (*(int*) b));
//}
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int arr[100];
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		qsort(arr, n, sizeof(int), compare);
//		int sum = 0;
//		for (int i = 1; i < n - 1; i++)
//		{
//			sum += arr[i];
//		}
//		printf("%.2lf\n", (double)sum / (n - 2));
//
//	}
//}
// 
// //
// //
//1178: 数字符
//int main()
//{
//	char ch[300];
//	while ((fgets(ch, 300, stdin)) != NULL)
//	{
//		int alphabet = 0;
//		int hanzi = 0;
//		int sz = strlen(ch) - 1;
//		for (int i = 0; i < sz; i++)
//		{
//			if ((ch[i] >= 'A' && ch[i] <= 'Z') ||
//				(ch[i] >= 'a' && ch[i] <= 'z') ||ch[i]>='0' &&ch[i]<='9')
//			{
//				alphabet++;
//			}
//			else if ((ch[i] >> 17) & 1 == 1)
//			{
//				hanzi++;
//				i++;
//			}
//		}
//		printf("%d %d\n", hanzi,alphabet);
//	}
//
//	return 0;
//}
// 1179: 字母后面加数字1
//int main()
//{
//	char arr[100];
//	while ((fgets(arr, 100, stdin)) != NULL)
//	{
//		int sz = strlen(arr) - 1;
//		for (int i = 0; i < sz; i++)
//		{
//			if ((arr[i] >= 'A' && arr[i] <= 'Z')
//				&& (!(arr[i + 1] >= '0' && arr[i+1] <= '9')))
//			{
//				putchar(arr[i]);
//				putchar('1');
//			}
//			else if((arr[i] >= 'A' && arr[i] <= 'Z')
//				&& (arr[i + 1] >= '0' && arr[i + 1] <= '9'))
//			{
//				putchar(arr[i]);
//				putchar(arr[i + 1]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 1180: 最长子序列
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int arr[100] = { 0 };
//		for (int i = 0; i < n; i++)
//			scanf("%d", &arr[i]);
//		int count = 1,maxlen=0;
//		for (int i = 0; i<n; i++)
//		{
//			if (arr[i] < arr[i + 1])
//				count++;
//			else
//				count = 1;
//			maxlen = maxlen > count ? maxlen : count;
//		}
//		printf("%d\n", maxlen);
//	}
//}
//1181: 最长子字符串  最大的子字符串，并且连续
//int compare(const void* a, const void* b)
//{
//	return ((*(int*) b) - (*(int*) a));
//}
//int main()
//{
//	char s1[100];
//	char s2[100];
//	
//	while ((fgets(s1, 1000, stdin)) != NULL)
//	{
//		fgets(s2, 1000, stdin);
//		char s3[100][100];
//		int k = 0;
//		int ch[50];
//		int e = 0;
//		int g = 0;
//		char s4[100][100];
//		int sz1 = strlen(s1) - 1;
//		int sz2 = strlen(s2) - 1;
//		for (int i = 0; i < sz1; i++)
//		{
//		
//			int h = 0;
//			int signal = 0;
//			for (int j = 0; j < sz2; j++)
//			{
//				if (s1[i] == s2[j])
//				{
//					s3[k][h] = s1[i];
//					i++;
//					h++;
//					signal = 1;
//				}
//
//			}
//			
//			if (signal == 1)
//			{
//				s4[g][0] = k;
//				s4[g][1] = h;
//				g++;
//				ch[e] = h;
//				e++;
//				k++;
//			}
//		}
//		qsort(ch, k, sizeof(int), compare);
//		for (int i = 0; i <k; i++)
//		{
//			if (s4[i][1] == ch[0])
//			{
//				for (int j = 0; j < ch[0]; j++)
//				{
//					printf("%c", s3[i][j]);
//				}
//				break;
//			}
//				
//		}
//		printf("\n");
//	}
//}
//
//1182: 求和-n
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = 2;
//		int sum = 0;
//		if (n == 1)
//		{
//			printf("1\n");
//		}
//		else
//		{
//			while (i <= n)
//			{
//				int j = 1;
//				while (j <= i)
//				{
//					sum += (i * 10) + j;
//					j++;
//				}
//				i++;
//			}
//			printf("%d\n", sum + 1);
//			
//		}
//	}
//	return 0;
//}
//
//1183: 字符出现的次数
//#include <stdio.h>
//int main()
//{
//	char arr[100];
//	while ((fgets(arr, 100, stdin)) != NULL)
//	{
//		char ch;
//		scanf("%c", &ch);
//		int i = 0;
//		int count = 0;
//		while (arr[i] != '\0')
//		{
//			if (arr[i] == ch)
//			{
//				count++;
//			}
//			i++;
//		}
//		printf("%d\n", count);
//		getchar();
//		getchar();
//	}
//	return 0;
//}

//1184: 字符在字符串中出现的位置

//#include <stdio.h>
//int main()
//{
//	char arr[100];
//	while ((fgets(arr, 100, stdin)) !=NULL)
//	{
//		char ch;
//		scanf("%c", &ch);
//		int i = 0;
//		int count = 0;
//		int signal = 0;
//		while (arr[i] != '\0')
//		{
//			if (arr[i] == ch)
//			{
//				signal = 1;
//				printf("%d ", i);
//			}
//			i++;
//		}
//		if (signal == 0)
//		{
//			printf("NULL");
//		}
//		printf("\n");
//		getchar();
//		getchar();
//	}
//	return 0;
//}
// 1185: 输出子字符串
//int main()
//{
//	char arr[101];
//	while ((gets(arr)) != NULL)
//	{
//		char ch;scanf("%c", &ch);
//		int i = 0,count=0;
//		while (arr[i] != '\0')
//		{
//			if (arr[i] != ch)
//				printf("%c", arr[i]);
//			else
//				printf("\n");
//			i++;
//		}
//		printf("\n");
//		getchar();
//	}
//	return 0;
//}
//1186: 将字符串转换为整数。
//int main()
//{
//	char arr[100];
//	while ((gets(arr)) != NULL)
//	{
//		int sz = strlen(arr);
//		if ((sz == 3 && arr[0] != '0' && (arr[0] > '0' && arr[0] <= '9')
//			&& (arr[1] >= '0' && arr[1] <= '9')&&
//			(arr[2] >= '0' && arr[2] <= '9')) ||(sz ==2 && arr[0] != '0' && (arr[0] > '0' && arr[0] <= '9')
//			&& (arr[1] >= '0' && arr[1] <= '9'))
//			||(sz == 1 && arr[0] != '0' && (arr[0] > '0' && arr[0] <= '9')))
//		{
//			int ret = 0;
//			if (sz == 3)
//			{
//				ret = (arr[0] - '0') * 100 + (arr[1] - '0') * 10 + (arr[2] - '0');
//			}
//			else if (sz == 2)
//			{
//				ret = (arr[0] - '0') * 10 + (arr[1] - '0') * 1 ;
//			}
//			else if (sz == 1)
//			{
//				ret = (arr[0] - '0') * 1;
//			}
//			
//			if (ret >= 0 && ret <= 255)
//			{
//				printf("YES\n");
//			}
//			else
//			{
//				printf("NO\n");
//			}
//			
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}
//
//1187: 等比数列
//int main()
//{
//	int arr[4];
//	while (scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]) != EOF)
//	{
//		if (arr[0] < arr[1] && arr[1] < arr[2] && arr[2] < arr[3])
//		{
//			if ((arr[1] * arr[1] == arr[0] * arr[2]) && (arr[2] * arr[2] == arr[1] * arr[3]))
//			{
//				printf("YES\n");
//			}
//			else
//			{
//				printf("NO\n");
//			}
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	
//	}
//
//	return 0;
//}
// 1188: 相邻的素数
//int prime_number(int a)
//{
//	int i = 2;
//	for ( ;i <=(int) sqrt(a); i++)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//			break;
//		}
//	}
//	return 1;
//		
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int minor;
//		int major;
//		for (int i = n - 1; i >= 2; i--)
//		{
//			if (prime_number(i) == 1)
//			{
//				minor = i;
//				break;
//			}
//		}	
//		for (int i = n + 1; i >= n; i++)
//		{
//			if (prime_number(i) == 1)
//			{
//				major = i;
//				break;
//			}
//		}
//		printf("%d<%d<%d\n", minor, n, major);
//	}
//	return 0;
//}
//1189: 降序输出
//int compare(const void* a, const void* b)
//{
//	return ((*(int*)b) - (*(int*)a));
//}
//int main()
//{
//	int arr[3];
//	while ((scanf("%d %d %d", &arr[0], &arr[1], &arr[2])) != EOF)
//	{
//		qsort(arr, 3, sizeof(int), compare);
//		printf("%d>%d>%d\n", arr[0], arr[1], arr[2]);
//	}
//
//	return 0;
//}
//
//1190: 阶乘的和
//int factorial(int a)
//{
//	int i = 1;
//	int sum = 1;
//	while (i <= a)
//	{
//		sum *= i;
//		i++;
//	}
//	return sum;
//}
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int y2 = 0;
//		int y1 = 0;
//		if (n % 2 == 0)//偶数
//		{
//			for (int i = 2; i <= n; i+=2)
//			{
//				y2 += factorial(i);
//			}
//			for (int i = 1; i <= n-1; i+=2)
//			{
//				y1 += factorial(i);
//			}
//		}
//		else//奇数
//		{
//			for (int i = 1; i <= n; i+=2)
//			{
//				y1 += factorial(i);
//			}
//			for (int i = 2; i <= n-1; i+=2)
//			{
//				y2 += factorial(i);
//			}
//		}
//		printf("%d %d\n", y1, y2);
//	}
//	return 0;
//}
//
//1191: 日期问题
//int main()
//{
//	int year; int day;
//	while ((scanf("%d %d", &year, &day)) != EOF)
//	{
//		int arr[13] = { 0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			arr[2] = 29;
//		}
//		int i = 1;
//		for (;i < 13; i++)
//		{
//			if ((day - arr[i]) > 0)
//			{
//				day -= arr[i];
//			}
//			else
//			{
//				break;
//			}
//		}
//		printf("%d-%02d-%02d\n", year, i, day);
//
//	}
//	return 0;
//}
//1192: 守形数
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int m = n * n;
//		int signal = 0;
//		while (n % 10 != 0)
//		{
//			if ((m % 10) == (n % 10))
//			{
//				signal = 1;
//				n /= 10;
//				m /= 10;
//			}
//			else
//			{
//				signal = 0;
//				break;
//			}
//		}
//		if (signal == 1)
//		{
//			printf("YES!\n");
//		}
//		else
//		{
//			printf("NO!\n");
//		}
//	}
//	return 0;
//}
//1193: 判断算式是否正确。
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			int a = 0, b = 0, c = 0;
//			char ch;
//			scanf("%d%c%d=%d", &a, &ch, &b, &c);
//			if (ch == '+')
//			{
//				if ((a + b) == c)
//				{
//					printf("TRUE\n");
//				}
//				else
//				{
//					printf("FALSE\n");
//				}
//			}
//			if (ch == '-')
//			{
//				if ((a - b) == c)
//				{
//					printf("TRUE\n");
//				}
//				else
//				{
//					printf("FALSE\n");
//				}
//			}
//		}
//	
//	}
//	return 0;
//}
//1194: 字符串没有重复的字符
//int main()
//{
//	char arr[1000];
//	while ((gets(arr))!= NULL)
//	{
//		int k;
//		for (int i = 0; arr[i]; i++)
//		{
//			for (int j = i + 1; arr[j];)
//			{
//				if (arr[i] == arr[j])
//				{
//					for (k = j; arr[k]; k++)
//					{
//						arr[k] = arr[k + 1];
//					}
//				}
//				else
//				{
//					j++;
//				}
//			}
//		}
//		puts(arr);
//	}
//	return 0;
//}
//

//1195: 中文字符串没有重复的汉字
//int main()
//{
//	char arr[200][3];
//	//下面是循环读入每个汉字的两个字节
//	while ((scanf("%c%c", &arr[0][0],&arr[0][1])) != EOF)
//	{
//		int i = 1;
//		for ( ;1; i++)
//		{
//			scanf("%c", &arr[i][0]);
//			if (arr[i][0] == '\n')//当我们第一个位置读到换行后，跳出循环
//				break;
//			scanf("%c", &arr[i][1]);
//		}
//		//接下来是两层循环嵌套，两个字节字节的判断是否有相同的汉字
//		int h=0; 
//		for (h = 0; h < i; h++)
//		{
//			int k=0;
//			for (k = h+1; k < i; k++)
//			{
//				if (arr[h][0] == arr[k][0] && arr[h][1] == arr[k][1])
//				{
//					arr[k][0] = arr[k][1] = ' ';//如果有相同汉字把里面的字符改为空
//				}
//			}
//		}
//		//输出时，我们遇到空就跳过
//		int j=0;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[j][0] != ' ')
//			{
//				printf("%c%c", arr[j][0], arr[j][1]);
//			}
//			
//		}
//		printf("\n");
//
//	}
//}
//#include <stdio.h>
//#include <locale.h>
//#include <string.h>
//int main(char argv, char* args) {
//	setlocale(LC_ALL, "");
//	wchar s[256];
//	while (wscanf(L"%ls", s) != EOF)
//	{
//		for (int i = 0; s[i] != '\0'; i++)
//		{
//			for (int j = i + 1; s[j] != '\0'; j++)
//			{
//				if (s[i] == s[j])
//				{
//					s[j] = ' ';
//				}
//			}
//		}
//		for (int z = 0; s[z] != '\0'; z++)
//		{
//			if (s[z] != ' ')
//			{
//				printf("%lc", s[z]);
//			}
//		}
//		printf("\n");
//	}
//	//wscanf(L"%ls", s);    //输入
//	//wprintf(L"%lc", s[2]);    //输出
//	return 0;
//}
//int main()
//{
//	const char* arr[100];
//	while ((scanf("%s", arr[0])))
//	{
//
//	}
//}


//1196: 字符串中没有重复的中英文字符(3分)
//int main()
//{
//
//	return 0;
//}

//1197: 签到题
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int ret = rand() % 2;
//	if (ret == 1)
//	{
//		printf("Accepted\n");
//	}
//	else
//	{
//		printf("Wrong\n");
//	}
//	return 0;
//}
//1198: 压缩字符串
// 错误版
//int main()
//{
//	char arr[10000];
//	while ((gets(arr)) != EOF)
//	{
//		char ch = arr[0];
//		int count = 1;
//		for (int i = 1; arr[i-1] != '\0'; i++)
//		{
//			
//			if (arr[i] == ch)
//			{
//				count++;
//			}
//			else
//			{
//				
//				printf("%c%d", arr[i - 1], count);
//				if (arr[i] == '\0')
//					break;
//				ch = arr[i];
//				count = 1;
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 正确版
//int main()
//{
//	char arr[10000];
//	while ((gets(arr)) !=NULL)
//	{
//		char ch[100][3];
//		int temp = 0;
//		ch[temp][0] = arr[0];//先去一个字符
//		int count = 1;//已经有一个字符，默认计数开始为1
//		for (int i = 1; ; i++)
//		{
//			
//			if (ch[temp][0] == arr[i])//循环，判断字符的个数
//			{
//				count++;
//			}
//			else //如果不相等，说明有新的字符
//			{
//				ch[temp][1] =count+'0';//这里因为count是整形，而我用的是数字字符，所以让count存的数字转化为字符
//				if (arr[i] == '\0')//如果下一个字符是'\0'，就说明字符串走完了，跳出循环
//					break;
//				temp++;//这里存到二维数组的下一行，一行只存一组
//				ch[temp][0] = arr[i];//把新字符给存到二维数组
//				count = 1;//默认开始为1
//			}
//		}
//		//下面的代码是为了，判断是不是存在"ABC"这种，如果存在，按照题目要求输出ABC
//		int signal = 0;//定义一个变量来判断
//		for (int i = 0; i <= temp; i++)//判断二维数组里面存的是不是字符1，如果都是字符1，直接输出
//		{
//			if (ch[i][1] != '1')
//			{
//				signal = 1;
//				break;
//			}
//		}
//		if ((temp+1) * 2 == strlen(arr))
//		{
//			printf("%s\n",arr);
//		}
//		else
//		{
//			for (int i = 0; i <= temp; i++)
//			{
//				if (signal == 1)
//				{
//					printf("%c%c", ch[i][0], ch[i][1]);
//				}
//				else
//				{
//					printf("%c", ch[i][0]);
//				}
//			}
//			printf("\n");
//		}
//	
//
//	}
//	return 0;
//}
//1199: 字符串的旋转
//int main()
//{
//	char arr[150];
//	while ((scanf("%s",&arr)) !=EOF)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		for (int i = b; i < a; i++)
//		{
//			putchar(arr[i]);
//		}
//		for (int i = 0; i < b; i++)
//		{
//			putchar(arr[i]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}
//int main()
//{
//	char arr[150];
//	while ((gets(arr) )!= NULL)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		for (int i = b; i < a; i++)
//		{
//			putchar(arr[i]);
//		}
//		for (int i = 0; i < b; i++)
//		{
//			putchar(arr[i]);
//		}
//		printf("\n");
//		getchar();
//		//getchar();
//	}
//
//	return 0;
//}
//1200: 字符串的子串
//
//int main()
//{
//	char arr[55];
//	while ((gets(arr)) != NULL)
//	{
//		int sz = strlen(arr);
//		for (int i = sz; i > 0; i--)
//		{
//			for (int k = 0; k + i <=sz; k++)
//			{
//				int j = k;
//				for (; j < k+i; j++)
//				{
//					putchar(arr[j]);
//				}
//				putchar(' ');
//				
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//1201: 10进制转3进制
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int arr[100];
//		int i = 0;
//		while (n)
//		{
//			arr[i] = n % 3;
//			i++;
//			n /= 3;
//
//		}
//		for (int j = i - 1; j >= 0; j--)
//		{
//			printf("%d", arr[j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void kun(int n)
//{
//	if (n > 0)
//	{
//		kun(n / 3);
//		printf("%d", n % 3);
//	}
//	else
//	{
//		return;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	kun(n);
//}
// 
// 1202: Lucky 7 in the Pocket
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int arr[100];
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d", &arr[i]);
//			while(!(arr[i] % 7 == 0 && arr[i]%4 != 0))
//			{
//				arr[i]++;
//			}
//			printf("%d\n", arr[i]);
//			
//		}
//		
//	}
//	return 0;
//}
// 
// 
// 1203: 单词的缩写
//int main()
//{
//	char arr[100];
//	while ((gets(arr)) != NULL)
//	{
//		char ch[7] = { 'a','e','i','o','u','y'};
//		putchar(arr[0]);
//		for (int i = 1; arr[i] != '\0'; i++)
//		{
//			int signal = 0;
//			for (int j = 0; j < 6; j++)
//			{
//				if (arr[i]== ch[j])
//				{
//					signal = 1;
//					break;
//				}
//			}
//			if (signal != 1)
//			{
//				putchar(arr[i]);
//			}
//		}
//		putchar('\n');
//	}
//	return 0;
//}
// 1204: 字符串的大小 暂写

//int main()
//{
//	char arr[3][50];
//	while (scanf("%s", arr[0]) != EOF)
//	{
//		scanf("%s", arr[1]);
//		scanf("%s", arr[2]);
//		char* ps[3], * temp;
//		for (int i = 0; i < 3; i++)
//		{
//			ps[i] = arr[i];
//		}
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2 - i; j++)
//			{
//				if (strcmp(ps[j], ps[j+1]) < 0)
//				{
//					temp = ps[j];
//					ps[j] = ps[j + 1];
//					ps[j + 1] = temp;
//				}
//			}
//		}
//		printf("%s>%s>%s\n", ps[0], ps[1], ps[2]);
//	}
//	return 0;
//}
// 1205: 删除字符串末尾的0
//int main()
//{
//	char arr[100];
//	while ((gets(arr)) != NULL)
//	{
//		int sz = strlen(arr);
//		for (int i = sz - 1; arr[i]=='0'; i--)
//		{
//			arr[i] = '\0';
//		}
//		printf("%s\n", arr);
//	}
//	return 0;
//}

//1206: 删除字符串前面的0
//int main()
//{
//	char arr[100];
//	while (gets(arr) != NULL)
//	{
//		int i = 0;
//		while (arr[i] != '\0' &&arr[i]=='0')
//		{
//			i++;
//		}
//		for (int j = i; arr[j] != '\0'; j++)
//		{
//			printf("%c", arr[j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 
// 1207: 字符串的长度  
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str[3][101];
//	while (scanf("%s%s%s", &str[0], &str[1], &str[2]) != EOF)
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			for (int j = 0; j < 2 - i; j++)
//			{
//				if (strlen(str[j]) < strlen(str[j+1]))
//				{
//					char temp[101];
//					strcpy(temp, str[j]);
//					strcpy(str[j], str[j + 1]);
//					strcpy(str[j + 1], temp);
//				}
//			}
//		}
//		printf("%s>%s>%s\n", str[0], str[1], str[2]);
//	}
//	return 0;
//}
// 
// 
// 1208: 按降序输出日期
//struct mydate 
//{
//	int year;
//	int mon;
//	int day;
//};
//int compare(const void* a, const void* b)
//{
//	if ((((const struct mydate*)b)->year - ((struct mydate*)a)->year)!=0)
//	{
//		return ((const struct mydate*)b)->year - ((struct mydate*)a)->year;
//	}
//	else if ((((const struct mydate*)b)->mon - ((struct mydate*)a)->mon) != 0)
//	{
//		return ((const struct mydate*)b)->mon - ((struct mydate*)a)->mon;
//	}
//	else
//	{
//		return ((const struct mydate*)b)->day - ((struct mydate*)a)->day;
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		struct mydate date[50];
//	
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%d %d %d", &(date[i].year), &(date[i].mon), &(date[i].day));
//		}
//		qsort(date, n, sizeof(date[0]), compare);
//		for (int i = 0; i <n; i++)
//		{
//			printf("%d %d %d\n", (date[i].year), (date[i].mon), (date[i].day));
//		}
//	}
//	return 0;
//}
// //使用qsort()函数按年龄排序结构体
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////创建结构体
//struct Stu
//{
//	char name[20];
//	int age;
//};
////compar_按年龄排序
//int compar_Stu_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int main()
//{
//	struct Stu s[3] = { {"zhangsan",20} ,{"lisi",30},{"wangmazi",25} };
//	size_t num = sizeof(s) / sizeof(s[0]);
//	size_t sz = sizeof(s[0]);
//
//	qsort(s, num, sz, compar_Stu_age);
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s,%d\n", s[i].name, s[i].age);
//	}
//	return 0;
//}
// 
// 1209: 时间的显示
//struct mytime
//{
//	char hour[3];
//	char min[3];
//	char sec[3];
//};
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		getchar();
//		struct mytime s[10];
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s:%s:%s", &s[i].hour, &s[i].min, &s[i].sec);
//			s[i].hour[2] = s[i].min[2] = s[i].sec[2] = '\0';
//		}
//		for (int i = 0; i < n; i++)
//		{
//			if (atoi(s[i].hour) < 12)
//				printf("%d:%d:%d AM\n", atoi(s[i].hour), atoi(s[i].min), atoi(s[i].sec));
//			else
//				printf("%d:%d:%d PM\n", atoi(s[i].hour)-12, atoi(s[i].min), atoi(s[i].sec));
//		}
//	}
//	return 0;
//}
// 1210: 最高分是谁
//struct stu
//{
//	char name[9];
//	int m_sco, y_sco, e_sco;
//};
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		struct stu s[100];
//		int  sum[100] = { 0 };
//		getchar();
//		for (int i = 0; i < n; i++)
//		{
//			scanf("%s%d%d%d", &s[i].name, &s[i].m_sco, &s[i].y_sco, &s[i].e_sco);
//			sum[i] = (s[i].m_sco) + (s[i].y_sco) +(s[i].e_sco);
//		}
//		int max[1][2];
//		max[0][0] = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (max[0][0] < sum[i])
//			{
//				max[0][0] = sum[i];
//				max[0][1] = i;
//			}
//		}
//		printf("%s\n", s[max[0][1]].name);
//
//	}
//
//	return 0;
//}
// 1222: 输出下面的字符串
// 方法一：
//int main()
//{
//	printf("I love this \"game\"!");
//}
// 
// 1223: 10进制 to 8进制和16进制
//int eight(int n)
//{
//	if (n > 0)
//	{
//		
//		eight(n / 8);
//		printf("%d", n % 8);
//		
//	}
//	else
//	{
//		return;
//	}
//}
//int sixteen(int n)
//{
//	char arr[] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
//	if (n > 0)
//	{
//		
//		sixteen(n / 16);
//		printf("%c", arr[n % 16]);
//	}
//	else
//	{
//		return;
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	eight(n);
//	printf(",");
//	sixteen(n);
//
//}
// 方法二：
// #include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%o ", n);
//	printf("%x\n", n);
//
//	return 0;
//}
//1224: 输出正整数，零，负整数
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	if (n > 0)
//	{
//		putchar('+');
//	}
//	else if(n<0)
//	{
//		putchar('-');
//	}
//	else
//	{
//		putchar('0');
//	}
//	return 0;
//}

//1225: x天后是星期几
//int main()
//{
//	int n = 0;
//	char* arr[] = { "0", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六","星期日"};
//	scanf("%d", &n);
//	printf("%s\n", arr[(n + 1) % 7 +1]);
//	return 0;
//}
// 
// #include <stdio.h>
//int main()
//{
//	int n = 0;
//	char* arr[] = { "星期日", "星期一", "星期二", "星期三", "星期四", "星期五", "星期六" };
//	while (scanf("%d", &n) != EOF)
//	{
//		printf("%s\n", arr[(n + 2) % 7]);
//	}
//
//	return 0;
//}
// 
// 1226: 按降序输出
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int temp;
//	if (a < b) {
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c) {
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c) {
//		temp = b;
//		b = c;
//		c = temp;
//	}
//
//	// 输出降序排列的三个整数
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//	
//
//}
// 
// 1227: 时间是：几点几分
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int hour = ((n + 31) / 60 + 14) % 24;
//	int minute = (n + 31) % 60;
//	printf("%d点%d分\n", hour, minute);
//	return 0;
//}
// 
// 1228: 奇数还是偶数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 0)
//		printf("EVEN\n");
//	if (n % 2 == 1)
//		printf("ODD\n");
//	return 0;
//}
// 
// 1229: 输出x的倍数
//int main()
//{
//	int n;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int i = n;
//		for (; i <= 100; i+=n)
//		{
//			if (i % n == 0)
//			{
//				printf("%d", i);
//			}
//			if (i + n <= 100)
//			{
//				printf(",");
//			}
//		}
//	
//		printf("\n");
//	}
//	return 0;
//}
// 
// 1230: 求1/2+2/3+3/5+5/8 . . .共100项的和
//int main()
//{
//
//	double sum = 0.0;
//	int n = 1, m = 2;
//	for (int count = 1; count <= 100; count++)
//	{
//		
//		sum += n*1.0 / m;
//		int temp = n;
//		n = m;
//		m += temp;;
//		
//	}
//	printf("%.5lf\n", sum);
//	
//	return 0;
//}
// 
// 1231: 输出三角形-3
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = i; j <= n; j++)
//			{
//				printf("*");
//				if (j != n)
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
// 
// 1232: 输出三角形-4
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <=2*n-2*i ; j++)
//			{
//				printf(" ");
//			}
//			for (int k = 1; k <=i ; k++)
//			{
//				printf("*");
//				if (k !=i)
//				{
//					printf(" ");
//				}
//			}
//			
//			printf("\n");
//		}
//	}
//	return 0;
//}
 
//1233: 求1 + 1/2 + 1/3 + 1/4 + 1/5 . . + 1/100 共100项的和
//int main()
//{
//	int n = 1;
//	double sum = 0.0;
//	for (; n <= 100; n++)
//	{
//		sum += 1.0 / n;
//	}
//	printf("%.5lf\n", sum);
//	return 0;
//}
// 
// 1234: 输出下面的句子
//int main()
//{
//	printf("a common danger causes common action.\n");
//	printf("---- \" 同舟共济，武汉加油!”\n");
//	return 0;
//}
// 
// 1235: 四则运算（20分）
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d + %d = %d\n", a, b, a + b);
//	printf("%d - %d = %d\n", a, b, a - b);
//	printf("%d * %d = %d\n", a, b, a * b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	return 0;
//
//}
// 
// 1236: 求商和余数
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d / %d = %d\n", a, b, a / b);
//	printf("%d %c %d = %d\n", a,'%', b, a % b);
//	return 0;
//}
// 
// 1237: 大写英文字母的变换
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	if (ch + 6 > 90)
//	{
//		printf("%c\n", ch-20);
//	}
//	else
//		printf("%c\n", ch + 6);
//	return 0;
//}
// 
// 1238: 输出一个3位整数的逆数

//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		while (n % 10 == 0)
//		{
//			n /= 10;
//		}
//		while (n)
//		{
//			printf("%d", n % 10);
//			n /= 10;
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
// 
// 1239: 求时间差
//int main()
//{
//	int a, b, c, d;
//	scanf("%d:%d", &a, &b);
//	scanf("%d:%d", &c, &d);
//	if (d - b < 0)
//	{
//		printf("%d\n", (c - a - 1) * 60 + 60 + d - b);
//	}
//	else
//	{
//		printf("%d\n", (c - a) * 60 + d - b);
//	}
//	return 0;
//}
// 
// 1240: 输出字符的ASCII码值
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	printf("%d\n", ch);
//	return 0;
//}
// 
// 1241: 输出无符号整数
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%u\n", a);
//	return 0;
//}
// 
// 1242: 时间格式的转换：H-->HH
//int main()
//{
//	int a, b, c;
//	scanf("%d:%d:%d", &a, &b, &c);
//	printf("%02d:%02d:%02d", a, b, c);
//}
// 1244: 是哪种三角形--1
// int main()
//{
//
//	int a, b, c;
//	while((scanf("%d %d %d", &a, &b, &c))!=EOF)
//	{
//		
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
// 1245: A+B 输入输出练习I
//int main()
//{
//	int a, b;
//	while ((scanf("%d %d", &a, &b)) != EOF)
//	{
//		printf("%d\n", a + b);
//	}
//	
//	return 0;
//}
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 
// 1249: 输出中间的一个数
//int main()
//{
//	char arr[1000][100];
//	int i = 1;;
//	while ((scanf("%s", &arr[0])) != EOF)
//	{
//		
//		while ((scanf("%s", &arr[i])) != EOF)
//		{
//			if (arr[i] == '\n')
//				break;
//			i++;
//		}
//	
//	}
//
//	return 0;
//}

//1250: 输出一行文字
//int main()
//{
//	printf("\"衡量一个人的真正品格, 是看他在知道没有人会发觉的时候做什么.\"___孟德斯鸠");
//	return 0;
//}
//
////#include <stdio.h>
//int main()
//{
//	char arr[150];
//	while ((gets(arr)) != EOF)
//	{
//		int a, b;
//		scanf("%d %d", &a, &b);
//		for (int i = b; i < a; i++)
//		{
//			putchar(arr[i]);
//		}
//		for (int i = 0; i < b; i++)
//		{
//			putchar(arr[i]);
//		}
//		//printf("\n");
//		//getchar();
//		//getchar();
//	}
//	return 0;
//}
//1252: python中的汉字
//#include <stdio.h>
//int main()
//{
//	printf("中文\0​");
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
// 1267: 比特字符串的变换
//void swap(char*a, char* b)
//{
//	char temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		char arr[100][51];
//		getchar();
//		for (int i = 0; i < n; i++)
//		{
//			fgets(arr[i], 100, stdin);
//		}
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; arr[i][j] != '\n'; j += 2)
//			{
//				swap(&arr[i][j], &arr[i][j + 1]);
//			}
//			for (int k = 0; arr[i][k] != '\n'; k++)
//			{
//				printf("%c", arr[i][k]);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
// 1268: 加法
//int main()
//{
//	int n, m;
//	int count = 1;
//	while ((scanf("%d,%d", &n, &m)) != EOF)
//	{
//		printf("#%d:%d\n",count, n + m);
//		count++;
//	}
//	return 0;
//}
//1271: 问候语
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		if (n >= 0 && n < 12)
//		{
//			puts("GOOD MORNING!");
//		}
//		else if (n >= 12 && n < 18)
//		{
//			puts("GOOD AFTERNOON!");
//		}
//		else
//			puts("GOOD EVENING!");
//	}
//	return 0;
//}
//1272: 美丽数
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int count=0;
//		int i = 1;
//		while (count != n)
//		{
//			if (i % 3 == 0 || i % 5 == 0)
//			{
//				count++;
//			}
//			i++;
//		}
//		printf("%d\n", i-1);
//	}
//}
//void print(int **s)
//{
//	int b = 10;
//	*s =&b ;
//	printf("*s=%d\n", *s);
//}
//int main()
//{
//	int a = 5;
//	int* p = &a;
//	*p = 25;
//	print(&p);
//	printf("*p=%d\n", *p);
//	return 0;
//}
//void print(int s)
//{
//	int b = 10;
//	s =&b ;
//	printf("*s=%d\n", *s);
//}
//int main()
//{
//	int a = 5;
//	int* p = NULL;
//	print(p);
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct LNode {
//	int stnumber;
//	int score;
//	struct LNode* next;
//
//} LNode, * LinkList;
//
//void CreateList(LinkList &phead, int n) {
//	LinkList p = phead;
//	while (p->next) {
//		p = p->next;
//	}
//	for (int i = 0; i < n; i++) {
//		LinkList s = (LinkList)malloc(sizeof(LNode));
//		p->next = s;
//		scanf("%d %d", &s->stnumber, &s->score);
//		s->next = NULL;
//		p = p->next;
//	}
//}
//void InitList(LinkList &L) {
//	L = (LinkList)malloc(sizeof(LNode));
//	L->next = NULL;
//}
//void MergeList_L(LinkList &La, LinkList& Lb, LinkList& Lc) {
//	LinkList pa = La->next;
//	LinkList pb = Lb->next;
//	LinkList pc;
//	Lc = pc = La;
//	while (pa && pb) {
//		if (pa->stnumber <= pb->stnumber) {
//			pc->next = pa;
//			pc = pa;
//			pa = pa->next;
//
//		}
//		else {
//			pc->next = pb;
//			pc = pb;
//			pb = pb->next;
//		}
//	}
//	pc->next = pa ? pa : pb;
//}
//
//void print(LinkList  &Lc) {
//	LinkList p = Lc->next;
//	while (p != NULL) {
//		printf("%d %d\n", p->stnumber, p->score);
//		p = p->next;
//	}
//}
//
//void DestroyList(LinkList &L) {
//	LinkList pp = L;
//	while (pp) {
//		L = L->next;
//		free(pp);
//		pp = L;
//	}
//}
//
//
//
//int main() {
//	int n, m;
//	scanf("%d %d", &n, &m);
//	LinkList La, Lb, Lc;
//	InitList(La);
//	InitList(Lb);
//	CreateList(La, n);
//	CreateList(Lb, m);
//	MergeList_L(La, Lb, Lc);
//	print(Lc);
//	DestroyList(La);
//	DestroyList(Lb);
//	DestroyList(Lc);
//	return 0;
//}