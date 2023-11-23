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
//	while ((ch = getchar()) != eof)
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


//int main()
//{
//again:
//	printf("啥实力");
//	printf("有实力");
//	goto again;
//	return 0;
//
//}

//#include<string.h>
//#include<stdlib.h>
//int main()  
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑将在一分钟后关机.如果输入:我没实力，朱某将为您取消关机取消关机！\n");
//	scanf("%s", input);
//	if (strcmp(input, "我没实力") == 0)
//	{
//		system("shutdown -a");
//
//	}
//	else
//	{
//		goto again;
//	}                        
//}

////写一个函数判断一个数是不是素数
////打印100~200之间的素数
//int main()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//生成一个2~i-1的数，与要判断的数相除，如果除的尽，则是素数
//		int flag = 1;//首先默认它是素数，然后利用除法，判断
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//发现除的尽，将flag变为0，并跳出循环
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n ", count);
//	return 0;
// }


//进阶版2.0
//#include<math.h>
////写一个函数判断一个数是不是素数
////打印100~200之间的素数
//int main()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//生成一个2~i-1的数，与要判断的数相除，如果除的尽，则是素数
//		int flag = 1;//首先默认它是素数，然后利用除法，判断
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//发现除的尽，将flag变为0，并跳出循环
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n ", count);
//	return 0;
// }

//进阶版3.0
#include<math.h>
//写一个函数判断一个数是不是素数
//打印100~200之间的素数
//int is_prime(int n)
//{
//	//生成一个2~i-1的数，与要判断的数相除，如果除的尽，则是素数
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//return直接返回函数，功能比break更强大
//		}
//	}
//	return 1;//return 0；一直没有返回时，才返回return 1；
//}
//
//int main()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))//该函数判断是否为素数，如果是，则返回1条件为真，打印；假则返回0，条件为假，跳出.
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n ", count);
//	return 0;
//}
//二分查找：
//1.首先计算出有序整形数组的长度
//2.给左右两边的元素标上号，以及计算出中间元素的索引号
//3.利用arr[mid]索引出来和我们要找的k进行比对，判断这个mid大了，还是小了
// {(1).如果arr[mid]<k，则将原来的mid+1，变为新的left
//  (2).如果arr[mid]>k,则将原来的mid-1变成新的right
//  (3).如果arr[mid]==k,则找到了，返回下标
//  (4).循环上面的(1),(2)直至找到k的下标
//// }
// 
// 
// 
// 
//binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = arr[mid] + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = arr[mid] - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//}
//
//int mian()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int  k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了，返回下标；找不到，返回-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d ",4321);
//	return 0;
//}


//
//int main()
//{
//	printf("%c\n", 128);
//	return 0;
//}

#include<stdio.h>
////递归的方法
//int jiec(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * jiec(n - 1);
//	}
//
//}

////迭代的方法
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
////求n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int x = fac(n);
//	printf("输出为 %d\n",x);
//	return 0;
//}

////斐波那契数列
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n >= 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int ret = Fib(i);
//	printf("结果：%d\n",ret);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n",i,&arr[i]);
//	}
//	return 0;
//}
//

//int main()
//{
//	int i = 0;
//	int arr[3][4] = { 1,2,3,4,4,5,6,7,8,9,5,6};
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//冒泡排序核心思想：相邻两个元素之间的比较
//一趟冒号排序让一个数据来到它最终应该出现的位置上
//n个元素则需要n-1趟
////倒序打印
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int ss = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", ss);//注意：上面如果在函数里面求数组的长度，得到的是会是1
//	//因为我们传参的时候，传过来的时候是数组首地址，我们在计算数组长度计算的是数组首元素的地址
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//每一趟排序后，完成一个元素，所以是sz-1-i
//		{	//交换相邻的两个元素
//			int tep = arr[j];
//			arr[j] = arr[j+1];
//			arr[j + 1] = tep;
//		}
//	}
//}
//int main()
//{	//我们的目标是把数据升序
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i <10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { 0 };
//	int row = sizeof(arr) / sizeof(arr[0]);
//	int column = sizeof(arr[0]) / sizeof(arr[0][0]);
//	printf("%d %d", column, row);
//	return 0;
//
//}
//
//int main()
//{
//	int a = 3;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 13;//   00000000000000000000000000001101（13的二进制）
//	a |= (1 << 4);//00000000000000000000000000010000（1<<4的二进制）
//	//这个两个按位或，不相同都是1，相同都是0为0，
//	//结果为：000000000000000000000000000011101
//	printf("%d\n", a);
//	a &= (~(1<<4));//11111111111111111111111111101111（这个是(1<<4)的二进制'取反'后得到的）
//	//这个两个按位与，不相同则是0，相同为1则是1
//	//结果为：00000000000000000000000000001101
//	printf("%d\n", a);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//    i = a++ && ++b && d++;
//    //i = a++||++b||d++;
//    printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
//    return 0;
//}

