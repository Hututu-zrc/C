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


//L1-009 N个数求和  (未过）
//#include <stdio.h>
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	int arr[10][3];
//	int tmp1,tmp2;
//	for(int i=0;i<input;i++)
//	{
//		if(scanf("%d/%d",&tmp1,&tmp2))
//		{
//			arr[i][0]=tmp1; 
//			arr[i][1]=tmp2; 
//			arr[i][2]=0;
//		}
//		else if(scanf("-%d/%d",&tmp1,&tmp2))
//		{
//			arr[i][0]=tmp1; 
//			arr[i][1]=tmp2; 
//			arr[i][2]=1;
//		}
//	}
//	int max=0,sum=0;
//	for(int i=0;i<input;i++)
//	{
//		if(max<arr[i][1])
//			max=arr[i][1];
//	}
//	int signal = 1;
//	for (int i = max; i > 0; i++)
//	{
//		for (int j = 0; j < input; j++)
//		{
//			signal = i % arr[j][1];
//			if (signal != 0)
//				break;
//		}
//		if (signal == 0)
//		{
//			max = i;
//			break;
//		}
//	}
//
//	for(int i=0;i<input;i++)
//	{
//		arr[i][0]*=(max/arr[i][1]);
//		if(arr[i][2]==0)
//			sum+=arr[i][0];
//		else
//			sum-=arr[i][0];
//			
//	}
//	int min=max>sum?sum:max;
//	for(int i=min-1;i>0;i--)
//	{
//		if(max%i==0 && sum%i==0)
//		{
//			min=i;
//			break;
//		}
//	}
//	sum/=min;
//	max/=min;
//	int ret1=sum/max,ret2=sum%max;
//	if(ret2==0)
//		printf("%d",ret1);
//	else if(ret1==0)
//		printf("%d/%d",ret2,max);
//	else
//		printf("%d %d/%d",ret1,ret2,ret1);
//	return 0;
// } 
//

//L1-010 比较大小
//#include <stdio.h>
//int main()
//{
//	int max,min,mid,a,b,c;
//	scanf("%d %d %d",&a,&b,&c);
//	max=a>(b>c?b:c)?a:(b>c?b:c);
//	min=a<(b<c?b:c)?a:(b<c?b:c);
//	if(a!=max && a!=min)
//		mid=a;
//	else if(b!=max && b!=min)
//		mid=b;
//	else if(c!=max && c!=min)
//		mid=c;
//	printf("%d->%d->%d",min,mid,max);
//	return 0;
// } 

//////L1-011 A-B
//#include <stdio.h>
//int main()
//{
//	char arr1[10005]={0};
//	char arr2[10005]={0};
//	char arr3[10005]={0};
//	fgets(arr1,sizeof(arr1),stdin);
//	fgets(arr2,sizeof(arr2),stdin);
//	int count=0;
//	for(int i=0;arr1[i]!='\n';i++)
//	{
//		int signal=0;
//		for(int j=0;arr2[j]!='\n';j++)
//		{
//			if(arr1[i]==arr2[j])
//				{
//					signal=1;
//					break;
//				}
//		}
//		if(signal==0)
//		{
//			arr3[count]=arr1[i];
//			count++;
//		}
//	}
//	printf("%s",arr3);
//	return 0;
//}

//int main()
//{
//	char arr[100] = "12304560";
//	return 0;
//}


////L1-012 计算指数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("2^%d = %d", input,(int)pow(2, input));
//	return 0;
//}

//L1-013 计算阶乘和
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	int sum = 0;
//	for (int i = 1; i <= input; i++)
//	{
//		int ret = 1;
//		for (int j = 1; j <= i; j++)
//			ret *= j;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////L1-014 简单题
//#include <stdio.h>
//int main()
//{
//    printf("This is a simple problem.");
//    return 0;
//}

//L1-015 跟奥巴马一起画方块
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	double input = 0;
//	char ch;
//	scanf("%lf %c", &input, &ch);
//	for (int i = 0; i < round(input / 2); i++)
//	{
//		for (int j = 0; j < input; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

