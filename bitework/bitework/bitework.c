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
//    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to
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
////��һά���顿����10����������ƽ��ֵ
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

////KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵ�X��ͼ����
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
//KiKiѧϰ��ѭ����BoBo��ʦ��������һϵ�д�ӡͼ������ϰ���������Ǵ�ӡ�á�*����ɵġ����ġ�������ͼ����
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
//����KiKi��һ����������֪��ת�ú�ľ��󣨽���������л����õ����¾����Ϊת�þ��󣩣����̰������
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
//����10��������Ҫ������ʱ���������10������ӡ������������������ǰ��������෴��˳���ӡ��10������
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

////�����������������
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

//�������еĺϲ�
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

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
////ʵ�ֺ����ж�year�ǲ������ꡣ
//int main()
//{
//	int year;
//	while (scanf("%d", &year) != EOF)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//			printf("����\n");
//		else
//			printf("������\n");
//	}
//	
//	return 0;
//}

//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
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
////ʹ�ú���ʵ���������
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
////дһ�����ֲ��Һ���
////���ܣ���һ�����������в���ָ������ֵ���ҵ��˾ͷ����±꣬�Ҳ����ͷ��� - 1.
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

//����ˮ����
//////����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���
////ʵ���Ͼ������̺���ģ������
//int main()
//{
//	int money;
//	printf("���������Ǯ����");
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

////�������
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
////��ӡˮ�ɻ���
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
///��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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


//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
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

//�ݹ�ʵ��n��k�η�
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


////�ݹ�ʵ�ֽ׳�
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
//�ǵݹ�ʵ�ֽ׳�
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

////����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
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

////��ӡһ������ÿһλ
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


//��ӡ���������Ƶ�����λ��ż��λ
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("ż��λΪ��");
//	for (int i = 1; i < 8; i += 2)
//	{
//		printf("%d ", n >> i & 1);
//	}	
//	printf("\n");
//	printf("����λΪ��");
//	for (int i = 0; i < 8; i += 2)
//	{
//		printf("%d ", n >> i & 1);
//	}
//	printf("\n");
//	return 0;
//}

//
////��������ʱ��������������
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

//��������������1
//���ַ�����
//1.��λ
//2.ģ��2
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


//��������ҵ
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

//��һ�����������У�ֻ��һ�����ֳ���һ�Σ��������鶼�ǳɶԳ��ֵģ�
// ���ҳ��Ǹ�ֻ����һ�ε����֡�
//���磺
//�������У�1 2 3 4 5 1 2 3 4��ֻ��5����һ�Σ��������ֶ�����2�Σ��ҳ�5
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