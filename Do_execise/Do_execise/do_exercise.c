#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
////1000 ���һ����Ϣ
//int main()
//{
//	printf("This is a C program.\n");
//	return 0;
//}

////1001 �������֮�ͣ��������ߵĺ�֮ǰ�����sum is ����
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("sum is %d\n", x + y);
//	return 0;
//}

////1002 ���������������Ƚϴ�С�������max=����֮������ϴ��ֵ��
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d,%d", &x, &y);
//	printf("max=%d\n", x > y ? x : y);
//	return 0;
//}
////1003: ��д��������ı�
//int main()
//{
//	printf("******************************\n");
//	printf("Very good!\n");
//	printf("******************************\n");
//	return 0;
//}
////1004: �������������������max = ����֮���������ֵ��
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

////1005: ���2�����ĳ˻�������
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d#%d", &x, &y);
//	printf("%d,%d,%d\n", x * y, (int)pow(x, 3), (int)pow(y, 3));
//	return 0;
//}

////1006: ����ʽ�ĺ�
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

////1007: �Ƿ�������(15��)
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

////1008: ����10�����������������������
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
////1009: ��1+2+3+.....+n�ĺ͡�
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

////1010: ���100��200֮�����������
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

////1011: ��������������m��n������m��n�����Լ��
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

//1012: �����������
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

////1013: ���һ��ʮ���������İ˽��ƺ�ʮ�����Ʊ�ʾ��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%o ", n);
//	printf("%x\n", n);
//
//	return 0;
//}

//1014: �ַ��ļ���
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

////1015: ����ʽ��ֵ
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

////1016: ���㼸��
////����һ��
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

////��������
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
////1018: ������ʽ��ֵ-1
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d\n", (int)pow(x, 3) + 3 * x + 5);
//
//	return 0;
//}

////1019: ������ʽ��ֵ-2
//int main()
//{
//	double a,b;
//	scanf("%lf", &a);
//	printf("%.3lf\n", cos(a) + sin(a));
//	return 0;
//}

////1020: ���������ַ���-1
//int main()
//{
//	char a[] = "I love \"this game\"! ";
//	printf("%s\n", a);
//	return 0;
//}

////����2��������#�����������2�������ĺ͡�
//int main()
//{
//	int a, b;
//	scanf("%d#%d", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}

////1023: �� a-b
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%d\n", a - b);
//	return 0;
//}

////1026: ��a/b����С�����3λ
//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	printf("%.3lf\n", (double)a / b);
//	return 0;
//}

////1027: ���ڼ���
//int main()
//{
//	int N, M;//N�����ڣ�M������
//	scanf("%d %d", &N, &M);
//	char* arr[] = { "������", "����һ", "���ڶ�", "������", "������", "������", "������" };
// //һά���鲻�ܴ�Ŷ���ַ���
//	int X = (N + M)%7;
//	printf("%s\n", arr[X]);
//	return 0;
//}

////1028: ���������ε����߳���ʹ�ú��׹�ʽ���������ε����
//int main()
//{
//	double a, b, c, p, s;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	p = (a + b + c) / 2;
//	s = p * (p - a) * (p - b) * (p - c);
//	printf("%.2lf\n", pow(s, 0.5));
//	return 0;
//}

////1030: �ַ���ת��
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

////1031: ����xֵ�������Ӧ��yֵ��
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

////1032: ����ɼ��ȼ���A���� ��B���� ��C���� ��D���� ��E��
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

//////1033: ���뵱��������Ӧ���Ž�������
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

////1034: ����һ���ַ����ж��Ƿ���������
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

//1035: ��ʽ���
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

//////1036: ��ĸ����
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
//			if (alp == arr[i])//ȡ��ÿ��Ԫ�ؽ��жԱ�
//			{
//				count++;
//			}
//		}
//		 double ret = count / st;
//		printf("%.5lf\n", ret);
//	}
//	return 0;
//}
////1038: �����ꡢ�¡��գ���������ڵ������ǵڼ���
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

////1037: 500��ǰ��һ��(5��)
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
//#define MAX_N 10
//
//int isRelated(int parent[], int a, int b) {
//    int x = a;
//    int y = b;
//    while (parent[x] != x) {
//        x = parent[x];
//    }
//    while (parent[y] != y) {
//        y = parent[y];
//    }
//    if (x == y) {
//        return 0;  // ͬ��
//    }
//    else if (x == a) {
//        return 1;  // a��b�ĳ���
//    }
//    else if (y == a) {
//        return -1;  // a��b����
//    }
//    return 0;  // �������㣬˵��û��������ϵ
//}
//
//int main() {
//    int N;
//    while (scanf("%d", &N) != EOF) {
//        int parent[21];  // �洢ÿ���˵ĸ��ױ��
//        int i;
//        for (i = 0; i <= 20; i++) {
//            parent[i] = i;  // ��ʼ�����ױ�ţ��Լ����Լ��ĸ���
//        }
//
//        for (i = 0; i < N; i++) {
//            int a, b;
//            scanf("%d%d", &a, &b);
//            parent[a] = b;  // ���ø��ӹ�ϵ
//        }
//
//        int result = isRelated(parent, 1, 2);
//        if (result == 1) {
//            printf("You are my elder\n");
//        }
//        else if (result == -1) {
//            printf("You are my younger\n");
//        }
//        else {
//            printf("You are my brother\n");
//        }
//    }
//    return 0;
//}

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

int main()
{
	int a, b;
	scanf("%d,%d", &a, &b);
	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}