/////L1 - 016 查验身份证
//#include <stdio.h>
//int main()
//{
//	int arr[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
//	int input = 0;
//	scanf("%d", &input);
//	char M[12] = { "10X98765432"};
//	char ID[input][19];
//	for (int i = 0; i < input; i++)
//		scanf("%s", ID[i]);
//	char test[input] = { 0 };
//	for (int j = 0; j < input; j++)
//	{
//		int sum = 0;
//		for (int i = 0; i < 17; i++)
//			sum += (ID[j][i]-'0') * arr[i];
//		test[j] = M[sum % 11];
//	}
//	int flag = 0;
//	for (int i = 0; i < input; i++)
//	{
//		if (test[i] != ID[i][17])
//		{
//			printf("%s\n", ID[i]);
//			flag = 1;
//		}
//	}
//	if (flag == 0)
//		printf("All passed");
//	return 0;
//}

//L1 - 017 到底有多二
//#include <stdio.h>
//int main()
//{
//	long long int input;
//	scanf("%lld", &input);
//	double mul = 0;
//	if (input < 0)
//	{
//		mul += 0.5;
//		input = (-input);
//	}
//	if (input % 2 == 0)
//		mul += 1;
//	double count_2 = 0,count_num=0;
//	while (input)
//	{
//		if (input % 10 == 2)
//			count_2++;
//		count_num++;
//		input /= 10;
//	}
//	double ret = 2 * mul * (count_2 / count_num) * 100;
//	printf("%.2f", ret);
//	putchar('%');
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char input[55];
//	scanf("%s", input);
//	double mul1=1, mul2 = 1;
//	int sz = strlen(input);
//	if (input[0] == '-')
//		mul1=1.5;
//	if ((input[sz - 1]-'0')%2==0)
//		mul2= 2;
//	double count_2 = 0;
//	for (int i = 0; i < sz; i++)
//		if (input[i] == '2')
//			count_2++;
//	double count_num = 0;
//	if (input[0] == '-')
//		count_num = sz - 1;
//	else
//		count_num = sz;
//	double ret =1 * mul1*mul2 * (count_2 / count_num) * 100;
//	
//	printf("%.2f", ret);
//	putchar('%');
//	return 0;
//}

//L1-018 大笨钟
//#include <stdio.h>
//int main()
//{
//	int hour, minu;
//	scanf("%d:%d", &hour, &minu);
//	if (hour >= 0 && hour <= 11)
//	{
//		printf("Only %02d:%02d.  Too early to Dang.", hour, minu);
//	}
//	else if( hour ==12 && minu ==0)
//		printf("Only %02d:%02d.  Too early to Dang.", hour, minu);
//	else
//	{
//		if (minu == 0)
//			for (int i = 0; i < hour - 12; i++)
//				printf("Dang");
//		else 
//			for(int i=0;i<hour-11;i++)
//				printf("Dang");
//	}
//	return 0;
//}



//L1-019 谁先倒
//#include <stdio.h>
//int main()
//{
//	int quan_A,quan_B,input,count_a=0,count_b=0;
//	int docu[input][4];
//	scanf("%d %d",&quan_A,&quan_B);
//	scanf("%d",&input);
//	for(int i=0;i<input;i++)
//	{
//		scanf("%d %d %d %d",&docu[i][0],&docu[i][1],&docu[i][2],&docu[i][3]);
//	} 
//	for(int i=0;i<input;i++)
//	{
//	
//		if(docu[i][1]==docu[i][0]+docu[i][2] && docu[i][3] != docu[i][0] + docu[i][2])
//			count_a++;
//		if(docu[i][3]==docu[i][0]+docu[i][2] && docu[i][1] != docu[i][0] + docu[i][2])
//			count_b++;
//		if(count_a>quan_A)
//		{
//			printf("A\n%d",count_b); 
//			break; 
//		} 
//		if(count_b>quan_B)
//		{
//			printf("B\n%d",count_a); 
//			break;
//		}
//	}
//	return 0;
//}
//

