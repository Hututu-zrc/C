#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//д���뽫���������Ӵ�С���
//void Swap(int* px,int *py)
//{
//	int tem = *px;
//	*px=*py;
//	*py = tem;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a <= b)
//	{
//		Swap(&a, &b);
//	}
//	if (a <= c)
//	{
//		Swap(&a, &c);
//	}
//	if (b <= c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//�������������Լ��
//1.0�汾
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d", m);
//	return 0;
//}

//2.0�汾(շת�ദ��)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int m = min;
//	int c = 0;
//	while (c=a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}

//��ӡ1000~2000��֮�������
//int main()
//{
//	int i = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400 == 0 || i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%4d ", i);
//		}
//	}
//	return 0;
//}

////��ӡ100~200֮�������
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j==i)
//		{
//			printf("%d ",i);
//			
//		}
//
//	}
//	return 0;
//}

////��д������һ�£�1~100֮���ж��ٸ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

////����1/1-1/2+1/3-1/4+1/5-1/6...+1/99-1/100��ֵ
//int main()
//{
//	double sum = 0;
//	int i = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum +flag*(1.0/ i);
//		flag = -flag;
//	}
//	printf("%1f\n",sum);
//	return 0;
//}

////��10���е����ֵ
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,-2,3,4,5,6,7,11,9,10 };
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//
//	return 0;
//}

//����Ļ�����9*9�ĳ˷��ھ���
//�Լ�д�İ汾
//int main()
//{
//	int a = 1;
//	int b = 1;
//
//	for (a = 1; a < 10;a++)
//	{
//		for (b = 1; b < 10; b++)
//		{
//
//			printf("%d*%d=%d ",a,b,a*b);
//		
//		}
//		printf("\n");
//
//	}
//	return 0;
//}

//���װ�
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d���Ҷ��룬�����Ļ��ÿո��룬"%-2d"�������
//		}
//		printf("\n");
//	}
//	return 0;
//}

////��������Ϸ
// #define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
// void menu()
//{
//	printf("******************************\n");
//	printf("******    1. play        *****\n");
//	printf("******    0. exit        *****\n");
//	printf("******************************\n");
//}
// void game()
//{
//
//	 int guess = 0;
//	 int ret = rand() % 100 + 1;
//	 while (1)
//	{
//		printf("���������������֣�");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
// int main()
// {
//	 srand((unsigned int) time(NULL));
//	 int input = 0;
//	 
//	 do
//	 {
//		 menu();
//		 printf("���������ѡ��", input);
//		 scanf("%d", &input);
//		 switch (input)
//		 {
//		 case 1:
//			game();
//			break;
//		 case 0:
//			printf("�˳���Ϸ!\n");
//			break;
//		 default:
//			printf("�밴�涨���룡����\n");
//			break;
//		}
//	 } while (input);
//	 return 0;
//}


////���ֲ���ĳ����������������±꣬��������±꣬�Ҳ�����������Ҳ���
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//Ҳ����д��int mid = left+(right-left)/2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else 
//		{
//			printf("�±�Ϊ��%d\n", mid);
//			break;
//		}
//			
//	}
//	if (left > right)
//	{
//		printf("�Ҳ����±�");
//	}
//	return 0;
//}

////������������ֵ
//void swap(int* px, int* py)
//{
//	int tem = *px;
//	*px = *py;
//	*py = tem;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("�������������֣��м��ÿո����):");
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d b=%d",a,b);
//	return 0;
//}
//

//��ӡ�˷��ھ��������Լ�����
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("���������֣���ӡ��Ӧ�ĳ˷��ھ���");
//	scanf("%d", &n);
//	for (i = 1; i < n+1; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d���Ҷ��룬�����Ļ��ÿո��룬"%-2d"�������
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��ӡһ��������ÿһλ�����õݹ����ʽ��
#include<math.h>
//��һ��
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	printf("�������ӡ�����֣�");
//	scanf("%s", arr);
//	int sz=strlen(arr);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//
//}

//������
//int main()
//{
//	int a = 0;
//	printf("���������֣�");
//	scanf("%d",&a);
//	while (a)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}

//������
//void print(int x)
//{
//	if (x > 9)
//	{
//		print(x/10);
//	}
//	printf("%d ", x%10);
//}
//int main()
//{
//	int a = 0;
//	printf("���������֣�");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//��ӡ�׳�
//�ǵݹ�汾
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("����������׳˵����֣�");
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	
//	return 0;
//
//}
//�ݹ�汾
//int fac(int n)
//{
//	int ret = 1;
//	if (n >= 1)
//	{
//		ret = n * fac(n - 1);
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	printf("����������׳˵����֣�");
//	scanf("%d", &n);
//	fac(n);
//	printf("�׳�Ϊ:%d", fac(n));
//	return 0;
//}

