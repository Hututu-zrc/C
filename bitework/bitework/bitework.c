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

//�ַ�������
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

////ʵ��һ�����������������ַ����е�k���ַ���
////���磺
////ABCD����һ���ַ��õ�BCDA
////ABCD���������ַ��õ�CDAB
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

//ģ��ʵ��strlen()����
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

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά����
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

////ʵ��һ�������������ð������
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


////��������ʹ����ȫ����λ��ż��ǰ�档
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
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
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

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
// ���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N)
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
//			puts("��������");
//			break;
//		}
//	}
//	if(signal)
//		puts("����������");
//	return 0;
//}
//
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�

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

//����Ļ�ϴ�ӡ������ǡ�
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




////���ں���ָ��ĸ���
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
//		printf("��ѡ����Ҫ���еĲ�����");
//		scanf("%d", &input);
//		if (input == 0)
//			exit(0);
//		printf("�������������");
//		int a, b;
//		scanf("%d %d", &a, &b);
//		printf("%d\n", pf[input](a, b));
//		
//	} while(input);
//	return 0;
//}

// //����qsort�����ά����
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
//	struct Stu stu[] = { {"zhuruncai",15,"��"},{"liyichen",18,"��"},{"hujin",19,"��"} };
//	int sz = sizeof(stu) / sizeof(stu[0]);
//	qsort(stu, sz, sizeof(stu[0]), compare2);
//	for(int i=0;i<sz;i++)
//		printf("%s %d %s\n", stu[i].name, stu[i].age, stu[i].sex);
//	return 0;
//}

//��������
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

////����·�
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

//�жϻ����Ĵ�С��
//union Un 
//{
//	int a;
//	char b;
//}un;
//int main()
//{
//	un.a=1;
//	if(un.b==1)
//		puts("С��");
//	else if(un.b==0)
//		puts("���"); 
//	return 0;
// } 
//

////strstr �ĸ���
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

////ģ��ʵ��strcmp
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
//		puts("��ͬ");
//	else if(My_strcmp(arr,arr1)>1)
//		puts("��һ�������");
//	else
//		puts("�ڶ��������"); 
//	return 0;
// } 
//
//

////ģ��ʵ��strcat
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

////ģ��ʵ��strstr
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
//	//����ط�������ֱ�Ӹ�ֵ��ptr����Ϊ���ܻ�����ʧ��
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
////������������
////ע����������Ҫ�������һ��
////����һ
//typedef struct ST
//{
//	int num;
//	int arr[];
//}st;
//int main()
//{
//	int sz1 = sizeof(st);
//	st* s = (st*)malloc(sizeof(st) + sizeof(int) * 10);
//	//�������飬ǰ�濪�ٵ��ǽṹ��Ŀռ䣬���濪�ٵľ�����������Ŀռ�
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

//������
//typedef struct ST
//{
//	int n;
//	int* arr;
//}st;
//int main()
//{
//	st* s = (st*)malloc(sizeof(st));
//	//���������ǶԽṹ�������ָ����ж�̬����
//	s->arr = (int*)malloc(sizeof(int) * 10);
//	//��������������ж�̬�ڴ���ͷ�Ҫ��������
//	free(s->arr);
//	s->arr = NULL;
//	free(s);
//	s = NULL;
//	return 0;
//}

//����atoi�ĸ���
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


//#define Max 100  //ע�⣺������define����ı�ʶ��
////��ʶ�������滻�Ķ���֮���м��
//#define Square(x) ((x)*(x))  //������define�����
////���Square(x) ֮����û�пո�ģ�����пո񣬾ͱ���˶����ʶ��
//int main()
//{
//	//int max = Max;
//	//printf("%d\n", max);
//	int r = Square(5); printf("%d\n", r);
//	
//	int r2 = Square(5 + 1);//����ĺ�����ȱ�ݵģ�������ȥ�ı�����ֱ�ӵ��������ܼ���ʽ��
//	//������� Square(5+1) ; 5+1*5+1=11;
//	//���ǿ��ԶԺ�����޸� ��Ϊ#define Square(x) ((x)*(x))
//	//����Ĵ�����Ҳ���ô� ���磺define Doubel(x) (x)+(x)
//	// 10*Double(x)=10*(x)+(x) ���ǵļ���˳���ǻ��� ���ԣ�Ӧ�� #define Double(x) ((x)+(x)) 
//	printf("%d\n", r2);
//	return 0;
//}
//
//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");//���������ַ������Ժϲ�Ϊһ���ַ���
//	//��C��������֧������д��
//}