//L1-020 帅到没朋友  15分
//#include <stdio.h>
//int main()
//{
//	//读入 
//	int N;
//	scanf("%d",&N);
//	int data[100][1000];
//	for(int i=0;i<N;i++)
//	{
//		scanf("%d",&data[i][0]);
//		for(int j=1;j<=data[i][0];j++)
//			scanf("%d",&data[i][j]);
//	}
//	int input,sz;
//	scanf("%d",&input);
//	sz=input;
//	int arr[100],flag[100];
//	for(int i=0;i<input;i++)
//	{
//		scanf("%d",&arr[i]);
//		flag[i]=0;
//	}
//	//判断是不是有重复的数据，把重复的数据归为-1 
//	for(int i=0;i<input;i++)
//	{
//		for(int j=i+1;j<input;j++)
//		{
//			if(arr[i]==arr[j])
//			{
//					arr[j]=-1;
//					sz--;
//			}
//		}
//	}
//	for(int k=0;k<input;k++)
//	{
//		if(arr[k]<0)
//			continue;
//		//循环判断  利用辅助数组计算数据出现的个数 
//		for(int i=0;i<N;i++)
//		{
//			for(int j=1;j<=data[i][0];j++)
//			{
//				if(arr[k]==data[i][j])
//					flag[k]++;
//			}
//		}
//	} 
//	//判断是不是有一个人的朋友圈 
//	for(int i=0;i<input;i++)
//	{
//		if(flag[i]==1)
//		{
//			for(int j=0;j<N;j++)
//			{
//				if(data[j][0]==1 && data[j][1]==arr[i])
//					flag[i]=0;
//			}
//		}
//	}
//	//计算最后一位需要打印的数据，并记下它的下标 
//	int signal=-1;
//	for(int i=input-1;i>=0;i--)
//	{
//		if(flag[i]==0 && arr[i] >= 0)
//		{
//			signal=i;
//			break;
//		}
//	}
//	int sign=0;
//	//打印 
//	for(int i=0;i<=signal;i++)
//	{
//		if(flag[i]==0 )
//		{
//			if(i==signal)
//			{
//				printf("%d",arr[i]);
//			}
//			else
//			{
//				printf("%d ",arr[i]);
//			}
//			sign=1;
//		}
//	}
//	if(sign==0)
//	{
//		printf("No one is handsome");
//	}
//	return 0;
// } 
//




//L1-021 重要的话说三遍
//#include <iostream>
//using namespace std;
//int main()
//{
//    cout<<"I'm gonna WIN!"<<endl;
//    cout<<"I'm gonna WIN!"<<endl;
//    cout<<"I'm gonna WIN!"<<endl;
//    system("pause");
//    return 0;
//}

////L1-022 奇偶分家
//#include <iostream>
//using namespace std;
//int main()
//{
//	int input;
//	cin>>input;
//	int arr[input];
//	int even=0,odd=0;
//	for(int i=0;i<input;i++)
//	{
//		scanf("%d",&arr[i]);
//		if(arr[i]%2==0)
//			even++;
//		else 
//			odd++;
//	}
//	cout<<odd<<" "<<even<<endl;
//	system("pause");
//	return 0;
//}

//L1-023 输出GPLT
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr[10000];
//	scanf("%s",arr);
//	int sz=strlen(arr);
//	int ass[4];
//	for (int i = 0; i < 4; i++)
//		ass[i] = 0;
//	for(int i=0;i<sz;i++)
//	{
//		if(arr[i]=='G' || arr[i]=='g')
//			ass[0]++;
//		if(arr[i]=='P' || arr[i]=='p')
//			ass[1]++;
//		if(arr[i]=='L' || arr[i]=='l')
//			ass[2]++;
//		if(arr[i]=='T' || arr[i]=='t')
//			ass[3]++;
//	}
//	char alp[5]="GPLT";
//	while(1)
//	{
//		if(ass[0]!=0)
//		{
//			putchar(alp[0]);
//			ass[0]--;
//		}
//		if(ass[1]!=0)
//		{
//			putchar(alp[1]);
//			ass[1]--;
//		}
//		if(ass[2]!=0)
//		{
//			putchar(alp[2]);
//			ass[2]--;
//		}
//		if (ass[3]!=0)
//		{
//			putchar(alp[3]);
//			ass[3]--;
//		}
//		
//		if(ass[0]==0 &&ass[1]==0 && ass[2]==0 && ass[3]==0)
//			break;
//	}
//	return 0;
//} 


