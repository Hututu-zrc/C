#define _CRT_SECURE_NO_WARNINGS
#include"Head.h"
//C���Ե�һ����ҵ
////A	���������ַ���-2
//int main()
//{
//	printf("I love \\t this \\bgame \\n !\\n");
//	return 0;
//}
// 
////B	���һ��С�����컨��͵ذ�
//int main()
//{
//	double a = 0;
//	scanf("%f", &a);
//	printf("%d\n", (int)a + 1);
//	printf("%d\n", (int)a);
//	return 0;
//}

////���� C: ��a/b ������С��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a / b);
//}

////���� D: ����һ����д��ĸ�������Ӧ��Сд��ĸ
//int main()
//{
//	char a = { 0 };
//	scanf("%c", &a);
//	printf("%c\n", a + 32);
//	return 0;
//}
// 
////���� E : �����������������������������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a % b);
//	return 0;
//}

////���� F: N�º��Ǽ���
// ���ٰ�
//int mian()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print("%d\n", (n + 2) % 12 + 1);
//	return 0;
// }
//int main()
//{
//	int N = 0;
//	int a = 0;
//	int i = 0;
//	scanf("%d", &N);
//	if (N < 10)
//	{
//		printf("%d\n", 3 + N);
//	}
//	else if (N >= 10)
//	{
//		a = N % 12;
//		if (a >= 10)
//		{
//			printf("%d\n", a - 9);
//		}
//		else
//		{
//			printf("%d\n", a + 3);
//		}
//	}
//	return 0;
//}

//C���Եڶ�����ҵ

