#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	return 0;
//}


//static�ֲ��������÷�
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
//	struct stu s = { "�����",20,"18","1588888888" };
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
//		if (ch < '0' || ch > '9')//�жϰ�˹��ֵ��ȷ���Ƿ�Ϊ���֣���������������
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
//    scanf("%d", &i);  //&i ��ʾ���� i �ĵ�ַ��&��ȡ��ַ��
//    printf("i = %d\n", i);
//    return 0;
//}


#include<stdio.h>
//int main()
//{
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	int ch = 0;
//	while ((ch = getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ�����루Y/N����");
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
////��ӡASCIIֵ
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

////��ӡ������
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
//    //static���ξֲ�����
//    static int i = 0;
//    i++;
//    printf("%d ", i);
//}

#include<stdio.h>
//int main()
//{//�Ƚ���������ִ浽��������ȥ
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
//{	//�������ݣ��������
//	int n = 1;
//	int res = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		res = res * n;
//		sum += res;
//	}
//	printf("���:%d", sum);
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
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password,"5201314")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������������%d�λ��ᣡ����\n", a);
//			a--;
//		}
//	}
//	if (i == 3)
//		printf("���λ�����ʹ���꣬�˳�����\n");
//	return 0;
//}


//int main()
//{
//again:
//	printf("ɶʵ��");
//	printf("��ʵ��");
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
//	printf("��ע�⣬��ĵ��Խ���һ���Ӻ�ػ�.�������:��ûʵ������ĳ��Ϊ��ȡ���ػ�ȡ���ػ���\n");
//	scanf("%s", input);
//	if (strcmp(input, "��ûʵ��") == 0)
//	{
//		system("shutdown -a");
//
//	}
//	else
//	{
//		goto again;
//	}                        
//}

////дһ�������ж�һ�����ǲ�������
////��ӡ100~200֮�������
//int main()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//����һ��2~i-1��������Ҫ�жϵ��������������ľ�����������
//		int flag = 1;//����Ĭ������������Ȼ�����ó������ж�
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//���ֳ��ľ�����flag��Ϊ0��������ѭ��
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


//���װ�2.0
//#include<math.h>
////дһ�������ж�һ�����ǲ�������
////��ӡ100~200֮�������
//int main()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//����һ��2~i-1��������Ҫ�жϵ��������������ľ�����������
//		int flag = 1;//����Ĭ������������Ȼ�����ó������ж�
//		int j = 0;
//		for (j = 2; j <=sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;//���ֳ��ľ�����flag��Ϊ0��������ѭ��
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

//���װ�3.0
#include<math.h>
//дһ�������ж�һ�����ǲ�������
//��ӡ100~200֮�������
//int is_prime(int n)
//{
//	//����һ��2~i-1��������Ҫ�жϵ��������������ľ�����������
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//returnֱ�ӷ��غ��������ܱ�break��ǿ��
//		}
//	}
//	return 1;//return 0��һֱû�з���ʱ���ŷ���return 1��
//}
//
//int main()
//{
//	int i = 100;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i))//�ú����ж��Ƿ�Ϊ����������ǣ��򷵻�1����Ϊ�棬��ӡ�����򷵻�0������Ϊ�٣�����.
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n ", count);
//	return 0;
//}
//���ֲ��ң�
//1.���ȼ����������������ĳ���
//2.���������ߵ�Ԫ�ر��Ϻţ��Լ�������м�Ԫ�ص�������
//3.����arr[mid]��������������Ҫ�ҵ�k���бȶԣ��ж����mid���ˣ�����С��
// {(1).���arr[mid]<k����ԭ����mid+1����Ϊ�µ�left
//  (2).���arr[mid]>k,��ԭ����mid-1����µ�right
//  (3).���arr[mid]==k,���ҵ��ˣ������±�
//  (4).ѭ�������(1),(2)ֱ���ҵ�k���±�
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
//	//�ҵ��ˣ������±ꣻ�Ҳ���������-1
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
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
////�ݹ�ķ���
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

////�����ķ���
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
////��n�Ľ׳�
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int x = fac(n);
//	printf("���Ϊ %d\n",x);
//	return 0;
//}

////쳲���������
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
//	printf("�����%d\n",ret);
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