//L1-024 后天
//#include <stdio.h>
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	printf("%d",(input+1)%7+1);
//	return 0;
// } 

//////L1-025 正整数A+B
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr[1000] = { 0 };
//	fgets(arr, sizeof(arr), stdin);
//	char* token1 = strtok(arr, " ");
//	char* token2 = strtok(NULL, " ");
//	char* token3 = strtok(NULL, " ");
//	int sz1 = strlen(token1), sz2 = strlen(token2);
//	int digit1 = 0, digit2 = 0;
//	for (int i = 0; i < sz1; i++)
//	{
//		if ((*(token1 + i)) < '1' || (*(token1 + i)) > '9')
//		{
//			digit1 = 1;
//			break;
//		}
//	}
//	for (int i = 0; i < sz2 - 1; i++)
//	{
//		if ((*(token2 + i)) < '1' || (*(token2 + i)) > '9')
//		{
//			digit2 = 1;
//			break;
//		}
//	}
//	if (token3 != NULL)
//		digit2 = 1;
//	if (atoi(token1) < 0 && atoi(token1) > 1001)
//		digit1 = 1;
//	else if (atoi(token2) < 0 && atoi(token2) > 1001)
//		digit2 = 1;
//	if (digit1 != 0 && digit2 != 0)
//		printf("? + ? = ?");
//	else if (digit1 != 0)
//		printf("? + %d = ?", atoi(token2));
//	else if (digit2 != 0)
//		printf("%d + ? = ?", atoi(token1));
//	else
//		printf("%d + %d = %d", atoi(token1), atoi(token2), atoi(token1) + atoi(token2));
//	return 0;
//}
//
//

//L1-026 I Love GPLT
//#include <stdio.h>
//int main()
//{
//	char arr[]={"I Love GPLT"};
//	for(int i=0;arr[i]!='\0';i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}


////L1-027 出租
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char iph[12];
//	scanf("%s",iph);
//	char temp[12];
//	strcpy(temp,iph);
//	for(int i=0;i<10;i++)
//	{
//		for(int j=0;j<10-i;j++)
//		{
//			if(temp[j]<temp[j+1])
//			{
//				char ch=temp[j];
//				temp[j]=temp[j+1];
//				temp[j+1]=ch;
//			}
//		}
//	}
//	int tmp = 12;
//	for(int i=0;i<tmp;i++)
//	{
//		if(temp[i]==temp[i+1])
//		{
//			for(int j=i;j<tmp;j++)
//				temp[j]=temp[j+1];
//			tmp--; i--;
//		}
//	}
//	int sz = strlen(temp);
//	char index[12];
//	for (int i = 0; i < 12; i++)
//	{
//		for (int j = 0; j < sz; j++)
//		{
//			if (iph[i] == temp[j])
//				index[i] = j+'0';
//		}
//	}
//	printf("int[] arr = new int[]{");
//	for (int i = 0; i < sz - 1; i++)
//		printf("%c,", temp[i]);
//	printf("%c};\n", temp[sz-1]);
//	printf("int[] index = new int[] {");
//	for (int i = 0; i <10; i++)
//		printf("%c,", index[i]);
//	printf("%c};", index[10]);
//	return 0;
//}


////L1-028 判断素数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	if(n==1)
//		return 0;
//	for(int i=2;i<=sqrt(n);i++)
//	{
//		if(n%i==0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	int arr[input];
//	for(int i=0;i<input;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for(int i=0;i<input;i++)
//	{
//		if(is_prime(arr[i])==1)
//			puts("YES");
//		else 
//			puts("NO");
//	}
//	return 0;
//}

//L1-029 是不是太胖了
//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d",&input);
//	double ret=(input-100)*0.9*2;
//	printf("%.1f",ret);
//	return 0;
//}
//