////���� A: ����һ���ַ����ж��Ƿ���������
//int main()
//{
//	char ch = { 0 };
//	scanf("%c", &ch);
//	if (ch >= '0' && ch <= '9')
//	{
//		printf("YES\n");
//	}
//	else
//	{
//		printf("NO\n");
//	}
//}
//���� B: ��д��������x�����y
//
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	if (x <= 5)
//	{
//		printf("%d\n", x * x + 3 * x - 4);
//	}
//	else
//	{
//		printf("%d\n", x * x - 5 * x + 7);
//	}
//	
//	return 0;
//}
////���� C: �����������
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = a > b ? a : b;
//	ret = ret > c ? ret : c;
//	printf("%d\n", ret);
//	return 0;
//}
//���� D: �Ƿ�����.
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("L\n");
//	}
//	else
//	{
//		printf("N\n");
//	}
//	return 0;
//}
//���� E: ����Ҵ�д-1
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	char arr[10][5] = { "��","Ҽ","��","��","��","��","½","��","��","��" };
//	char arr1[4][5] = {"ʰ","��","��","Ԫ"};
//	if (N < 10 && N>=0)
//	{
//		printf("����ң�%s%s%s\n", arr[N],arr1[3],arr1[2]);
//	}
//	else if (N == 10)
//	{
//		printf("����ң�%s%s%s\n", arr1[0], arr1[3], arr1[2]);
//	}
//	else if (N % 10 == 0)
//	{
//		printf("����ң�%s%s%s%s\n", arr[N / 10], arr1[0], arr1[3], arr1[2]);
//	}
//	
//	else if (N < 100 && N > 10 && N%10!=0)
//	{
//		printf("����ң�%s%s%s%s%s\n",arr[N/10],arr1[0],arr[N%10],arr1[3],arr1[2]);
//	}
//	
//	return 0;
//}
// 
// ////����F�����ڵĴ�С
//#include <stdio.h>
//int main()
//{
//    int year, month, day;
//    int year1, month1, day1;
//    scanf("%d-%d-%d", &year, &month, &day);
//    scanf("%d-%d-%d", &year1, &month1, &day1);
//    if (year1 > year)
//    {
//        printf("%d-%d-%d\n", year1, month1, day1);
//    }
//    else if (year == year1)
//    {
//        if (month1 > month)
//        {
//            printf("%d-%d-%d\n", year1, month1, day1);
//        }
//        else if (month1 == month)
//        {
//            if (day1 > day) 
//            {
//                printf("%d-%d-%d\n", year1, month1, day1);
//            }
//            else
//            {
//                printf("%d-%d-%d\n", year, month, day);
//            }
//        }
//        else
//        {
//            printf("%d-%d-%d\n", year, month, day);
//        }
//    }
//    else
//    {
//        printf("%d-%d-%d\n", year, month, day);
//    }
//    return 0;
//}
// ���� G: ����ҵĴ�д
//int main()
//{
//	int num = 0;
//	char arr1[10][5] = { "��","Ҽ","��","��","��","��","½","��","��","��" };
//	char arr2[5][5] = {"ʰ","��","Ǫ","��","Ԫ"};
//	while (scanf("%d", &num) != EOF)
//	{
//		if (num % 100 == 0)
//		{
//			printf("%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1],arr2[4], arr2[3]);
//		}
//		else if ((num /10) % 10 == 0)
//		{
//			printf("%s%s%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1], arr1[(num / 10) % 10], arr1[num%10], arr2[4], arr2[3]);
//		}
//		else if (num % 10 == 0)
//		{
//			printf("%s%s%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1], arr1[(num / 10) % 10], arr2[0], arr2[4], arr2[3]);
//		}
//		else
//		{
//			printf("%s%s%s%s%s%s%s\n", arr1[(num / 10) / 10], arr2[1], arr1[(num / 10) % 10], arr2[0], arr1[num % 10], arr2[4], arr2[3]);
//		}
//	}
//	return 0;
//}
//
////����H��	2019��1��1�������ڶ���2019��x��y�������ڼ�
//int main()
//{
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int month, day,ret;
//	int sum = 0;
//	scanf("%d,%d", &month, &day);
//	for (int i = 1; i < month; i++)
//	{
//		sum += arr[i];
//	}
//	ret = (sum + day )%7;
//	switch (ret + 1)
//	{
//		case 0:
//			printf("Sunday");
//			break;
//		case 1:
//			printf("Monday");
//			break;
//		case 2:
//			printf("Tuesday");
//			break;
//		case 3:
//			printf("Wednesday");
//			break;
//		case 4:
//			printf("Thursday");
//			break;
//		case 5:
//			printf("Friday");
//			break;
//		case 6:
//			printf("Saturday");
//			break;
//
//
//	}
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int  ten, one;
//	int N = 0;
//	const char* D[] = { "","Ҽ","��","��","��","��","½","��","��","��" };
//	ten = N / 10;
//	one = N % 10;
//	scanf("%d", &N);
//	if (N % 10 == 0) {
//		printf("����ң�%sʰԪ��", D[ten]);
//	}
//	else {
//		printf("����ң�%sʰ%sԪ��", D[ten], D[one]);
//	}
//
//}
//#include <stdio.h>
//
//int main() {
//    int N, ten, one;
//
//    // ���ִ�д��
//    const char* num[] = { "", "Ҽ", "��", "��", "��", "��", "½", "��", "��", "��" };
//    scanf("%d", &N);
//
//    ten = N / 10;  // ʮλ����
//    one = N % 10;  // ��λ����
//
//    printf("����ң�");
//
//    if (ten > 0) {  // ʮλ���ֲ�Ϊ0ʱ
//        printf("%sʰ", num[ten]);
//    }
//
//    if (one == 0) {  // ��λ����Ϊ0ʱ
//        printf("Ԫ��");
//    }
//    else {
//        printf("%sԪ��", num[one]);
//    }
//
//    return 0;
//}
///
//C���Ե�������ҵ
//���� A: ���һ������������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		if (n % 10 != 0)
//		{
//			break;
//		}
//		else
//			n /= 10;
//		
//		
//	}
//	while (n)
//	{
//		printf("%d", n % 10); n /= 10;
//	}
//	
//	return 0;
//}
//���� B: 1�ĸ���
//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n)) != EOF)
//	{
//		int count = 0;
//		for (int m = 1; m <= n; m++)
//		{
//			int i = m;
//			while (i)
//			{
//				if (i % 10 == 1)
//				{
//					count++;
//				}
//				i /= 10;
//			}
//		}
//		printf("%d\n", count);
//	}
//	return 0;
//}
//���� C: 1970��1��1���������ģ�x��y��z�������ڼ�
//#include <stdio.h>
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
//	int total = (daysum + sum + day + 2) % 7 + 1;
//
//	printf("%s\n", ch[total]);
//	//printf("%d", sum);
//	return 0;
//}
//���� D: ������������
//#include <stdio.h>
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
//
//���� E: count characters
//int main()
//{
//	int n = 0;
//	while ((getchar()) != EOF)
//	{
//		n++;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//���� F: ��ӵ���
//#include <stdio.h>
//
//int main()
//{
//	int T = 0;
//	while ((scanf("%d", &T)) != EOF)
//	{
//		int arr[100];
//		int max, max_num;
//		for (int i = 0; i < T; i++)
//		{
//			scanf("%d", &arr[i]);//��ȡ�����
//			max = 0;//����Լ��
//			max_num = 0;//Լ������
//			for (int j = 1; j <= arr[i]; j++)//ÿ��������1��arr[i]
//			{
//				int count = 0;
//				
//				//����Լ��
//				for (int k = 1; k <= j; k++)
//				{
//					if (j % k == 0)
//					{
//						count++;
//					}
//				}
//				if (max_num < count)
//				{
//					max_num = count;
//					max = j;
//				}
//			}
//			printf("%d %d\n", max, max_num);
//		}
//		
//	}
//	return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	while (scanf("%d", &year) != EOF)
//	{
//		int start_year = 1900;
//		int start_week = 1;
//		int count1 = 0;
//		int count2 = 0;
//		for (int i = 1900; i <= year - 1; i++)
//		{
//			if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//			{
//				count1++;
//			}
//		}
//		int new_week = (year - start_year + count1 + start_week - 1) % 7 + 1;
//		int s = 365;
//		int arr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			s = 366;
//			arr[1] = 29;
//		}
//		for (int i = 1; i <= s - 1; i++)
//		{
//			int sign1 = (new_week + i - 1) % 7 + 1;
//			int sign2;
//			int sum = 0;
//			int x = 0;
//			for (int j = 0; j < 12; j++)
//			{
//				if (j > 0)
//				{
//					x += arr[j - 1];
//				}
//				sum += arr[j];
//				if (1 + i <= sum)
//				{
//					break;
//				}
//			}
//			sign2 = (i + 1 - x);
//			if (sign1 == 5 && sign2 == 13)
//			{
//				count2++;
//			}
//		}
//		if (count2 > 0)
//		{
//			printf("%d\n", count2);
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//	return 0;
//}


