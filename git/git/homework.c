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

//int main()
//{
//	int n = 0;
//	printf("������ɼ����ܸ���(1~10000):");
//	scanf("%d", &n);
//	int arr[10000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%3d", &arr[i]);
//	}
//	int max = 0;
//	int min = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[max] < arr[i])
//		{
//			max = i;
//		}
//		if (arr[min] > arr[i])
//		{
//			min = i;
//		}
//		
//	}
//	int ret = arr[max] - arr[min];
//	printf("��ֵΪ��%d", ret);
//	return 0;
//}

//��Сдת��  Ҫ�󣺶�������
////������
//int main()
//{
//	char ch = 0;
//	char n = 0;
//	char i = 0;
//	scanf("%c\n", &ch);
//	scanf("%c\n", &n);
//	scanf("%c", &i);
//	if (ch >= 'a' && ch <= 'z' )
//	{
//		printf("%c\n", ch - 32);
//
//	}
//	else if(ch >= 'A' && ch <= 'Z')
//	{
//		printf("%c\n", ch + 32);
//	}
//	if (n >= 'a' && n <= 'z')
//	{
//		printf("%c\n", n - 32);
//	}
//	else if (n >= 'A' && n <= 'Z')
//	{
//		printf("%c\n", n + 32);
//	}
//	if (i >= 'a' && i <= 'z')
//	{
//		printf("%c\n", i - 32);
//	}
//	else if (i >= 'A' && i <= 'Z')
//	{
//		printf("%c\n", i + 32);
//	}
//	return 0;
//}

////���ܰ�
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)==1)
//	{
//		//Ҫ���ÿ⺯��<stdlib.h> and <ctype.h>
//		if (ch >= 'a' && ch <= 'z')//�жϴ�Сд�������ÿ⺯��islower/isupper
//		{
//			printf("%c\n", ch - 32);//ת����Сд����ʹ�ÿ⺯��tolower/toupper
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}

////�ж��ǲ�����ĸ
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		//ͷ�ļ�<ctype.h>
//		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)//�ж��ǲ�����ĸislpha
//		{
//			printf("%c is  the alphabet.\n", ch);
//		}
//		else if (ch >= 48 && ch <= 57)
//		{
//			printf("%c is the number.\n", ch);
//		}
//		getchar();//getchar()��Ϊ�˴�����������Ļ���/n
//	}
//	return 0;
//}

////��߷�����
//int main()
//{
//	int arr[3] = { 0 };
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%3d", &arr[i]);
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	int max = arr[0];
//	printf("��߷�Ϊ��%3d\n", max);
//	return 0;
//}

////ˮ�ɻ�����λ�����������ˮ�ɻ���
// 1461 = 1 * 461 + 14 * 61 + 146 * 1
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000; i < 99999; i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 1; j <= 4; j++)
//		{
//			int n = (int)pow(10, j);
//			sum += (i % n) * (i / n);
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//
//	return 0;
//}

////дһ���������ض���������ĸ���
//////����һ��
//int is_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)//���n%2==1��֤��n�Ķ�����λ���һλ��1
//		{
//			count++;
//		}
//		n /= 2;//����������n���������һλ����ȥ����ǰ�������λ
//	}
//	return count;
//}
//////��������
//int is_count(int n)
//{
//	int count = 0;
//	for(int i=0;i<32;i++)//����32λ�Աȣ��ж���䣬�ж�λ1��count+1
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////��������
//int is_count(int n)
//{
//	int count=0;
//	//���Ǽ���n=5,��5&4��������λ0101&0100=0100��
//	//����4&3��������0100&0011=0000��
//	//������n&(n-1����ѭ�������Σ���5����պ�������1���������ǿ������ô˷����������ζ����������1�ĸ���
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = is_count(num);
//	printf("%d", ret);
//	return 0;
//}

//�ж�һ�����ǲ���2�Ĵη�
//���ǿ������ö������ж�
//2^11 0010
//2^2 0100
//2^3 1000
//if((n&(n-1))==0)
//
////���������������ж϶��������ж��ٸ�λ����ͬ
//int is_count(int m, int n)
//{
//	int count = 0;
//	int a = m ^ n;//����^������,��ͬΪ0������ͬΪ1��Ȼ�������ټ���1������
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d,%d", &m, &n);
//	int ret = is_count(m, n);
//	printf("%d\n", ret);
//	return 0;
//}

