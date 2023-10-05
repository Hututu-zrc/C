#define _CRT_SECURE_NO_WARNINGS
#include"Head.h"
////A	输出下面的字符串-2
//int main()
//{
//	printf("I love \\t this \\bgame \\n !\\n");
//	return 0;
//}
// 
////B	输出一个小数的天花板和地板
//int main()
//{
//	double a = 0;
//	scanf("%f", &a);
//	printf("%d\n", (int)a + 1);
//	printf("%d\n", (int)a);
//	return 0;
//}

////问题 C: 求a/b 不保留小数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a / b);
//}

////问题 D: 读入一个大写字母，输出对应的小写字母
//int main()
//{
//	char a = { 0 };
//	scanf("%c", &a);
//	printf("%c\n", a + 32);
//	return 0;
//}
// 
////问题 E : 输入两个整数，求他们相除的余数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a % b);
//	return 0;
//}

////问题 F: N月后是几月
// 快速版
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


////问题 A: 输入一个字符，判断是否阿拉伯数字
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
//问题 B: 编写程序，输入x，输出y

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
////问题 C: 输出最大的数。
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	int ret = a > b ? a : b;
//	ret = ret > c ? ret : c;
//	printf("%d\n", ret);
//	return 0;
//}
//问题 D: 是否闰年.
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
//问题 E: 人民币大写-1
//int main()
//{
//	int N = 0;
//	scanf("%d", &N);
//	char arr[10][5] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
//	char arr1[4][5] = {"拾","佰","整","元"};
//	if (N < 10 && N>=0)
//	{
//		printf("人民币：%s%s%s\n", arr[N],arr1[3],arr1[2]);
//	}
//	else if (N == 10)
//	{
//		printf("人民币：%s%s%s\n", arr1[0], arr1[3], arr1[2]);
//	}
//	else if (N % 10 == 0)
//	{
//		printf("人民币：%s%s%s%s\n", arr[N / 10], arr1[0], arr1[3], arr1[2]);
//	}
//	
//	else if (N < 100 && N > 10 && N%10!=0)
//	{
//		printf("人民币：%s%s%s%s%s\n",arr[N/10],arr1[0],arr[N%10],arr1[3],arr1[2]);
//	}
//	
//	return 0;
//}
// 
// ////问题F：日期的大小
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
 //问题 G: 人民币的大写
//int main()
//{
//	int num = 0;
//	char arr1[10][5] = { "零","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
//	char arr2[5][5] = {"拾","佰","仟","整","元"};
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

////问题H：	2019年1月1日是星期二，2019年x月y日是星期几
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
//	const char* D[] = { "","壹","贰","叁","肆","伍","陆","柒","捌","玖" };
//	ten = N / 10;
//	one = N % 10;
//	scanf("%d", &N);
//	if (N % 10 == 0) {
//		printf("人民币：%s拾元整", D[ten]);
//	}
//	else {
//		printf("人民币：%s拾%s元整", D[ten], D[one]);
//	}
//
//}
//#include <stdio.h>
//
//int main() {
//    int N, ten, one;
//
//    // 数字大写表
//    const char* num[] = { "", "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖" };
//    scanf("%d", &N);
//
//    ten = N / 10;  // 十位数字
//    one = N % 10;  // 个位数字
//
//    printf("人民币：");
//
//    if (ten > 0) {  // 十位数字不为0时
//        printf("%s拾", num[ten]);
//    }
//
//    if (one == 0) {  // 个位数字为0时
//        printf("元整");
//    }
//    else {
//        printf("%s元整", num[one]);
//    }
//
//    return 0;
//}