//2022��C���Ե��Ĵ���ҵ
//���� A: �ַ����ֵĴ���
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
// 
////���� B : �ַ����ַ����г��ֵ�λ��
//int main()
//{
//	char arr[101];
//	while ((fgets(arr,101,stdin)) != NULL)
//	{
//		char ch;
//		scanf("%c", &ch);
//		int i = 0,signal=0;
//		while (arr[i] != '\0')
//		{
//			if (ch == arr[i])
//			{
//				printf("%d ", i);
//				signal = 1;
//			}
//			i++;
//				
//		}
//		if (signal == 0)
//		{
//			printf("NULL");
//		}
//		printf("\n");
//		getchar();
//	}
//	return 0;
//}
//
//���� C: ɾ���ַ���ĩβ��0
//int main()
//{
//	char arr[100];
//	while ((gets(arr)) != NULL)
//	{
//		int sz = strlen(arr);
//		for (int i = sz - 1; i >= 0; i--)
//		{
//			if (arr[i] != '0')
//				break;
//			arr[i] = '\0';
//		}
//		puts(arr);
//	}
//	return 0;
//}
//
//���� D: ɾ���ַ���ǰ���0
//int main()
//{
//	char arr[100];
//	while ((gets(arr)) != NULL)
//	{
//		int sz = strlen(arr);
//		while (arr[0] == '0')
//		{
//			for (int j = 0; arr[j] != '\0'; j++)
//				arr[j] = arr[j + 1];
//		}
//		puts(arr);
//	}
//	return 0;
//}
//
//���� E: �ַ����Ĵ�С
//#include <stdio.h>
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
//				if (strcmp(ps[j], ps[j + 1]) < 0)
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
//
//���� F : �����ַ���
//#include<string.h>
//#include <stdio.h>
//int main()
//{
//	char arr[101];
//	while ((gets(arr)) != NULL)
//	{
//		int singal = 0;
//		for (int i = 0; arr[i] != '\0'; i++)
//		{
//			if (!(isdigit(arr[i])))
//			{
//				puts("NO");
//				singal = 1;
//				break;
//			}
//		}
//		if(singal==0)
//			puts("YES");
//	}
//	return 0;
//}
//
//���� G: �Ƿ���������֤����
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[50];
//	while((gets(arr)) != NULL)
//	{
//		int signal = 0;
//		int sz = strlen(arr);
//		if (sz != 18)
//		{
//			puts("NO");	signal = 1;
//			goto again;
//		}
//		for (int i = 0;i<sz-2; i++)
//		{
//			if (!(isdigit(arr[i])))
//			{
//				
//				puts("NO"); signal = 1;
//				break;
//			}	
//		}
//		if (!((isdigit(arr[17])) || arr[17] == 'X' || arr[17] == 'x'))
//		{
//			puts("NO"); signal = 1;
//		}
//		again:
//		if (signal == 0)
//			puts("YES");
//	}
//	return 0;
//}