////L1-030 一帮一
//#include <stdio.h>
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	char arr[input][10];
//	int flag[input];
//	for(int i=0;i<input;i++)
//	{
//		scanf("%d",&flag[i]);
//		scanf("%s",arr[i]);
//	}
//	int count=input/2;
//	for(int i=0;i<input;i++)
//	{
//		if(flag[i]==0)
//		{
//			for(int j=input-1;j>=0;j--)
//			{
//				if(flag[j]==1)
//				{
//					if(count!=1)
//					{
//						printf("%s %s\n",arr[i],arr[j]); 
//						count--; 
//					}
//					else
//						printf("%s %s",arr[i],arr[j]);
//					flag[i]=flag[j]=-1;
//					break;
//				}
//			}
//		}
//		else if(flag[i]==1)
//		{
//			for(int j=input-1;j>=0;j--)
//			{
//				if(flag[j]==0)
//				{
//					if(count!=1)
//					{
//						printf("%s %s\n",arr[i],arr[j]); 
//						count--; 
//					}
//					else
//						printf("%s %s",arr[i],arr[j]);
//					flag[i]=flag[j]=-1;
//					break;
//				}	
//			}
//		}
//	}
//	return 0; 
//}
//


////L1-031 到底是不是太胖了
//#include <stdio.h>
//int main()
//{
//	int input;
//	scanf("%d",&input);
//	int arr[input][2];
//	for(int i=0;i<input;i++)
//		scanf("%d %d",&arr[i][0],&arr[i][1]);
//	double Standard[input];
//	for(int i=0;i<input;i++)
//		Standard[i]=(arr[i][0]-100)*0.9*2;
//	for(int i=0;i<input;i++)
//	{
//		if(arr[i][1]-Standard[i]<=-Standard[i]*0.1)
//			puts("You are tai shou le!");
//		else if(arr[i][1]-Standard[i]>=Standard[i]*0.1)
//			puts("You are tai pang le!");
//		else 
//			puts("You are wan mei!");
//	 } 
//	return 0;
//}
//


//L1-032 Left-pad
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int input;
//	char ch;
//	scanf("%d %c",&input,&ch);
//	getchar();
//	char arr[10000];
//	gets(arr);
//	int sz=strlen(arr);
//	int PL=input-sz;
//	if(PL<=0)
//		for(int i=sz-input;i<sz;i++)
//			printf("%c",arr[i]);
//	else
//	{
//		for(int i=0;i<input-sz;i++)
//			printf("%c",ch);
//		printf("%s",arr);
//	}
//	
//	return 0;
//}
//

//L1-033 出生年  (不会） 
//#include <stdio.h>
//int main()
//{
//	int year,num;
//	scanf("%d %d",&year,&num);
//	int arr[4];
//	for(int j=0;j<4;j++)
//		arr[j]=0;
//	int i=4;
//	while(year)
//	{
//		arr[i]=year%10;
//		year/=10;
//		i--;
//	}
//	int flag[10];
//	for(int j=0;j<10;j++)
//		flag[j]=0;
//	for(int j=0;j<4;j++)
//	{
//		flag[arr[j]]=1;
//	}
//	int count=0;
//	for(int j=0;j<10;j++)
//		if(flag[j]!=0)
//			count++;
//	while(count<num)
//	{
//		year++;
//	}
//	return 0;
//	
//}
//

//// L1-034 点赞
//#include <stdio.h>
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    int rub[input];
//    int character[10000];
//    int count_num = 0;
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%d", &rub[i]);
//        for (int j = 0; j < rub[i]; j++)
//        {
//            scanf("%d", &character[count_num]);
//            count_num++;
//        }
//    }
//    int flag[count_num];
//    for (int i = 0; i < count_num; i++)
//        flag[i] = 1;
//    int max = 0, signal = 0;
//    for (int i = 0; i < count_num; i++)
//    {
//
//        for (int j = i + 1; j < count_num; j++)
//        {
//
//            if (character[i] == 0)
//                continue;
//            if (character[i] == character[j])
//            {
//                character[j] = 0;
//                flag[i]++;
//            }
//            if (max < flag[i])
//            {
//                max = flag[i];
//                signal = i;
//            }
//            if (max == flag[i])
//            {
//                if (character[signal] < character[i])
//                {
//                    signal = i;
//                }
//            }
//        }
//    }
//    printf("%d %d", character[signal], flag[signal]);
//    return 0;
//}