////strlen��ģ��ʵ��
////�ǵݹ�ķ���
//int Strlen(char arr[])
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count ++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//
//	int i = 0;
//	char arr[20] = {0};
//	printf("�������ַ���:");
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("����Ϊ��%d\n", ret);
//	return 0;
//}

//strlenģ�⣬�ݹ鷨
//int Strlen(char arr[])
//{
//	if (*arr != '\0')
//	{
//		return 1 + Strlen(arr+1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	char arr[20] = {0};
//	printf("�������ַ���:");
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("����Ϊ��%d\n", ret);
//	return 0;
//}


////�����ӡ
//int main()
//{
//	char arr[] = { "adafsdfsdfsfs"};
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = length; i>0 ; i--)
//	{
//		printf("%c", arr[i]);
//	}
//	return 0;
//}

//������
//�ǵݹ�汾
//void reverse(char arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 2;
//	while (left < right)
//	{
//		char tep = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tep;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = { "abcdefg" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//sizeof�����ַ�������ʱ�򣬻����ȥ\0
//	//���ԣ�����Ҫ�ȼ�ȥһ��1���ټ�ȥһ��1���õ����һ���ַ����±�
//	reverse(arr,sz);
//	printf("%s\n",arr);
//	return 0;
//}

////�ݹ�汾1.0  �࿴����˼��
//#include<string.h>
//void reverse(char arr[])//����������Ԫ�ز�ͣ�ĵ�����ֱ���ݹ����
//{
//	char tmp = '\0';//���ȴ���һ���յ��ַ�����
//	tmp = *arr;//����һ��Ԫ�طŵ��յ��ַ���������
//	int len = strlen(arr);//��Ϊ�ַ������㳤�Ȱ���'\0',��������Ҫ��������ĳ��ȼ�һ
//	*arr = *(arr+len-1);//�����һ��Ԫ�طŵ���һ������ȥ
//	*(arr + len - 1) = '\0';//��ΪҪ���еݹ飬�������һ��λ�÷��Ͽ��ַ���������������еݹ�
//	if (strlen(arr+1) >= 2)//�趨��������������������ݹ���ַ�����Ҫ����2��
//		reverse(arr +1);//������Ԫ�ص����󣬽�������Ԫ�صĵݹ�
//	*(arr + len - 1) = tmp;//�����Ǵ�������ʱ������Ԫ�طŻ����һ��Ԫ�ص�λ��
//}
//// �ݹ�汾2.0
// void reverse(char arr[],int left ,int right)
//{
//
//	if (left < right)
//	{
//		char tep = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tep;
//		reverse(arr, left+1, right-1);
//	}
//}
//int main()
//{
//	char arr[] = { "abcdef" };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 2;
//	reverse(arr,left,right);
//	printf("%s\n",arr);
//	return 0;
//}

////дһ��DigitSum��������������֣�һ��һ��������������������Ľ��
//int DigitSum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	printf("���������֣�");
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d",sum);
//	return 0;
//}

//���õݹ�ʵ��n��k�η�
//double Pow(int n,int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if (k < 0)
//	{
//		return 1.0 / Pow(n, -k);
//	}
//	else
//		return 1;
//	
//	
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("�����������Լ�Ҫ��Ĵη����м�ʹ�ÿո�ֿ���");
//	scanf("%d %d", &n,&k);
//	double ret = Pow(n,k);
//	printf("%.3f", ret);
//	return 0;
//}

////С������̨��,һ����һ�׻��߶��ף����ж������Ϸ�
////��������ֻ��һ��̨�׵�ʱ��ֻ��һ���Ϸ��� ��������̨�׵�ʱ�� �������Ϸ� 
////����������10��̨�ף���������һ�ף�����ʣ���Ϸ�Ϊfib(9)
////��������2��̨��ʱ������ʣ���Ϸ�Ϊfib(8)
////����ֻ����1������2��������n>=2ʱ������fib(n)=fib(n-1)+fib(n-2)
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	if (n >= 2)
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������̨����(1~30)��");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

////��һ���������У�ɾ�����е�ָ�����������ı�����������λ��
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//�������������������������
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);//�����������У������������з�����������
//	}
//	int del = 0;
//	scanf("%d", &del);//����������Ҫɾ����Ԫ��
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//			//����ѭ���������������ȣ����ǰ�Ԫ�ط���arr[j];
//			//�����ȣ�������i++������һ�����������del��������ʣ�µ�Ԫ�ط���arr[j]���ﵽɾ��ָ��Ԫ�ص�Ч��
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//������Ԫ��
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int n = 0;
	printf("������ɼ����ܸ���(1~10000):");
	scanf("%d", &n);
	int arr[10000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%3d", &arr[i]);
	}
	int max = 0;
	int min = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[max] < arr[i])
		{
			max = i;
		}
		if (arr[min] > arr[i])
		{
			min = i;
		}
		
	}
	int ret = arr[max] - arr[min];
	printf("��ֵΪ��%d", ret);
	return 0;
}