//ħ��������  �ܲ�����
// 
//int main()
//{
//	int arr[3][3];
//	for (int i = 123456789; i <= 987654321; i++)
//	{
//		arr[2][2] = i % 10; arr[2][1] = i % 100; arr[2][0] = i % 1000;
//		arr[1][2] = i % pow(10, 4);arr[1][1] = i % pow(10, 5);arr[1][0] = i % pow(10, 6);
//		arr[0][2] = i % pow(10, 7);arr[0][1] = i % pow(10, 8);arr[0][0] = i % pow(10, 9);
//		if(arr[0][0]+arr[0][1]+arr[0][2]== arr[1][0]+ arr[1][1]+ arr[1][2] &&
//			arr[2][0] + arr[2][1] + arr[2][2] == arr[1][0] + arr[1][1] + arr[1][2] &&
//			arr[0][0] + arr[0][1] + arr[0][2] == arr[2][0] + arr[2][1] + arr[2][2] &&
//			arr[0][0]+arr[1][0]+arr[2][0]== arr[0][1] + arr[1][1] + arr[2][1] &&
//			arr[0][2]+arr[1][2]+arr[2][2]== arr[0][1] + arr[1][1] + arr[2][1] &&
//			arr[0][2]+arr[1][2]+arr[2][2]== arr[0][0] + arr[1][0] + arr[2][0] &&
//			arr[0][0]+arr[1][1]+arr[2][2]==arr[0][2]+arr[2][2]+arr[0][1] &&
//			arr[0][0] + arr[1][1] + arr[2][2]== arr[0][0] + arr[0][1] + arr[0][2]
//			)
//			for (int j = 0; j < 3; j++)
//			{
//				for (int k = 0; k < 3; k++)
//				{
//					printf("%d", arr[j][k]);
//				}
//				printf("\n");
//			}
//
//	}
//	return 0;
//}

//���� A: ��������ż��
//int Judge(int n)
//{
//	if (n % 2 == 0)
//		return n % 2;
//	else
//		return n % 2;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Judge(n);
//	if (ret == 0)
//		printf("EVEN\n");
//	else
//		printf("ODD\n");
//	return 0;
//}

//���� B: ��������������m��n������m��n�����Լ��
//int Max(int n, int m)
//{
//	int temp;
//	do
//	{
//		temp = n % m;
//		n = m;
//		m = temp;
//	} while (temp);
//	return n;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int ret = Max(n, m);
//	printf("%d\n", ret);
//}


//���� C: �Ƿ�������(15��)4
//#include <stdio.h>
//#include <math.h>
//void Prime(int n)
//{
//	int signal = 0;
//	for (int i = 2; i <n; i++)
//	{
//		if (n % i == 0)
//		{
//			puts("not prime");
//			signal = 1;
//			break;
//		}
//	}
//	if (signal == 0)
//		puts("prime");
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	Prime(n);
//	return 0;
//}

//���� D: ����
//void Sum(int n)
//{
//	int sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (n % i == 0)
//			sum += i;
//	}
//	if (sum == n)
//		puts("YES");
//	else
//		puts("NO");
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		Sum(n);
//	}
//	return;
//}

//���� E : ���ڵ�����
//int Prime(int n)
//{
//	int signal = 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			signal = 1;
//			return 0;
//			break;
//		}
//	}
//	if (signal == 0)
//		return n;
//}
//int main()
//{
//	int n;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = n - 1; i >= 2; i--)
//		{
//			if (Prime(i) != 0)
//			{
//				printf("%d<", i);
//				break;
//			}
//		}
//		for (int j = n + 1; j; j++)
//		{
//			if (Prime(j) != 0)
//			{
//				printf("%d<%d\n", n, j);
//				break;
//			}
//		}
//	}
//	return 0;
//}
