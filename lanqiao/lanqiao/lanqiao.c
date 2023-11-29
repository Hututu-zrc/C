#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int count3 = 0;
//	for (int i = 1;count3<23; i++)
//	{
//		
//		int temp1 = i;
//		int temp2 = i;
//		char arr1[100] = { 0 };
//		char arr2[100] = { 0 };
//		int count1 = 0, count2 = 0;
//		while ( temp1>0 )
//		{
//			arr1[count1] = temp1 % 2+'0';
//			temp1 /= 2;
//			count1++;
//		}
//		while (temp2>0)
//		{
//			arr2[count2] = temp2 % 8+'0';
//			temp2 /= 8;
//			count2++;
//		}
//		int sum1 = 0; int sum2 = 0;
//		for (int i = 0; i < count1; i++)
//		{
//			sum1 += arr1[i] - '0';
//		}
//		for (int i = 0; i < count2; i++)
//		{
//			sum2 += arr2[i] - '0';
//		}
//		if (sum1==sum2)
//		{
//			count3++;
//			printf("%d  ", i);
//			printf("%d\n", count3);
//			
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 393353,901440,123481,850930,423154,240461
//,373746,232926,396677,486579,744860,468782
//,941389,777714,992588,343292,385198,876426
//,483857,241899,544851,647930,772403,109929
//,882745,372491,877710,340000,659788,658675
//,296521,491295,609764,718967,842000,670302 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int count[100] = { 0 };
//	
//	for (int i = 0; i < sz; i++)
//	{
//		int counter = 0;
//		for (int j = 1; j < arr[i]; j++)
//		{
//			if (arr[i] % j == 0)
//				counter++;
//		}
//		count[i] = counter;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d %d\n", count[i], i + 1);
//	}
//
//	return 0;
//}

