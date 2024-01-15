#define _CRT_SECURE_NO_WARNINGS


////L1——打印沙漏
//#include <stdio.h> 
//#define Blank(b)  for (int m = 0; m < b / 2; m++) printf(" ");
//int main()
//{
//    int input;
//    char ch;
//    scanf("%d %c", &input, &ch);
//    int count = 1, temp = input, i = 3;
//    //算出最大的层数（计算的是，出去上半部分里面中间打印一个的层次）
//    while (temp > 0)
//    {
//        temp -= 2 * i;
//        i += 2;
//        count++;
//    }
////打印上半部分
//    for (int j = count - 1; j >= 1; j--)
//    {
//        int blank = 2 * (count - 1) - 2 * j;
//        Blank(blank);
//        for (int k = 2 * j - 1; k > 0; k--)
//            printf("%c", ch);
//        printf("\n");
//    }
//    //打印下半部分
//    for (int j = 2; j <= count - 1; j++)
//    {
//        int blank = 2 * (count - 1) - 2 * j;
//        Blank(blank);
//        for (int k = 0; k < 2 * j - 1; k++)
//            printf("%c", ch);
//        printf("\n");
//    }
//    printf("%d\n", input - 2 * (count - 1) * (count - 1) + 1);
//}

//L1-003 个位数统计
//#include <stdio.h>
//int main()
//{
//	char input[1001]={0};
//	int output[10][1];
//	scanf("%s",input);
//	for (int i = 0; i < 10; i++)
//		output[i][0] = 0;
//	for(int i=0;input[i]!='\0';i++)
//	{
//		output[input[i]-'0'][0]+=1;
//	} 
//	for(int i=0;i<10;i++)
//	{
//		if(output[i][0])
//			printf("%d:%d\n",i,output[i][0]);
//	}
//	return 0;
// } 

//L1-004 计算摄氏温度
//#include  <stdio.h>
//int main()
//{
//    int F=0;
//    scanf("%d",&F);
//    printf("Celsius = %d\n",(int)(5*(F-32)/9));
//    return 0;
//}

////L1-005 考试座位号
//#include <stdio.h>
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	char arr[input][17]; 
//	int att[input],exam[input];
//	for(int i=0;i<input;i++)
//	{
//		scanf("%s",arr[i]);
//		scanf("%d",&att[i]);
//		scanf("%d",&exam[i]);
//	}
//	int num=0;
//	scanf("%d",&num);
//	int count[num];
//	for(int i=0;i<num;i++)
//		scanf("%d",&count[i]);
//	int tmp=0;
//	while(tmp<num)
//	{
//		for(int i=0;i<input;i++)
//		{
//			if(att[i]==count[tmp])
//				{
//					printf("%s %d\n",arr[i],exam[i]);
//					tmp++;
//				}
//		}
//	}
//	return 0;
//} 


//L1-006 连续因子


//L1-007 念数字
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	const char *arr[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//	char ch[]="fu";
//	if(input<0)
//	{
//		printf("%s ",ch);
//		input=(-input);
//	}
//	int temp=input,count=0;
//	int num[200];
//	while(temp)
//	{
//		num[count]=temp%10;
//		count++;
//		temp/=10;
//	}
//	if(input==0)
//		printf("%s",arr[input]);
//	else
//	{
//		for(int i=count-1;i>0;i--)
//			printf("%s ",arr[num[i]]);
//		printf("%s",arr[num[0]]);
//			
//	}
//	return 0;
//}


//L1-008 求整数段和
//#include <stdio.h>
//int main()
//{
//	int A,B;
//	scanf("%d %d",&A,&B);
//	int count=0,sum=0;
//	for(int i=A;i<=B;i++)
//	{
//		printf("%5d",i);
//		count++;
//		sum+=i;
//		if(count==5 && i!=B)
//		{
//			printf("\n");
//			count=0;
//		}
//	}
//	printf("\nSum = %d",sum);
//	return 0;
// } 


//L1-009 N个数求和
#include <stdio.h>
int main()
{
	int input=0;
	scanf("%d",&input);
	int arr[input][3];
	int tmp1,tmp2;
	for(int i=0;i<input;i++)
	{
		if(scanf("%d/%d",&tmp1,&tmp2))
		{
			arr[i][0]=tmp1; 
			arr[i][1]=tmp2; 
			arr[i][2]=0;
		}
		else if(scanf("-%d/%d",&tmp1,&tmp2))
		{
			arr[i][0]=tmp1; 
			arr[i][1]=tmp2; 
			arr[i][2]=1;
		}
	}
	int max=0,sum=0;
	for(int i=0;i<input;i++)
	{
		if(max<arr[i][1])
			max=arr[i][1];
	}
	for(int i=0;i<input;i++)
	{
		arr[i][0]*=(max/arr[i][1]);
		if(arr[i][2]==0)
			sum+=arr[i][0];
		else
			sum-=arr[i][0];
			
	}
	int min=max>sum?sum:max;
	for(int i=min-1;i>0;i++)
	{
		if(max%i==0 && sum%i==0)
		{
			min=i;
			break;
		}
	}
	sum/=min;
	max/=min;
	int ret1=sum/max,ret2=sum%max;
	if(ret2==0)
		printf("%d",ret1);
	else if(ret1==0)
		printf("%d/%d",ret2,ret1);
	else
		printf("%d %d/%d",ret1,ret2,ret1);
	return 0;
 } 

