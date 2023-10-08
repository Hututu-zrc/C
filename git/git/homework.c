#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//写代码将三个整数从大到小输出
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

//求两个数的最大公约数
//1.0版本
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

//2.0版本(辗转相处法)
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

//打印1000~2000年之间的闰年
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

////打印100~200之间的素数
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

////编写程序数一下，1~100之间有多少个9
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

////计算1/1-1/2+1/3-1/4+1/5-1/6...+1/99-1/100的值
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

////求10数中的最大值
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

//在屏幕上输出9*9的乘法口诀表
//自己写的版本
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

//进阶版
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d是右对齐，不够的话用空格补齐，"%-2d"是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

////猜数字游戏
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
//		printf("请输入你猜想的数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小啦\n");
//		else if (guess > ret)
//			printf("猜大啦\n");
//		else
//		{
//			printf("猜对了\n");
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
//		 printf("请输入你的选择：", input);
//		 scanf("%d", &input);
//		 switch (input)
//		 {
//		 case 1:
//			game();
//			break;
//		 case 0:
//			printf("退出游戏!\n");
//			break;
//		 default:
//			printf("请按规定输入！！！\n");
//			break;
//		}
//	 } while (input);
//	 return 0;
//}


////二分查找某个整形有序数组的下标，有则输出下标，找不到则输出：找不到
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//也可以写成int mid = left+(right-left)/2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else 
//		{
//			printf("下标为：%d\n", mid);
//			break;
//		}
//			
//	}
//	if (left > right)
//	{
//		printf("找不到下标");
//	}
//	return 0;
//}

////交换两个数的值
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
//	printf("请输入两个数字（中间用空格隔开):");
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("a=%d b=%d",a,b);
//	return 0;
//}
//

//打印乘法口诀表，行列自己决定
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入数字，打印相应的乘法口诀表：");
//	scanf("%d", &n);
//	for (i = 1; i < n+1; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);//%2d是右对齐，不够的话用空格补齐，"%-2d"是左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//打印一个整数的每一位（采用递归的形式）
#include<math.h>
//法一：
//int main()
//{
//	int i = 0;
//	char arr[20] = { 0 };
//	printf("请输入打印的数字：");
//	scanf("%s", arr);
//	int sz=strlen(arr);
//	for (i = 0; i <= sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//
//}

//法二：
//int main()
//{
//	int a = 0;
//	printf("请输入数字：");
//	scanf("%d",&a);
//	while (a)
//	{
//		printf("%d ", a % 10);
//		a = a / 10;
//	}
//	return 0;
//}

//法三：
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
//	printf("请输入数字：");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//打印阶乘
//非递归版本
//int main()
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入想求阶乘的数字：");
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
//递归版本
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
//	printf("请输入想求阶乘的数字：");
//	scanf("%d", &n);
//	fac(n);
//	printf("阶乘为:%d", fac(n));
//	return 0;
//}

////strlen的模拟实现
////非递归的方法
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
//	printf("请输入字符串:");
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("长度为：%d\n", ret);
//	return 0;
//}

//strlen模拟，递归法
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
//	printf("请输入字符串:");
//	scanf("%s", arr);
//	int ret = Strlen(arr);
//	printf("长度为：%d\n", ret);
//	return 0;
//}


////逆序打印
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

//逆序存放
//非递归版本
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
//	//sizeof计算字符串长度时候，会算进去\0
//	//所以，我们要先减去一个1，再减去一个1，得到最后一个字符的下标
//	reverse(arr,sz);
//	printf("%s\n",arr);
//	return 0;
//}

////递归版本1.0  多看，多思考
//#include<string.h>
//void reverse(char arr[])//最外层的两个元素不停的调换，直至递归完毕
//{
//	char tmp = '\0';//首先创建一个空的字符变量
//	tmp = *arr;//将第一个元素放到空的字符变量里面
//	int len = strlen(arr);//因为字符串计算长度包含'\0',所以下面要用算出来的长度减一
//	*arr = *(arr+len-1);//将最后一个元素放到第一个里面去
//	*(arr + len - 1) = '\0';//因为要进行递归，所以最后一个位置放上空字符串，方便下面进行递归
//	if (strlen(arr+1) >= 2)//设定限制条件。条件是里面递归的字符数量要大于2个
//		reverse(arr +1);//最外层的元素调整后，进行里面元素的递归
//	*(arr + len - 1) = tmp;//将我们储存在临时变量的元素放回最后一个元素的位置
//}
//// 递归版本2.0
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

