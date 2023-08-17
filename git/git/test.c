#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	return 0;
//}


//static局部变量的用法
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d ", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//
//	}
//	return 0;
//}

//#define ADD(x,y) ((x)+(y))
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//int main()
//{
//	struct stu s = { "朱润财",20,"18","1588888888" };
//	printf("%s %d %s %s", s.name, s.age, s.sex, s.tele);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 6;
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("wekkend\n");
//			break;
//		default:
//			break;
//
//
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	char ch = "\0";
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')//判断阿斯玛值，确定是否为数字，不是数字则跳过
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

////
//int main()
//{
//	int a;
//	scanf("%d",& a);
//	printf("%d\n", a);
//	return 0;
//}

//# include <stdio.h>
//int main(void)
//{
//    int i;
//    scanf("%d", &i);  //&i 表示变量 i 的地址，&是取地址符
//    printf("i = %d\n", i);
//    return 0;
//}


#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）：");
//	int ret = getchar();
//	if ('Y' == ret) 
//	{
//		printf("yes\n");
//
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//
////打印ASCII值
//int main()
//{
//	int a = 0;
//	int arr[] = { 73,32,99,97,110,32,105,116,33 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (a < sz)
//	{
//		printf("%c", arr[a]);
//		a++;
//	}
//
//	return 0;
//
//}

////打印年月日
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d", day);
//	return 0;
//
//}

//#include <stdio.h>
//void test()
//{
//    //static修饰局部变量
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}

#include<stdio.h>
//int main()
//{//先将输入的数字存到数组里面去
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(;i<3;i++)
//		for (; j < 3; j++)
//		{
//			printf("zhuruncai \n");
//		}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	do
//	{
//		printf("zhuruncai\n");
//		a++;
//	}
//	while (a < 10);
//	return 0;
//
//}

//int main()
//{	//输入数据，储存变量
//	int n = 1;
//	int res = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		res = res * n;
//		sum += res;
//	}
//	printf("结果:%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
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

//int main()
//{
//	char arr[5] = "abcd";
//	printf("%s\n", arr);
//	return 0;
//}

//
//#include<stdio.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr[] = "Pp play \"Game for Peace\"like a newcomer";
//	char arr1[] = "***************************************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		printf("%s\n", arr1);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}

//#include<string.h>
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 3;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password,"5201314")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，您还有%d次机会！！！\n", a);
//			a--;
//		}
//	}
//	if (i == 3)
//		printf("三次机会已使用完，退出程序\n");
//	return 0;
//}