////�ֱ��ӡ�����Ƶ�����λ����ż��λ
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	//����λ
//	for (i = 0; i <32; i += 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	//ż��λ
//	for (j = 1; j<=32; j+=2)
//	{
//		printf("%d ", (a >> j) & 1);
//	}
//	return 0;
//}
//int i;//����ʼ����Ĭ��Ϊ0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//����i=-1��sizeof(i)=4
//	//�������ߵ����Ͳ�һ�����ᷢ������������-1���Ϊһ���ܴ�����������ԣ�if����ִ��
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

////��ӡx
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < a; i++)
//	{
//		for (j = 0; j < a; j++)
//		{
//			if (j == i)
//			{
//				printf("*");
//			}
//			else if (i + j ==  a - 1)
//			{
//				printf("*");
//			}
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////��������ĳһ�꣬ĳһ�µ�����
//int is_year(int n)
//{
//	if ((0 == n % 4 && n % 100 != 0) || (0 == n % 400))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	int arr[13] = { 0,31,28,31,30,31,30,31,30,31,30,31,30 };
//	int ret =is_year(x);
//	if (ret == 1)
//	{
//		arr[2] = 29;
//		printf("%d\n", arr[y]);
//	}
//	else
//	{
//		printf("%d\n", arr[y]);
//	}
//	return 0;
//}

////�������������ж��ܲ�����������Σ��ȱ������Σ����������Σ���ͨ������
//int main()
//{
//	int arr[3] = { 0 };
//	printf("�������������֣�");
//	scanf("%d %d %d", &arr[0], &arr[1], & arr[2]);
//	if (arr[0] + arr[1] > arr[2] && arr[0] + arr[2] > arr[1] && arr[2] + arr[1] > arr[0] )
//	{
//		printf("������������Σ�����\n");
//	}
//	if ( arr[0] == arr[1] && arr[1] == arr[2])
//	{
//		printf("��ɵ��ǵȱ������Σ�����");
//	}
//	else if (arr[0] == arr[1] || arr[0] == arr[2] || arr[2] == arr[1])
//	{
//		printf("��ɵ��ǵ��������Σ�����");
//	}
//	else
//	{
//		printf("��ɵ�����ͨ�����Σ�����");
//	}
//	return 0;
//}

////дһ��������ӡarr��������ݣ������������±꣬ʹ��ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int n = 0; n < sz; n++)
//	{
//		printf("%d ", *(p + n));
//	}
//	return 0;
//}

//дһ����������ȡ�ַ����������򣬿��������ַ���������
////����һ��ð������
//#include<stdio.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	gets(arr);
//	int sz = strlen(arr);
// 	int n = 0;
//	for (n = 0; n < sz - 1; n++)
//	{
//		int i = 0;
//		for (i = 0; i < sz -1 - n; i++)
//		{
//			char tmp = arr[i];
//			arr[i] = arr[i+1];
//			arr[i+1] = tmp;
//		}
//	}
//	printf("%s", arr);
//	return 0;
//}
////�����������ҶԵ�
//#include<stdio.h>
//int main()
//{
//	char arr[1001] = { 0 };
//	gets(arr);
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tep = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tep;
//		left++;
//		right--;
//	}
//	printf("%s", arr);
//	return 0;
//}

////��ǰ5��֮�ͣ�����n�������a������a��ǰn��֮��
////���磺Sn=a+aa+aaa+aaaa+aaaaa
// ���磺2��22=2*10+2��222=22*10+2��
// �ɾ�����֪����һ�������һ��*10+2
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("�������������֣�");
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int b = 0;
//	for (int i = 0; i < n; i++)
//	{
//		b = a + 10 * b;
//		sum += b;
//	}
//	printf("%d", sum);
//	return 0;
//}


////��ӡ0~10000֮�����е�ˮ�ɻ���  ������������λ�����磺153=1*3+5*3+3*3
//#include<math.h>
//int is_count(int m)
//{
//	int n = 1;
//	while (m / 10)
//	{
//		n++;
//		m /= 10;
//	}
//	return n;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int ret = is_count(i);
//		int sum = 0;
//		int tmp = i;
//		while (tmp) 
//		{
//			sum += (int)pow(tmp%10, ret);
//			tmp /= 10;
//		}
//		if (sum==i)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	
//	return 0;
//}

