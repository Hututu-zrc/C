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

//L1-005 考试座位号
#include <stdio.h>
int main()
{
	int input=0;
	scanf("%d",&input);
	char arr[input][17]; 
	int att[input],exam[input];
	for(int i=0;i<input;i++)
	{
		scanf("%s",arr[i]);
		scanf("%d",&att[i]);
		scanf("%d",&exam[i]);
	}
	int num=0;
	scanf("%d",&num);
	int count[num];
	for(int i=0;i<num;i++)
		scanf("%d",&count[i]);
	int tmp=0;
	while(tmp<num)
	{
		for(int i=0;i<input;i++)
		{
			if(att[i]==count[tmp])
				{
					printf("%s %d\n",arr[i],exam[i]);
					tmp++;
				}
		}
	}
	return 0;
} 