//ð���������˼�룺��������Ԫ��֮��ıȽ�
//һ��ð��������һ����������������Ӧ�ó��ֵ�λ����
//n��Ԫ������Ҫn-1��
////�����ӡ
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	int ss = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", ss);//ע�⣺��������ں�������������ĳ��ȣ��õ����ǻ���1
//	//��Ϊ���Ǵ��ε�ʱ�򣬴�������ʱ���������׵�ַ�������ڼ������鳤�ȼ������������Ԫ�صĵ�ַ
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//ÿһ����������һ��Ԫ�أ�������sz-1-i
//		{	//�������ڵ�����Ԫ��
//			int tep = arr[j];
//			arr[j] = arr[j+1];
//			arr[j + 1] = tep;
//		}
//	}
//}
//int main()
//{	//���ǵ�Ŀ���ǰ���������
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
//	int a = 13;//   00000000000000000000000000001101��13�Ķ����ƣ�
//	a |= (1 << 4);//00000000000000000000000000010000��1<<4�Ķ����ƣ�
//	//���������λ�򣬲���ͬ����1����ͬ����0Ϊ0��
//	//���Ϊ��000000000000000000000000000011101
//	printf("%d\n", a);
//	a &= (~(1<<4));//11111111111111111111111111101111�������(1<<4)�Ķ�����'ȡ��'��õ��ģ�
//	//���������λ�룬����ͬ����0����ͬΪ1����1
//	//���Ϊ��00000000000000000000000000001101
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
////���ͽ���ͬ���͵����ݴ����һ����Ϊһ��������д���
////�ṹ���ں����е����ò��Ǽ�㣬������Ҫ�����þ��Ƿ�װ����װ�ĺô����ǿ����ٴ����á���ʹ���߲��ع��������ʲô��ֻҪ���ݶ���ʹ�þͿ����ˡ�
//struct Stu
//{
//	//struct ��䶨����һ�����������Ա���µ���������
//	char name[20];
//	int age;
//	double score;
//
//};
//void set_stu(struct Stu* ps)//�������ʹ�����ǵĽṹ�壬��Ȼ��ʹ��ָ����գ��������е�����
//{
//	//����һ��
///*	strcpy(((*ps).name, "zhangsan");
//	(*ps).age = 20;
//	(*ps).score = 100.0��*/
//	//��������
//	//�ṹ��ָ��->��Ա
//	strcpy(ps->name, "zhangsan");
//	//ss.name="zhangsan"�Ǵ���ġ�ss.name�ҵ�����ָ��ĵ�ַ�����ַ���������ַ����Ȼ��������Ҫ������ַ��Ӧ�Ŀռ�����
//	//����ʹ��strcpy���������ַ������Ƶ��ַ���Ӧ�Ŀռ�����ȥ
//	ps->age = 20;
//	ps->score = 100.0;
//
//}
//void print_stu(struct Stu ss)//�������Ǵ�ӡ���е�����
//{
//	//�ṹ�����.��Ա
//	printf("%s %d % 1f\n", ss.name, ss.age, ss.score);//����������ʹ��ss.��Ա������ʹ��
//}
//int main()
//{
//	struct Stu s = { 0 };
//	set_stu(&s);//���ﴫ���ǿ���һ�ݣ����������ַ����ô�޸ĵ�ֻ�ǿ����棬ԭ�治���б䶯
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
//		//��һ��
//		*pn++ = 1;
//		//����*pn=1;pn++;
//		printf("%d ", arr[i]);
//		////����:
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

////ָ������
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
////�ṹ��
//struct stu
//{
//	char name[10];
//	int age;
//};
//struct stu run = { "�����",18};
////�ṹ���Ƕ��
//struct Stu
//{
//	int peo;
//	struct stu x;
//	
//};
//struct Stu p = { 30,{"�����",18} };
//////�ṹ��Ĵ���
////void print(struct stu * run2)
////{
////	printf("%s %d\n", (*run2).name, (*run2).age);//�ṹ������.һ����
////	printf("%s %d\n",run2->name,run2->age);//�ṹ��ָ�������->һ����
////};
//
//int main()
//{
//	//print(&run);//�ṹ�崫��ʱ�����ַ
//	printf("%s %d\n",run.name, run.age);
//	printf("%d %s %d", p.peo, p.x.name,p.x.age);
//	return 0;
//}

////�ṹ��Ĵ���
//struct stu//�����ṹ�������
//{
//	int age;
//	char name[10];
//};
//struct stu p = { 18,"�����" };//�ṹ��ĳ�ʼ��
//void print(struct stu* pp)
//{
//	printf("%d %s\n",(*pp).age,(*pp).name);//�ṹ��Ķ���ʹ��'.'
//	printf("%d %s\n",pp->age,pp->name);//�ṹ���ָ��ʹ��'->'
//}
//int main()
//{
//	print(&p);//���ݽṹ������ĵ�ַ
//	return 0;
//}

////�ṹ���Ƕ��
//struct stu//�����ṹ�������
//{
//	int age;
//	char name[10];
//};
//struct Peo
//{
//	int peo;
//	struct stu x;
//};
//struct Peo p = { 60,{18,"�����"} };
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


////�жϵ����ڴ��ŵ��Ǵ�˻���С��
//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	//int*ǿ������ת����Ϊchar*��ȡ��һ���ֽ��ж����Сʱ��Ϊ1
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
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
//            else if (b == 0)//�ؼ�else if
//            {
//                s[i] = '?';
//            }
//        }
//    }
//    while (b > 0)
//    {
//        int c = a[--b];//�ؼ�--ǰ��
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