////��ӡ����ˮ�ɻ���
////1461 = 1 * 461 + 14 * 61 + 146 * 1
//int main()
//{
//	int i = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		
//		int j = 5;
//		int sum = 0;
//		for (j = 1; j < 5; j++)
//		{
//			int n = 0;
//			n = (int)pow(10, j);
//			sum += (i / n) * (i % n);
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
// 
// 
// 
////��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	//ȷ����ӡ�ϰ벿�ֵ�����
//	for (i = 0; i < line; i++)
//	{
//	//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)//�ӵ�һ�п�ʼ���ո�Ĵ�ӡ�����𽥱���
//		{
//			printf(" ");
//		}
//	//�Ǻ�
//		for (j=0;j<(2*i)+1; j++)
//		{
//			printf("*");
//		}
//	//��ӡһ�ź���
//		printf("\n");
//	}
//	//��
//	int x = 0;
//	for (x = 0; x < line - 1; x++)
//	{
//		int y = 0;
//		//�ո�
//		for (y = 0; y < x + 1; y++)//��ӡ������Ŀո�
//		{
//			printf(" ");
//		}
//		//�Ǻ�
//		for (y=0;y<2*line-3-x*2;y++)//��ӡ�𽥼��ٵ��Ǻ�
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//////����ˮ���⣬1Ԫ1ƿ��2����ƿ�һ�һƿ��ˮ
//int main()
//{
//	int money = 0;
//	printf("���������Ǯ����");
//	scanf("%d", &money);
//	//����һ��
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = (empty / 2) + (empty % 2);
//	}
////	//��������
////	if (money > 0)
////	{
////		printf("%d\n", money);
////	}
////	else
////	{
////		printf("%d\n", 0);
////	}
////	
//	printf("%d\n", total);
//	return 0;
//}

// //����С�Ĺ�����
//int main()
//{
//	int x = 0;
//	int y = 0;
//	
//	printf("������������");
//	scanf("%d %d", &x, &y);
//	int a = x;
//	int b = y;
//	int ret = x % y;
//	while (ret > 0)
//	{
//		x = y;
//		y = ret;
//		ret = x % y;
//	}
//	printf("��С��������%d ",a*b/y );
//	printf("��С��������%d ",y );
//
//	return 0;
//}

//
////�����ӡ�ַ�
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int sz = strlen(arr);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			char tmp = arr[j];
//			arr[j] = arr[j+1];
//			arr[j+1] = tmp;
//		}
//	}
//	printf("%s\n", arr);
//	return 0;
//}
//

////���ӳ������⡣���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬������񫣬�ֶ����һ����
//// �ڶ�����. ���ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ��һ�����Ժ�ÿ�����϶�����ǰһ��ʣ�µ�һ����һ����
//// ����N���� �����ٳ�ʱ����ֻʣ��-�������ˡ����һ�칲ժ�������ӡ�
//int main()
//{
//	int n = 0;
//	int count = 1;
//	scanf("%d", &n);
//	for (int i = 0; i <n-1; i++)
//	{
//		count =2*(count+1);
//
//	}
//	printf("%d", count);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//void lable(char s[])
//{
//    int len = strlen(s);
//    int a[len];
//    int b = 0;
//    for(int i = 0;i<len;i++)
//    {
//        if(s[i] == '(')
//        {
//            a[b] = i;
//            b++;
//        }
//        if(s[i] == ')')
//        {
//            if(b>0)
//            {b--;}
//            else if(b==0)//�ؼ�else if
//            {s[i]='?';}
//        }
//    }
//    while(b>0)
//    {
//        int c = a[--b];//�ؼ�--ǰ��
//        s[c] = '$';
//    }
//    for(int j = 0;j<len;j++)
//    {
//        if(s[j]!='$' && s[j] != '?')
//        {
//            s[j] = ' ';
//        }
//    }
//}
//int main()
//{
//    char s[101];
//    while(scanf("%s",s) != EOF)
//    {
//        printf("%s\n",s);
//        lable(s);
//        printf("%s\n",s);
//    }
//    return 0;
//}
//
////
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