////写一个DigitSum函数把输入的数字，一个一个加起来，，再输出最后的结果
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
//	printf("请输入数字：");
//	scanf("%u", &n);
//	int sum = DigitSum(n);
//	printf("%d",sum);
//	return 0;
//}

//利用递归实现n的k次方
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
//	printf("请输入数字以及要求的次方，中间使用空格分开：");
//	scanf("%d %d", &n,&k);
//	double ret = Pow(n,k);
//	printf("%.3f", ret);
//	return 0;
//}

////小青蛙跳台阶,一次上一阶或者二阶，共有多少中上法
////解析：当只有一个台阶的时候只有一种上法； 当有两个台阶的时候 有两种上法 
////假设我们有10个台阶，我们先上一阶，我们剩下上法为fib(9)
////我们先上2个台阶时，我们剩下上法为fib(8)
////我们只能上1个或者2个，所以n>=2时，我们fib(n)=fib(n-1)+fib(n-2)
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
//	printf("请输入台阶数(1~30)：");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d", ret);
//	return 0;
//}

////有一个整数序列，删除其中的指定整数，不改变其他整数的位置
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//接收整数序列里面的整数个数
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);//接收整数序列，并把整数序列放入数组里面
//	}
//	int del = 0;
//	scanf("%d", &del);//接受我们需要删除的元素
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//			//利用循环遍历，如果不相等，我们把元素放入arr[j];
//			//如果相等，我们让i++，多走一步，错过我们del，把我们剩下的元素放入arr[j]，达到删除指定元素的效果
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	//最后，输出元素
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	printf("请输入成绩的总个数(1~10000):");
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
//	printf("差值为：%d", ret);
//	return 0;
//}

//大小写转换  要求：多组输入
////蠢蛋版
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

////智能版
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch)==1)
//	{
//		//要引用库函数<stdlib.h> and <ctype.h>
//		if (ch >= 'a' && ch <= 'z')//判断大小写可以引用库函数islower/isupper
//		{
//			printf("%c\n", ch - 32);//转换大小写可以使用库函数tolower/toupper
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}

////判断是不是字母
//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		//头文件<ctype.h>
//		if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)//判断是不是字母islpha
//		{
//			printf("%c is  the alphabet.\n", ch);
//		}
//		else if (ch >= 48 && ch <= 57)
//		{
//			printf("%c is the number.\n", ch);
//		}
//		getchar();//getchar()是为了处理我们输入的换行/n
//	}
//	return 0;
//}

////最高分问题
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
//	printf("最高分为：%3d\n", max);
//	return 0;
//}

////水仙花数五位数里面的所有水仙花数
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

////写一个函数返回二进制里面的个数
//////方法一：
//int is_count(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if ((n % 2) == 1)//如果n%2==1，证明n的二进制位最后一位是1
//		{
//			count++;
//		}
//		n /= 2;//这个计算的是n二进制最后一位，除去后面前面的所有位
//	}
//	return count;
//}
//////方法二：
//int is_count(int n)
//{
//	int count = 0;
//	for(int i=0;i<32;i++)//遍历32位对比，判断语句，判断位1则count+1
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
////方法三：
//int is_count(int n)
//{
//	int count=0;
//	//我们假设n=5,令5&4，二进制位0101&0100=0100；
//	//再令4&3，二进制0100&0011=0000；
//	//我们令n&(n-1），循环了两次，而5里面刚好有两个1，所以我们可以利用此方法计算整形二进制里面的1的个数
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

//判断一个数是不是2的次方
//我们可以利用二进制判断
//2^11 0010
//2^2 0100
//2^3 1000
//if((n&(n-1))==0)
//
////输入两个整数，判断二进制中有多少个位不相同
//int is_count(int m, int n)
//{
//	int count = 0;
//	int a = m ^ n;//利用^操作符,相同为0，不相同为1；然后我们再计算1的数量
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