//
//#define Print(N) printf("the value of "#N" is %d\n",N)
////����#N���԰����Ǵ�������N������ַ�����Ȼ��������������Ķ���ַ������������ԭ��
////�����Դﵽ������Ҫ��Ч��
//int main()
//{
//	int a = 10; int b = 20;
//	printf("the value of a is %d\n", a);
//	printf("the value of b is %d\n", b);
//	//���������޷����ú���ʵ�֣���������ʹ��#defineʵ��
//	Print(a);
//	Print(b);
//	return 0;
//}
//



// 
////����##��ʹ��
//#define CAT(hu,bei) hu##bei
////##���԰�λ�������ߵķ��źϳ�һ������
////������궨��ӷ�����ı�Ƭ�δ�����ʶ��
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
////����
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
//// ��������Ľ����һ������
//int main()
//{
//	printf("%p\n", &(un.i));
//	printf("%p\n", &(un.c));
//	//��������Ľ����ʲô��
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//	return 0;
//}


//#include<stdio.h>
//int main() {
//	int i = 0;
//	printf("����ˮ�ɻ�����");
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
//		if (i == sum) //�жϲ�ֺ�˻�֮���Ƿ��������
//		{
//			printf("%d ", i);
//
//		}
//	}
//	return 0;
//}


////����ˮ�ɻ���
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


////ɾ��ָ������
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

//ʹ���������֪ʶ���жϻ����Ĵ�С��

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
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}

//���鴮��
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

////malloc,calloc,realloc,free������ʹ��
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
//malloc���ɶ�ά���飬���ַ���
//����һ��ֱ�ӿ��ٿռ䣬������ģ���ά����
// ��������ֻ��ģ��ʵ�֣������ϻ���һ��һά���飬ֻ�������ն�ά�������ʽ���з���
//int main()
//{
//  int row, col;
//  printf("���������������������Ÿ�������");
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


//ʹ�ö���ָ�뿪��row��һά���飬Ȼ���ÿ��һλ���鿪��col���ռ�
//int main()
//{
//	int row, col;
//	printf("���������������������Ÿ�������");
//	scanf("%d %d", &row, &col);
//	int** p = (int**)malloc(sizeof(int*) * row);
//	//�����ǿ���row��һά���飬��ʼ��ַ������ָ��p
//	for (int i = 0; i < row; i++)
//		p[i] = (int*)malloc(sizeof(int) * col);
//	//��ÿ��һά���飬����col��
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

////ʹ������ָ���ʾ��ά���飬�������Ϊ3��5�еĶ�ά����
//int main()
//{
//	int(*p)[5] = (int(*)[5])malloc(sizeof(int) * 3 * 5);
//	//��仰����˼���ǿ���һ��6��int���ڴ�ռ䣬Ȼ����ת��Ϊ����ָ���͵ĵ�ַ
//	//int (*p)[5]��ʾ�ľ��� ��һ��������Ԫ�ص�һά���飬�����������15/5=3,��3�еĶ�ά����
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
//    int** a;  //�ö���ָ�붯̬�����ά����  
//    int i, j;
//    int m, n;
//    printf("����������\n");
//    scanf("%d", &m);
//    printf("����������\n");
//    scanf("%d", &n);
//    a = (int**)malloc(sizeof(int*) * m);
//    for (i = 0; i < m; i++)
//        a[i] = (int*)malloc(sizeof(int) * n);
//    for (i = 0; i < m; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            printf("%p\n", &a[i][j]);     //���ÿ��Ԫ�ص�ַ��ÿ�е�������֮��ĵ�ַʱ�����ģ�������֮��ĵ�ַ������
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
////���ڶ�ά����ָ������������
//int main()
//{
//	int arr[3][3] = { 0,8,2,3,4,5,6,7,8 };
//	printf("%d\n", *(*(arr)+1));
//	int* p = &(*(arr+1));
//	int(*pf)[3] = &(*(arr + 1));
//	return 0;
//}

////���������ļ���ʵ���ļ��ĸ���
//int main()
//{
//	FILE* pf = fopen("D:\\����\\data.txt", "r");
//	assert(pf);
//	FILE* p = fopen("D:\\����\\data_copy.txt", "w");
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
////����const����ָ�����
//int main()
//{
//	int num = 10;
//	int variable = 20;
//	const int* p = &num;
//	//����������Ϊconst int (*p),���Ǳ�֤����(*p)�����Ա�����
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
//	//����������Ϊint * const (p),���Ǳ�֤����(p)�����Ա�����
//	//*p=20; OK
//	//p=&variable; err
//	printf("%d\n", *p);
//	*p = 20;
//	printf("%d\n", *p);
//
//	return 0;
//}


//���ڵ���
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