//
//#include<string.h>
////它就将不同类型的数据存放在一起，作为一个整体进行处理。
////结构体在函数中的作用不是简便，其最主要的作用就是封装。封装的好处就是可以再次利用。让使用者不必关心这个是什么，只要根据定义使用就可以了。
//struct Stu
//{
//	//struct 语句定义了一个包含多个成员的新的数据类型
//	char name[20];
//	int age;
//	double score;
//
//};
//void set_stu(struct Stu* ps)//这里接收使用我们的结构体，，然后使用指针接收，更改其中的数据
//{
//	//方法一：
///*	strcpy(((*ps).name, "zhangsan");
//	(*ps).age = 20;
//	(*ps).score = 100.0；*/
//	//方法二：
//	//结构体指针->成员
//	strcpy(ps->name, "zhangsan");
//	//ss.name="zhangsan"是错误的。ss.name找到的是指针的地址，把字符串赋给地址，显然错误，我们要赋给地址对应的空间里面
//	//我们使用strcpy函数，把字符串复制到字符对应的空间里面去
//	ps->age = 20;
//	ps->score = 100.0;
//
//}
//void print_stu(struct Stu ss)//这里我们打印其中的数据
//{
//	//结构体对象.成员
//	printf("%s %d % 1f\n", ss.name, ss.age, ss.score);//这里的输出项使用ss.成员来查找使用
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//这里传参是拷贝一份，如果不传地址，那么修改的只是拷贝版，原版不会有变动
//	print_stu(s);
//	return 0;
//}

//int main()
//{
//	int n = 10;
//	int* px = &n;
//	printf("%p\n", &px);
//	printf("%p\n", px);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* pn = arr;
//	for (i = 0; i < 10; i++)
//	{
//		//法一：
//		*pn++ = 1;
//		//等于*pn=1;pn++;
//		printf("%d ", arr[i]);
//		////法二:
//		//*(pn + i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int arr[10];
//	int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;
//	int* pp[10] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", *(pp[i]));
//	}
//
//	return 0;
//}

////指针数组
//int main()
//{
//	int arr1[4] = { 1,2,3,4 };
//	int arr2[4] = { 2,3,4,5 };
//	int arr3[4] = { 6,3,4,5 };
//	int* p[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i <3;i++)
//	{
//		int j = 0;
//		for (j = 0; j <4; j++)
//		{
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
////结构体
//struct stu
//{
//	char name[10];
//	int age;
//};
//struct stu run = { "朱润财",18};
////结构体的嵌套
//struct Stu
//{
//	int peo;
//	struct stu x;
//	
//};
//struct Stu p = { 30,{"朱润财",18} };
//////结构体的传参
////void print(struct stu * run2)
////{
////	printf("%s %d\n", (*run2).name, (*run2).age);//结构体对象和.一起用
////	printf("%s %d\n",run2->name,run2->age);//结构体指针变量和->一起用
////};
//
//int main()
//{
//	//print(&run);//结构体传参时传输地址
//	printf("%s %d\n",run.name, run.age);
//	printf("%d %s %d", p.peo, p.x.name,p.x.age);
//	return 0;
//}

////结构体的传参
//struct stu//创建结构体的类型
//{
//	int age;
//	char name[10];
//};
//struct stu p = { 18,"朱润财" };//结构体的初始化
//void print(struct stu* pp)
//{
//	printf("%d %s\n",(*pp).age,(*pp).name);//结构体的对象使用'.'
//	printf("%d %s\n",pp->age,pp->name);//结构体的指针使用'->'
//}
//int main()
//{
//	print(&p);//传递结构体变量的地址
//	return 0;
//}

////结构体的嵌套
//struct stu//创建结构体的类型
//{
//	int age;
//	char name[10];
//};
//struct Peo
//{
//	int peo;
//	struct stu x;
//};
//struct Peo p = { 60,{18,"朱润财"} };
//int main()
//{
//	printf("%d %d %s", p.peo, p.x.age, p.x.name);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	scanf("%s", arr);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", strlen(arr));
//	printf("%d", sz);
//	return 0;
//}

//int main()
//{
//
//	printf("hello world");
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d %d", &n,&a);
//	for (int i = 0; i < n; i++)
//	{
//		tmp = a;
//		sum += tmp;
//		a = a * 10 + a;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


////判断电脑内存存放的是大端还是小端
//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	//int*强制类型转换成为char*，取第一个字节判断其大小时候为1
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = -1;
//	unsigned char b = -1;
//	char c = -128;
//	//printf("%d\n", a);
//	printf("%d\n", c);
//	printf("%u\n", c);
//	//printf("%d\n",b);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	//printf("%d\n", a);
//	printf("%u\n", a);
//	return 0;
////}
//#include <stdio.h>
//#include <string.h>
//void lable(char s[])
//{
//    int len = strlen(s);
//    int a[len];
//    int b = 0;
//    for (int i = 0; i < len; i++)
//    {
//        if (s[i] == '(')
//        {
//            a[b] = i;
//            b++;
//        }
//        if (s[i] == ')')
//        {
//            if (b > 0)
//            {
//                b--;
//            }
//            else if (b == 0)//关键else if
//            {
//                s[i] = '?';
//            }
//        }
//    }
//    while (b > 0)
//    {
//        int c = a[--b];//关键--前置
//        s[c] = '$';
//    }
//    for (int j = 0; j < len; j++)
//    {
//        if (s[j] != '$' && s[j] != '?')
//        {
//            s[j] = ' ';
//        }
//    }
//}
//int main()
//{
//    char s[101];
//    while (scanf("%s", s) != EOF)
//    {
//        printf("%s\n", s);
//        lable(s);
//        printf("%s\n", s);
//    }
//    return 0;
//}