////分别打印二进制的奇数位，和偶数位
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int j = 0;
//	//奇数位
//	for (i = 0; i <32; i += 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	//偶数位
//	for (j = 1; j<=32; j+=2)
//	{
//		printf("%d ", (a >> j) & 1);
//	}
//	return 0;
//}
//int i;//不初始化会默认为0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//这里i=-1，sizeof(i)=4
//	//这里两边的类型不一样，会发生算术提升。-1会变为一个很大的整数。所以，if可以执行
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

////打印x
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

////获得输入的某一年，某一月的天数
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

////输入三个数，判断能不能组成三角形：等边三角形，等腰三角形，普通三角形
//int main()
//{
//	int arr[3] = { 0 };
//	printf("请输入三个数字：");
//	scanf("%d %d %d", &arr[0], &arr[1], & arr[2]);
//	if (arr[0] + arr[1] > arr[2] && arr[0] + arr[2] > arr[1] && arr[2] + arr[1] > arr[0] )
//	{
//		printf("可以组成三角形！！！\n");
//	}
//	if ( arr[0] == arr[1] && arr[1] == arr[2])
//	{
//		printf("组成的是等边三角形！！！");
//	}
//	else if (arr[0] == arr[1] || arr[0] == arr[2] || arr[2] == arr[1])
//	{
//		printf("组成的是等腰三角形！！！");
//	}
//	else
//	{
//		printf("组成的是普通三角形！！！");
//	}
//	return 0;
//}

////写一个函数打印arr数组的内容，不适用数组下标，使用指针
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

//写一个函数，读取字符串并且逆序，可以逆序字符串的内容
////方法一：冒泡排序
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
////方法二：左右对调
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

////求前5项之和，输入n项，和数字a，计算a的前n项之和
////例如：Sn=a+aa+aaa+aaaa+aaaaa
// 例如：2；22=2*10+2；222=22*10+2；
// 由举例可知，下一项等于上一项*10+2
//int main()
//{
//	int a = 0;
//	int n = 0;
//	printf("请输入两个数字：");
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


////打印0~10000之间所有的水仙花数  自幂数，幂是位数，如：153=1*3+5*3+3*3
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

////打印变种水仙花数
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
////打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	//确定打印上半部分的行数
//	for (i = 0; i < line; i++)
//	{
//	//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)//从第一行开始，空格的打印次数逐渐变少
//		{
//			printf(" ");
//		}
//	//星号
//		for (j=0;j<(2*i)+1; j++)
//		{
//			printf("*");
//		}
//	//打印一排后换行
//		printf("\n");
//	}
//	//下
//	int x = 0;
//	for (x = 0; x < line - 1; x++)
//	{
//		int y = 0;
//		//空格
//		for (y = 0; y < x + 1; y++)//打印逐渐增多的空格
//		{
//			printf(" ");
//		}
//		//星号
//		for (y=0;y<2*line-3-x*2;y++)//打印逐渐减少的星号
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//////买汽水问题，1元1瓶，2个空瓶兑换一瓶汽水
//int main()
//{
//	int money = 0;
//	printf("请输入你的钱数：");
//	scanf("%d", &money);
//	//方法一：
//	int total = money;
//	int empty = money;
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = (empty / 2) + (empty % 2);
//	}
////	//方法二：
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

// //求最小的公倍数
//int main()
//{
//	int x = 0;
//	int y = 0;
//	
//	printf("请输入两数：");
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
//	printf("最小公倍数：%d ",a*b/y );
//	printf("最小公倍数：%d ",y );
//
//	return 0;
//}

//
////逆序打印字符
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

////猴子吃桃问题。猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。
//// 第二天早. 上又将剩下的桃子吃掉一半，又多吃一个。以后每天早上都吃了前一天剩下的一半零一个。
//// 到第N天早 上想再吃时，见只剩下-个桃子了。求第一天共摘多少桃子。
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
//            else if(b==0)//关键else if
//            {s[i]='?';}
//        }
//    }
//    while(b>0)
//    {
//        int c = a[--b];//关键--前置
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