//void change(int r, int c,int (*arr)[40])
//{
//	if (arr[r + 1][c] == 0)
//		arr[r + 1][c] = 2;
//	if (arr[r - 1][c] == 0)
//		arr[r - 1][c] = 2;
//	if (arr[r][c + 1] == 0)
//		arr[r][c + 1] = 2;
//	if (arr[r][c - 1] == 0)
//		arr[r][c - 1] = 2;
//}
//int main()
//{
//	int arr[30][40] = { 0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,1,1,0,1,0,1,0,1,0,1,0,0,1,0,0,1,1,0,0,0,0,0,0,1,1,
//  0,1,0,1,1,1,1,0,0,1,1,1,1,1,0,1,1,1,0,1,1,1,1,0,0,0,0,0,1,0,1,0,1,0,0,1,1,1,1,1,
//  1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1,0,0,
//  0,1,1,0,1,0,1,0,1,0,1,1,0,0,0,0,0,0,0,1,0,1,1,0,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,
//  0,0,0,0,0,1,1,0,1,0,1,0,0,0,0,0,1,1,1,1,1,1,0,0,1,1,0,1,1,0,0,0,1,0,1,0,1,0,0,1,
//  0,1,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,1,
//  0,1,0,0,1,1,0,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,
//  0,0,1,0,0,1,1,0,1,0,1,0,0,1,1,0,0,0,1,1,1,1,0,0,1,1,0,1,1,0,0,1,1,0,1,0,0,0,1,0,
//  1,1,1,1,0,0,0,1,1,1,1,0,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,1,0,0,1,0,1,1,1,0,1,1,0,1,
//  0,0,1,1,1,1,0,1,0,0,0,1,1,0,0,0,0,0,0,0,0,1,1,0,1,0,0,1,1,0,1,1,1,0,1,0,0,0,0,1,
//  0,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,0,1,0,0,1,1,1,1,1,0,0,1,0,1,0,0,1,1,0,1,1,1,0,0,
//  0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,1,0,0,0,1,0,0,1,0,1,0,0,0,1,1,1,0,1,1,1,0,1,1,0,0,
//  0,0,1,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,1,0,0,0,1,1,0,0,0,0,1,0,1,0,0,0,1,1,
//  0,1,1,0,1,1,0,0,0,0,1,0,0,0,1,1,0,1,1,0,1,0,0,1,1,0,1,0,0,0,1,1,0,1,0,1,1,0,1,1,
//  0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
//  0,0,1,1,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,1,0,0,1,1,0,0,1,0,1,0,0,0,1,1,0,
//  1,1,1,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,1,1,0,0,1,0,0,1,1,0,0,1,1,1,0,1,0,
//  0,0,0,0,1,0,0,1,0,0,1,1,1,0,0,0,0,0,1,1,0,1,0,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,
//  0,1,0,0,0,1,0,0,1,0,0,0,0,1,1,0,1,0,0,0,0,1,1,0,0,0,0,0,1,1,0,1,1,1,1,1,0,1,0,1,
//  1,0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0,1,1,0,0,1,1,1,1,1,0,1,0,1,1,0,0,1,1,1,0,0,0,1,
//  0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,0,0,0,0,0,1,1,1,1,0,0,1,1,0,0,1,0,1,0,1,1,0,1,
//  0,0,1,0,1,1,0,1,0,1,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1,0,0,1,1,
//  0,0,0,0,0,1,1,1,0,1,0,0,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,0,1,1,1,0,1,0,1,0,0,
//  0,0,1,0,0,0,1,1,0,0,1,0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,1,0,1,0,1,
//  1,0,0,1,1,1,1,0,1,0,0,1,0,1,1,0,0,1,1,0,1,0,1,0,1,1,1,0,0,0,0,0,0,0,1,0,1,1,1,0,
//  0,1,1,0,0,1,1,1,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,1,0,0,1,1,0,0,0,1,0,
//  1,1,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,0,1,0,0,1,1,0,0,1,0,0,0,0,1,0,1,
//  1,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,1,1,1,1,1,1,1,1,1,1,0,0,
//  1,0,0,1,0,1,1,0,1,0,1,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,1,1,0,0,0,0,
//  0,0,1,1,0,0,0,1,0,0,0,1,1,0,0,0,0,1,0,1,1,1,1,0,1,0,0,0,1,0,1,1,1,0,1,1,0,0,0,1 };
//	int r = 0, c = 0;
//	while (r >= 0 && r < 30 && c>=0 && c < 40)
//	{
//		if (r >= 0 && r < 30 && c>=0 && c < 40 )
//			change(r, c, arr);
//		if(r + 1 >= 0 && r + 1 < 30 && c >= 0 && c < 40)
//			change(r + 1, c, arr);
//		if(r - 1 >= 0 && r - 1 < 30 && c >= 0 && c < 40)
//			change(r - 1, c, arr);
//		if(r >= 0 && r < 30 && c + 1>=0 && c + 1 < 40)
//			change(r, c + 1, arr);
//		if(r >= 0 && r < 30 && c - 1>=0 && c - 1 < 40)
//			change(r, c - 1, arr);
//		r += 1;
//	}	
//	r = 0, c = 0;
//	while (r >= 0 && r < 30 && c >= 0 && c < 40)
//	{
//		if (r >= 0 && r < 30 && c >= 0 && c < 40)
//			change(r, c, arr);
//		if (r + 1 >= 0 && r + 1 < 30 && c >= 0 && c < 40)
//			change(r + 1, c, arr);
//		if (r - 1 >= 0 && r - 1 < 30 && c >= 0 && c < 40)
//			change(r - 1, c, arr);
//		if (r >= 0 && r < 30 && c + 1 >= 0 && c + 1 < 40)
//			change(r, c + 1, arr);
//		if (r >= 0 && r < 30 && c - 1 >= 0 && c - 1 < 40)
//			change(r, c - 1, arr);
//		c += 1;
//	}
//	int count = 0;
//	for (int i = 0;i < 30; i++)
//	{
//		for (int j = 0; j < 40; j++)
//		{
//			if (arr[i][j] == 2)
//				count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	char arr[10];
//	gets(arr);
//	char temp[7] = { 0 };
//	for (int i = 1; i < 6; i++)
//		temp[i - 1] = arr[i];
//	temp[5] = arr[0];
//	puts(temp);
//	return 0;
//}
//
//#include <stdlib.h>
//int main()
//{
//	char arr[10000];
//	gets(arr);
//	int sz = strlen(arr);
//	for (int i = sz - 1; i >= 0; i--)
//	{
//		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
//		{
//			printf("%c", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	long long int input = 0, ret = 1,temp=0;
//	scanf("%lld", &input);
//	temp =ret= input;
//	while (ret >= 10)
//	{
//		ret = 1;
//		while (temp >0)
//		{
//			if (temp % 10 != 0)
//			{
//				ret *= temp % 10;
//				temp /= 10;
//			}
//			else
//				temp /= 10;
//		}
//		temp = ret;
//		printf("%lld\n", ret);
//	}
//
//	return 0;
//}
//
//int yueshu(int n,int m)
//{
//	int ret = n / m;
//	int div = n % m;
//	while (div != 0)
//	{
//		n = m; m = div;
//		ret = n / m;
//		div = n % m;
//	}
//	if (m > 1)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[n][m];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int r, c;
//	scanf("%d %d", &r, &c);
//	int count = 0;
//	int counter = 0, max = 0; int num = 0;
//	int arr[1000] = { 0 };
//	while(count<=4)
//	{
//		while(yueshu(arr[r][c], arr[r + 1][c]))//ÏòÉÏËÑË÷
//		{
//			counter++;
//			while (yueshu(arr[r][c], arr[r + 1][c]))
//			{
//				counter++;
//				r = r + 1;
//			}
//			max = counter;
//			while (yueshu(arr[r - 1][c], arr[r - 1][c]))
//			{
//				r -= 1;
//			}
//		}
//	}
//	return 0;
//}
//
//
//
////
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int arr[1000];
//	int i=1; 
//	for (i = 1; i < n + 1; i++)
//		scanf("%d", &arr[i]);
//	int max = 0;
//	for (i = 1; i < n + 1; i++)
//	{
//		int  sum = 0;
//		int j=0;
//		for (j = 0; j < k; j++)
//		{
//			sum += arr[i + j];
//		}
//		if (max < sum)
//			max = sum;
//	}
//	printf("%d", max);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int yueshu(int n, int m)
//{
//	int ret = n / m;
//	int div = n % m;
//	while (div != 0)
//	{
//		n = m; m = div;
//		ret = n / m;
//		div = n % m;
//	}
//	if (m > 1)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[n][m];
//	int i=0;
//	for (int i = 0; i < n; i++)
//	{
//		int j=0;
//		for (int j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int r, c;
//	scanf("%d %d", &r, &c);
//	printf("%d", 5);
//	return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int arr[];
//	int i=1; 
//	for (i = 1; i < n + 1; i++)
//		scanf("%d", &arr[i]);
//	int max = 0;
//	for (i = 1; i < n + 1; i++)
//	{
//		int  sum = 0;
//		int j=0;
//		for (j = 0; j < k; j++)
//		{
//			sum += arr[i + j];
//		}
//		if (max < sum)
//			max = sum;
//	}
//	printf("%d", max);
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int yueshu(int n,int m)
//{
//	int ret = n / m;
//	int div = n % m;
//	while (div != 0)
//	{
//		n = m; m = div;
//		ret = n / m;
//		div = n % m;
//	}
//	if (m > 1)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int arr[n][m];
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//	    int j = 0;
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int r, c;
//	scanf("%d %d", &r, &c);
//    printf("%d",5);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	long long int input = 0, ret = 1,temp=0;
//	scanf("%lld", &input);
//	temp =ret= input;
//	while (ret >= 10)
//	{
//		ret = 1;
//		while (temp >0)
//		{
//			if (temp % 10 != 0)
//			{
//				ret *= temp % 10;
//				temp /= 10;
//			}
//			else
//				temp /= 10;
//		}
//		temp = ret;
//		printf("%lld\n", ret);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[10000];
//	gets(arr);
//	int sz = strlen(arr);
//	int i=sz-1;
//	for (i = sz - 1; i >= 0; i--)
//	{
//		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
//		{
//			printf("%c", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[10];
//	gets(arr);
//	char temp[7] = { 0 };
//	int i=1;
//	for (i = 1; i < 6; i++)
//		temp[i - 1] = arr[i];
//	temp[5] = arr[0];
//	puts(temp);
//	return 0;
//}
//
//
//
int main()
{
	return 0;
}