////L1-035 情人节
//#include <stdio.h>
//int main()
//{
//    char arr[10000][12];
//    int count = 1;
//
//    while (1)
//    {
//        scanf("%s", arr[count]);
//        if (arr[count][0] == '.')
//            break;
//        count++;
//
//    }
//    if (count < 2)
//        printf("Momo... No one is for you ...");
//    else if (count < 14)
//        printf("%s is the only one for you...", arr[2]);
//    else
//        printf("%s and %s are inviting you to dinner...", arr[2], arr[14]);
//    return 0;
//}



////L1-036 A乘以B
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    printf("%d", a * b);
//    return 0;
//}

////L1-037 A除以B
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	if (b < 0)
//	{
//		double ret = a*1.0 / b;
//		printf("%d/(%d)=%.2f", a, b, ret);
//	}
//	else if (b == 0)
//	{
//		printf("%d/%d=Error", a, b);
//	}
//	else
//	{
//		double ret = a *1.0/ b;
//		printf("%d/%d=%.2f", a, b, ret);
//	}
//	return 0;
//}

//L1-038 新世界
//#include <stdio.h>
//int main()
//{
//	fprintf(stdout, "%s", "Hello World\nHello New World");
//	return 0;
//}
// 

//L1-039 古风排版  (20:18)
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int input;
//	scanf("%d", &input);
//	getchar();
//	char arr[1002];
//	fgets(arr, sizeof(arr), stdin);
//	int sz = strlen(arr);
//	arr[sz - 1] = '\0';
//	int col = sz / input;
//	int count = 0;
//	char ans[input][col];
//	for (int j = col - 1; j >= 0; j--)
//	{
//		for (int i = 0; i < input; i++)
//		{
//			if (count <sz - 1)
//			{
//				ans[i][j] = arr[count];
//				count++;
//			}
//			else
//            {
//                if(sz==2)
//                {
//                	printf("%c",ans[0][0]);
//                	return 0;
//				}
//                else
//                    ans[i][j] = ' ';
//            }
//		}
//	}
//	for (int i = 0; i < input; i++)
//	{
//		for (int j = 0; j < col; j++)
//			printf("%c", ans[i][j]);
//		printf("\n");
//	}
//	return 0;
//}


//L1-040 最佳情侣身高差
#include <stdio.h>
#include <string.h>
int main()
{
	int N;
	scanf("%d",&N);
	getchar();

	char arr1[N];
	double arr2[N];
	for(int i=0;i<N;i++)
	{
		scanf("%c",&arr1[i]);
		scanf("%lf",&arr2[i]);
		getchar();
		if(arr1[i]=='F')
			arr2[i]*=1.09;
		else 
			arr2[i]/=1.09;
	}
	for(int i=0;i<N-1;i++)
		printf("%.2f\n",arr2[i]);
	printf("%.2f",arr2[N-1]);
	return 0;
}



//L1-052 2018我们要赢
//#include <stdio.h>
//int main()
//{
//	printf("2018\nwo3 men2 yao4 ying2 !");
//	return 0;
//}




////L1-057 PTA使我精神焕发
//#include <stdio.h>
//int main()
//{
//    printf("PTA shi3 wo3 jing1 shen2 huan4 fa1 !");
//    return 0;
//}


////L1-058 6翻了
//#include <stdio.h>
//int main()
//{
//    char arr1[1002];
//    char arr2[1002];
//    fgets(arr1,1002,stdin);
//    int count=0,length=0;
//    for(int i=0;arr1[i]!='\0';i++)
//    {
//        if(arr1[i]=='6')
//        {
//            count++;
//        }
//        if(arr1[i+1]!='6' && arr1[i]=='6')
//        {
//            if(count>3 && count<=9)
//            {
//                arr2[length]='9';
//                length++; 
//                count=0;
//            }
//            else if(count>9)
//            {
//                arr2[length]='2';
//                arr2[length+1]='7';
//                length+=2;
//                count=0;
//       		}
//            else if(count<=3)
//            {
//            	for(int i=0;i<count;i++)
//            	{
//            		arr2[length]='6';
//            		length++;
//				}
//				count=0;
//			}
//        }
//        if(arr1[i]!='6')
//        {
//            arr2[length]=arr1[i];
//            length++;
//        }
//    }
//    arr2[length-1] = '\0';
//    printf("%s",arr2);
//    return 0;
//}












