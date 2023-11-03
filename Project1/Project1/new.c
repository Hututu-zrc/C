#define _CRT_SECURE_NO_WARNINGS
//main-主函数()，printf-库函数
//std-标准，i-input，o-output

#include<stdio.h>
//int main()
//{
//	printf("%d\n",sizeof(char));
//	printf("%d\n",sizeof(short));
//	printf("%d\n",sizeof(int));
//	printf("%d\n",sizeof(long));
//	printf("%d\n",sizeof(long long));
//	printf("%d\n",sizeof(float));
//	printf("%d\n",sizeof(double));
//	return 0;
//}


//变量分为局部变量和全局变量
//局部优先
//int main()
//{
//	//short age = 20;
//	//int high = 180;
//	//float weight = 88.5;
//
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int	num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = num1  + num2;
//	printf("%d\n", sum);
//	return 0;
//
//}

//int main()
//{
//	printf("加油");
//	return 0;
//
//}
//
//int Add(int x, int y)
//{
//
//	int z = 0;
//	z = x + y;
//	return z;
//
//}
//int main()
//{	
//	int  n1 = 0;
//	int  n2 = 0;
//	scanf("%d %d", &n1, &n2);
//	int sum = Add(n1,n2);
//	printf("和为:%d\n",sum);
//	return 0;
//}


//int main()
//{
//	int arr[] = {1,2,3,4,6,7,8,9};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i = i + 1;
//	}
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[] = {"hello bit"};
//	printf("%d\n",strlen(arr));
//	return 0;
//}


#include<stdio.h>
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else 
//		return y;
//}
//int main()
//{	
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//
//}


#include<stdio.h>
int main()
{	int y = 0;
	int x = 0;
	scanf("%d", &x);
	if (x < 0)
		y = 1;
	else if (x == 0)
		y = 0;
	else
		y = -1;
	printf("输出为%d\n", y);
	return 0;
	
}