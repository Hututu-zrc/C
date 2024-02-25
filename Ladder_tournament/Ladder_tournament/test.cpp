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


////////L1-009 N个数求和  (未过）
//#include <stdio.h>
//int main()
//{
//	int input=0;
//	scanf("%d",&input);
//	long long int arr[10][3];
//	long long int tmp1,tmp2;
//	for(int i=0;i<input;i++)
//	{
//		if(scanf("%lld/%lld",&tmp1,&tmp2))
//		{
//			arr[i][0]=tmp1; 
//			arr[i][1]=tmp2; 
//			arr[i][2]=0;
//		}
//		else if(scanf("-%lld/%lld",&tmp1,&tmp2))
//		{
//			arr[i][0]=tmp1; 
//			arr[i][1]=tmp2; 
//			arr[i][2]=1;
//		}
//	}
//	long long int max=0,sum=0;
//	//求出分母最大的数 
//	for(int i=0;i<input;i++)
//	{
//		if(max<arr[i][1])
//			max=arr[i][1];
//	}
//	int signal = 1;
//	for (int i = max; i > 0; i++)
//	{
//		//寻找最小公倍数 
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
//	//同分母，相加减 
//	for(int i=0;i<input;i++)
//	{
//		arr[i][0]*=(max/arr[i][1]);
//		if(arr[i][2]==0)
//			sum+=arr[i][0];
//		else
//			sum-=arr[i][0];
//			
//	}
//	long long int temp1=sum,temp2=max;
//	while(temp2)
//	{
//		long long int tmp=temp1%temp2;
//		temp1=temp2;
//		temp2=tmp;
//	 } 
//
//	sum/=temp1;
//	max/=temp1;
//	long long int ret1=sum/max,ret2=sum%max;
//	if(ret2==0)
//		printf("%d",ret1);
//	else if(ret1==0)
//		printf("%d/%d",sum,max);
//	else
//		printf("%d %d/%d",ret1,ret2,ret1);
//	return 0;
// } 


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

//
////L1-040 最佳情侣身高差
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int N;
//	scanf("%d",&N);
//	getchar();
//
//	char arr1[N];
//	double arr2[N];
//	for(int i=0;i<N;i++)
//	{
//		scanf("%c",&arr1[i]);
//		scanf("%lf",&arr2[i]);
//		getchar();
//		if(arr1[i]=='F')
//			arr2[i]*=1.09;
//		else 
//			arr2[i]/=1.09;
//	}
//	for(int i=0;i<N-1;i++)
//		printf("%.2f\n",arr2[i]);
//	printf("%.2f",arr2[N-1]);
//	return 0;
//}

////L1-041 寻找250
//#include <stdio.h>
//int main()
//{
//	int input;
//	int count = 0;
//	while (1)
//	{
//		scanf("%d", &input);
//		count++;
//		if (input == 250)
//		{
//			printf("%d", count);
//			break;
//		}
//	}
//	return 0;
//}

//L1-042 日期格式化
//#include <stdio.h>
//int main()
//{
//	int month, day, year;
//	scanf("%d-%d-%d", &month, &day, &year);
//	printf("%4d-%02d-%02d", year, month, day);
//	return 0;
//}

//L1-043 阅览室  使用队列 （未写）
//#include <stdio.h>
//int calculate_interval(int s_hour,int s_min,int l_hour,int l_min)
//{
//	int sum = 0;
//	if (s_min != 0)
//	{
//		sum += (60 - s_min);
//		s_hour++;
//		sum += (l_hour - s_hour) * 60 + l_min;
//		return sum;
//	}
//	else
//	{
//		sum += (l_hour - s_hour) * 60 + l_min;
//		return sum;
//	}
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//
//	return 0;
//}

//L1-044 稳赢
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	int inter = 0;
//	scanf("%d", &inter);
//	getchar();
//	char arr[100];
//	int count = 0;
//	while (fgets(arr, sizeof(arr), stdin) != NULL)
//	{
//		int sz = strlen(arr);
//		arr[sz - 1] = '\0';
//		if (strcmp(arr, "End") == 0)
//			return 0;
//		if (count < inter)
//		{
//			if (strcmp(arr, "ChuiZi") == 0)
//			{
//				printf("Bu\n");
//				count++;
//			}
//			else if (strcmp(arr, "JianDao") == 0)
//			{
//				printf("ChuiZi\n");
//				count++;
//			}
//			else
//			{
//				printf("JianDao\n");
//				count++;
//			}
//		}
//		else
//		{
//			if (strcmp(arr, "ChuiZi") == 0)
//			{
//				printf("ChuiZi\n");
//				count = 0;
//			}
//			else if (strcmp(arr, "JianDao") == 0)
//			{
//				printf("JianDao\n");
//				count = 0;
//			}
//			else
//			{
//				printf("Bu\n");
//				count = 0;
//			}
//		}
//	}
//	return 0;
//}

//L1-045 宇宙无敌大招呼
//#include <stdio.h>
//int main()
//{
//	char arr[10];
//	gets(arr);
//	printf("Hello %s", arr);
//	return 0;
//}

//L1-046 整除光棍 难点：大数相乘 (不会）

////L1-047 装睡
//#include <stdio.h>
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    char name[N][5];
//    int data[N][2];
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%s", name[i]);
//        scanf("%d %d", &data[i][0], &data[i][1]);
//        if (data[i][0] > 20 || data[i][0] < 15)
//            printf("%s\n", name[i]);
//        else if (data[i][1] < 50 || data[i][1]>70)
//            printf("%s\n", name[i]);
//    }
//    return 0;
//}
// 

//L1-048 矩阵A乘以B
//#include <stdio.h>
//int main()
//{
//	int Ra, Ca, Rb, Cb;
//	scanf("%d %d", &Ra, &Ca);
//	int arr1[Ra][Ca];
//	for (int i = 0; i < Ra; i++)
//	{
//		for (int j = 0; j < Ca; j++)
//			scanf("%d", &arr1[i][j]);
//	}
//	scanf("%d %d", &Rb, &Cb);
//	int arr2[Rb][Cb];
//	for (int i = 0; i < Rb; i++)
//	{
//		for (int j = 0; j < Cb; j++)
//			scanf("%d", &arr2[i][j]);
//	}
//	int arr3[Ra][Cb];
//	for (int i = 0; i < Ra; i++)
//	{
//		for (int j = 0; j < Cb; j++)
//			arr3[i][j] = 0;
//	}
//	if (Ca != Rb)
//	{
//		printf("Error: %d != %d",Ca,Rb);
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i < Ra; i++)
//		{
//			for (int j = 0; j < Cb; j++)
//			{
//				for (int k = 0; k < Rb; k++)
//				{
//					arr3[i][j] += arr1[i][k] * arr2[k][j];
//				}
//			}
//		}
//	}
//	printf("%d %d\n",Ra,Cb);
//	for (int i = 0; i < Ra; i++)
//	{
//		for (int j = 0; j < Cb-1; j++)
//			printf("%d ", arr3[i][j]);
//		printf("%d",arr3[i][Cb-1]);
//		printf("\n");
//	}
//	return 0;
//}

////L1-049 天梯赛座位分配  (不会）
//#include <stdio.h>
//void print(int num,int start,int row,int (*ans)[10])
//{
//    printf("#%d\n",num);
//    for(int i=start;i<row+start;i++)
//    {
//        printf("%d",ans[i][0]);
//        for(int j=1;j<10;j++)
//        {
//            printf(" %d",ans[i][j]);
//        }
//        printf("\n");
//    }
//}
//int main()
//{
//    int input;
//    scanf("%d",&input);
//    int arr[100];
//    int sum=0;
//    for(int i=0;i<input;i++)
//    {
//        scanf("%d",&arr[i]);
//        sum+=arr[i];
//    }
//    int ans[100][10];
//    int flag=1;
//    int k=flag;
//    int count=0;
//   	for(int i=1,j=1;i<=sum;i++,j++)
//   	{
//   		
//   		for(int j=0;j<10;j++)
//   		{
//   			ans[i-1][j]=k;
//   			k+=3;
//		}
//        k = flag;
//		k+=30*j;
//		count++;
//        if (count == arr[flag - 1])
//        {
//            count = 0;
//            flag++;
//            k = flag;
//            j = 0;
//        }
//	
//	}
//    int total=0;
//    for(int i=1;i<=input;i++)
//    {
//        print(i,total,arr[i-1],ans);
//        total+=arr[i-1];
//    }
//    return 0;
//}

////L1-050 倒数第N个字符串
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int L, N, temp;
//	scanf("%d%d", &L, &N);
//	int arr[L], i;
//	temp = pow(26, L) - N;                //pow(a,b)是标准库里一个数学函数，求的是a的b次方，头文件为 #include<math.h> 
//	for (i = 0; i < L; i++) {
//		arr[i] = temp % 26; 	        	//用创建的数组保存第 i 个位置上对26取得的余数； 
//		temp /= 26;
//	}
//	for (i = L - 1; i >= 0; i--)
//		printf("%c", 'a' + arr[i]);     //a 的ASCII码加上余数，就得到对应字母的ASCII码，不懂的可以取了解一下ASCII 
//	return 0;
//}


////L1-051 打折
//#include <stdio.h>
//int main()
//{
//    int price;
//    double discount;
//    scanf("%d %lf", &price, &discount);
//    printf("%.2f", price * discount / 10);
//    return 0;
//}


//L1-052 2018我们要赢
//#include <stdio.h>
//int main()
//{
//	printf("2018\nwo3 men2 yao4 ying2 !");
//	return 0;
//}

//L1-053 电子汪
//#include <stdio.h>
//int main()
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	for (int i = 0; i < A + B; i++)
//	{
//		printf("Wang!");
//	}
//	return 0;
//}

////L1-054 福到了
//#include <stdio.h>
//int main()
//{
//	char ch;
//	int input;
//	scanf("%c %d",&ch,&input);
//	getchar();
//	char arr1[input][input+1];
//	for(int i=0;i<input;i++)
//	{
//		gets(arr1[i]);
//	}
//	char arr2[input][input+1];
//	for(int i=input-1;i>=0;i--)
//	{
//		for(int j=input-1;j>=0;j--)
//		{
//			if(arr1[i][j]!=' ')
//				arr2[input-i-1][input-j-1]=ch;
//			else
//				arr2[input-i-1][input-j-1]=' ';
//		}
//	}
//	int flag=0;
//	for(int i=0;i<input;i++)
//	{
//		for(int j=0;j<input;j++)
//		{
//			if((arr1[i][j]!=' ' && arr2[i][j]==' ')|| (arr2[i][j]!=' ' && arr1[i][j]==' '))
//				{
//					flag=1;
//					break;
//				}
//		}
//		
//	}
//	if (flag == 0)
//		printf("bu yong dao le\n");
//	for(int i=0;i<input;i++)
//	{
//		for(int j=0;j<input;j++)
//			printf("%c",arr2[i][j]);
//		printf("\n");
//	}
//	return 0;
// } 


////L1-055 谁是赢家
//#include <iostream>
//using namespace std;
//#include <vector>
//int main()
//{
//    int Pa, Pb;
//    cin >> Pa >> Pb;
//    vector <int>judge;
//    int input = 0;
//    int count01 = 0, count02 = 0;
//    for (int i = 0; i < 3; i++)
//    {
//        cin >> input;
//        judge.push_back(input);
//        if (judge[i] == 0)
//            count01++;
//        else
//            count02++;
//    }
//    if (Pa > Pb)
//    {
//        if (count01 > 0)
//            cout << "The winner is a: " << Pa << " + " << count01 << endl;
//        else
//            cout << "The winner is b: " << Pb << " + " << count02 << endl;
//    }
//    else
//    {
//        if (count01 == 3)
//            cout << "The winner is a: " << Pa << " + " << count01 << endl;
//        else
//            cout << "The winner is b: " << Pb << " + " << count02 << endl;
//
//    }
//    system("pause");
//    return 0;
//}

//L1-056 猜数字
//#include <stdio.h>
//int main()
//{
//    int input = 0;
//    scanf("%d", &input);
//    char name[input][10];
//    int num[input];
//    int sum = 0, average = 0;
//    for (int i = 0; i < input; i++)
//    {
//        scanf("%s", &name[i]);
//        scanf("%d", &num[i]);
//        sum += num[i];
//    }
//    average = sum / input / 2;
//    int diff[input], min = 0;
//    for (int i = 0; i < input; i++)
//    {
//        if (average - num[i] < 0)
//            diff[i] = -(average - num[i]);
//        else
//            diff[i] = average - num[i];
//        if (diff[min] > diff[i])
//            min = i;
//    }
//    printf("%d %s", average, name[min]);
//
//    return 0;
//}
//



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

//L1-059 敲笨钟
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int input = 0;
//    scanf("%d", &input);
//    getchar();
//    char arr[100][102];
//    for (int i = 0; i < input; i++)
//    {
//        fgets(arr[i], 102, stdin);
//        int flag1 = 0, flag2 = 0;
//        int count = 1;
//        char temp[102];
//        strcpy(temp, arr[i]);
//        char* token = strtok(temp, " ");
//        while (token)
//        {
//            token = strtok(NULL, " ");
//            count++;
//        }
//        for (int fast = 0; arr[i][fast] != '\0'; fast++)
//        {
//
//            if (arr[i][fast] == ',')
//            {
//                if (arr[i][fast - 1] == 'g' &&
//                    arr[i][fast - 2] == 'n' &&
//                    arr[i][fast - 3] == 'o')
//                    flag1 = 1;
//            }
//            if (arr[i][fast] == '.')
//            {
//                if (arr[i][fast - 1] == 'g' &&
//                    arr[i][fast - 2] == 'n' &&
//                    arr[i][fast - 3] == 'o')
//                    flag2 = 1;
//            }
//        }
//        count--;
//        if (flag1 == 1 && flag2 == 1)
//        {
//            char* token1 = strtok(arr[i], " ");
//            printf("%s ", token1);
//            int tmp = 1;
//            while (tmp < count - 3)
//            {
//                token1 = strtok(NULL, " ");
//                printf("%s ", token1);
//                tmp++;
//            }
//            printf("qiao ben zhong.\n");
//        }
//        else
//        {
//            printf("Skipped\n");
//            
//        }
//    }
//    return 0;
//}


//L1-060 心理阴影面积
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double height;
//    int x,y;
//    scanf("%d %d",&x,&y);
//    int tmp=x-y;
//    height=1.0*tmp/sqrt(2.0);
//    double ret=height*sqrt(2)*50;
//    printf("%d",(int)ret);
//    return 0;
//}

////L1-061 新胖子公式
//#include <iostream>
//#include <iomanip>
//#include <math.h>
//using namespace std;
//int  main()
//{
//    double weight, height, ans;
//    cin >> weight >> height;
//    ans = weight / pow(height, 2);
//    if (ans > 25)
//    {
//        cout << fixed << setprecision(1) << ans << endl;
//        cout << "PANG" << endl;
//    }
//    else
//    {
//        cout << fixed << setprecision(1) << ans << endl;
//        cout << "Hai Xing" << endl;
//    }
//    system("pasue");
//    return 0;
//}

//L1-062 幸运彩票
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//#include <string>
//int main()
//{
//    int input;
//    cin >> input;
//    //string str[input];
//    // for(int i=0;i<input;i++)
//    //     cin>>str[i];
//    // for(int i=0;i<input;i++)
//    // {
//    //     if(str[i][0]+str[i][1]+str[i][2]==str[i][3]+str[i][4]+str[i][5])
//    //         cout<<"You are lucky!"<<endl;
//    //     else
//    //         cout<<"Wish you good luck."<<endl;
//    // }
//    vector<string> str;
//    string temp;
//    for (int i = 0; i < input; i++)
//    {
//        cin >> temp;
//        str.push_back(temp);
//    }
//    for (int i = 0; i < input; i++)
//    {
//        if (str[i][0] + str[i][1] + str[i][2] == str[i][3] + str[i][4] + str[i][5])
//            cout << "You are lucky!" << endl;
//        else
//            cout << "Wish you good luck." << endl;
//    }
//    system("pause");
//    return 0;
//}

//L1-063 吃鱼还是吃肉

//#include <iostream>
//using namespace std;
//#include <vector>
//#define In(x) cin >> tmp; x.push_back(tmp);
//
//void My_Print(int input)
//{
//    switch (input)
//    {
//    case (1):
//        cout << "duo chi yu!";;
//        break;
//    case (2):
//        cout << "duo chi rou!";
//        break;
//    case (3):
//        cout << "wan mei!";
//        break;
//    case (4):
//        cout << "ni li hai!";
//        break;
//    case (5):
//        cout << "shao chi rou!";
//        break;
//    }
//}
//
//
//void Judge(int T1, int T2, vector<int>& height, vector<int>& weight, int& i)
//{
//    if (height[i] < T1)
//        My_Print(1);
//    else if (height[i] > T1)
//        My_Print(4);
//    else
//        My_Print(3);
//    cout << " ";
//    if (weight[i] > T2)
//        My_Print(5);
//    else if (weight[i] < T2)
//        My_Print(2);
//    else
//        My_Print(3);
//    cout << endl;
//}
//int main()
//{
//    int N;
//    cin >> N;
//    vector<int> sex;
//    vector<int> height;
//    vector<int> weight;
//    for (int i = 0; i < N; i++)
//    {
//        int tmp;
//
//        In(sex);
//        In(height);
//        In(weight);
//
//    }
//    for (int i = 0; i < N; i++)
//    {
//        if (sex[i])
//            Judge(130, 27, height, weight, i);
//        else
//            Judge(129, 25, height, weight, i);
//    }
//
//    system("pause");
//    return 0;
//}

//L1-064 估值一亿的AI核心代码
//
//#include <stdio.h>
//#include <string.h>
//#include<ctype.h>
//char* RemoveBlank(char *p)
//{
//   char temp[1002];
//    if(p[0]==' ')
//        strcpy(temp,p+1)；
//    for(int slow,fast=0;temp[fast]]!='\0';fast++)
//    {
//        while(temp[fast]==' ' &&temp[fast+1]==' ' )
//        {
//            while(isalpha(temp[fast+1])&& temp[fast]==' ')
//                fast++;
//            fast++;
//        }
//        p[slow++]=temp[fast];
//    }
//    p[slow]='\0';
//    int sz=strlen(p);
//    for(int i=sz-1;i>=0;i++)
//    {
//        if(isspace(p[i])))
//            p[i]='\0';
//        else
//            break;
//    }
//
//    return p;
//}
//int main()
//{
//    intinpupt;
//    scanf("%d",&input);
//    char p[1002];
//    fegts(p,1002,stdin);
//    //RemoveBlank
//     char temp[1002];
//    if(p[0]==' ')
//        strcpy(temp,p+1)；
//    for(int slow,fast=0;temp[fast]]!='\0';fast++)
//    {
//        while(temp[fast]==' ' &&temp[fast+1]==' ' )
//        {
//            while(isalpha(temp[fast+1])&& temp[fast]==' ')
//                fast++;
//            fast++;
//        }
//        p[slow++]=temp[fast];
//    }
//    p[slow]='\0';
//    int sz=strlen(p);
//    for(int i=sz-1;i>=0;i++)
//    {
//        if(isspace(p[i])))
//            p[i]='\0';
//        else
//            break;
//    }
//    //大写转小写
//
//    //l or me convert to you
//    for(m)
//    return 0;
//}

//L1-065 嫑废话上代码
//#include <iostream>
//using namespace std;
//int main()
//{
//    cout << "Talk is cheap. Show me the code." << endl;
//    system("pause");
//    return 0;
//}

//L1-066 猫是液体
//#include <iostream>
//using namespace std;
//int main()
//{
//    int height, length, width;
//    cin >> height >> length >> width;
//    cout << height * width * length << endl;
//    system("pause");
//    return 0;
//}

////L1-067 洛希极限
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    double rate, signal, dis;
//    cin >> rate >> signal >> dis;
//    if (signal)
//        signal = 1.26;
//    else
//        signal = 2.455;
//    if (rate * signal <= dis)
//        cout << fixed << setprecision(2) << rate * signal << " " << "^_^" << endl;
//
//    else
//        cout << fixed << setprecision(2) << rate * signal << " " << "T_T" << endl;
//
//    system("pause");
//    return 0;
//}


//L1-068 调和平均
//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main()
//{
//    int N;
//    cin >> N;
//    double sum = 0;
//    for (int i = 0; i < N; i++)
//    {
//        double tmp;
//        cin >> tmp;
//        sum += 1 / tmp;
//    }
//    sum = sum / N;
//    sum = 1 / sum;
//    cout << fixed << setprecision(2) << sum << endl;
//    system("pause");
//    return 0;
//}

//
////L1-069 胎压监测
//#include<iostream>
//using namespace std;
//#include <vector>
//int main()
//{
//    vector<int>v;
//    int low, threshold, tmp, min = 10000, max = 0, signal = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        cin >> tmp;
//        v.push_back(tmp);
//        if (max < v[i])
//            max = v[i];
//        if (min > v[i])
//        {
//            min = v[i];
//            signal = i + 1;
//        }
//    }
//    cin >> low >> threshold;
//    int count = 0;
//    int diff = max - min;
//    for (int i = 0; i < 4; i++)
//    {
//        if (v[i] < low)
//        {
//            count++;
//            signal = i + 1;
//        }
//    }
//    if (diff > threshold)
//        count += 1;
//    if (count == 1)
//        cout << "Warning: please check #" << signal << "!" << endl;
//    else if (count > 1)
//        cout << "Warning: please check all the tires!" << endl;
//    else
//        cout << "Normal" << endl;
//    system("pause");
//    return 0;
//}

//L1-070 吃火锅
//#include <iostream>
//using namespace std;
//#include<string>
//int main()
//{
//    string str;
//    string arr = "chi1 huo3 guo1";
//    int num = 0, appear = -1, count = 0;
//    getline(cin, str);
//    while (str[0] != '.'|| str.size()>1)
//    {
//        count++;
//        if (str.find(arr, 0) != -1)
//        {
//            num++;
//            if (appear == -1)
//                appear = count;
//        }
//        getline(cin, str);
//    }
//    cout << count << endl;
//    if (!num)
//        cout << "-_-#" << endl;
//    else
//        cout << appear << " " <<num << endl;
//    
//    system("pause");
//    return 0;
//}

//L1-071 前世档案
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n=0,people=0;
//    scanf("%d %d",&n,&people);
//    char arr[people][31];
//    int sum=(int)pow(2,n);
//    for(int i=0;i<people;i++)
//    {
//        scanf("%s",&arr[i]);
//        int flag=1,num=sum;
//        for(int j=0;j<n;j++)
//        {
//            if(arr[i][j]=='n')
//                flag+=num/2; 
//            num /= 2;
//        }
//        printf("%d\n",flag);
//    }
//    return 0;
//}
//

//L1-072 刮刮彩票  16/20
//#include <stdio.h>
//int main()
//{
//   int arr1[][2] = {
//    {6, 10000},
//    {7, 36},
//    {8, 720},
//    {9, 360},
//    {10, 80},
//    {11, 252},
//    {12, 108},
//    {13, 72},
//    {14, 54},
//    {15, 180},
//    {16, 72},
//    {17, 180},
//    {18, 119},
//    {19, 36},
//    {20, 306},
//    {21, 1080},
//    {22, 144},
//    {23, 1800},
//    {24, 3600}
//};
//    int temp=1+2+3+4+5+6+7+8+9;
//    int arr2[3][3];
//    int flag[3][3];
//    int start1 = 0, start2 = 0;
//    for(int i=0;i<3;i++)
//    {
//          for(int j=0;j<3;j++)
//        {
//              scanf("%d",&arr2[i][j]);
//              if(arr2[i][j]==0)
//              {
//                  flag[i][j]=1;
//                  start1 = i; start2 = j;
//              }
//              temp-=arr2[i][j];
//        }
//    }
//    int x=0,y=0;
//    for(int i=0;i<3;i++)
//    {
//        scanf("%d %d",&x,&y);
//        flag[x-1][y-1]=1;
//    }
//    for(int i=0;i<3;i++)
//    {
//        for(int j=0;j<3;j++)
//        {
//            if(flag[i][j]==1)
//            {
//                if(arr2[i][j]!=0)
//                    printf("%d\n",arr2[i][j]);
//            }
//        }
//    }
//    arr2[start1][start2] = temp;
//    int ope=0,signal=0;
//    scanf("%d",&ope);
//    switch(ope)
//    {
//            case 1:
//               signal=arr2[0][0]+arr2[0][1]+arr2[0][2];
//                break;
//            case 2:
//                signal=arr2[1][0]+arr2[1][1]+arr2[1][2];
//                break;
//            case 3:
//                signal=arr2[2][0]+arr2[2][1]+arr2[2][2];
//                break;
//            case 4:
//                signal=arr2[0][0]+arr2[1][0]+arr2[2][0];
//                break;
//            case 5:
//                signal=arr2[0][1]+arr2[1][1]+arr2[2][1];
//                break;
//            case 6:
//                signal=arr2[0][2]+arr2[1][2]+arr2[2][2];
//                break;
//            case 7:
//                signal=arr2[0][0]+arr2[1][1]+arr2[2][2];
//                break;
//            case 8:
//                signal=arr2[0][2]+arr2[1][1]+arr2[2][0];
//                break;
//    };
//    for(int i=0;i<18;i++)
//    {
//        if(arr1[i][0]==signal)
//        {
//            printf("%d",arr1[i][1]);
//            break;
//        }
//    }
//    return 0;
//}

//L1-073 人与神
//#include <iostream>
//using namespace std;
//int main()
//{
//    cout << "To iterate is human, to recurse divine." << endl;
//    system("pause");
//    return 0;
//}

//L1-074 两小时学完C语言
//#include <iostream>
//using namespace std;
//int main()
//{
//    int total, speed, time;
//    cin >> total >> speed >> time;
//    cout << total - speed * time << endl;
//    system("pause");
//    return 0;
//}

////L1-075 强迫症
//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//    string str = "";
//    cin >> str;
//    int judge = stoi(str);
//    if (judge > 9999)
//    {
//        string sub = str.substr(0, 4);
//        cout << sub << "-" << str[4] << str[5];
//    }
//    else
//    {
//        int year = (str[0] - '0') * 10 + (str[1] - '0');
//        if (year < 22)
//            cout << "20" << str[0] << str[1] << "-" << str[2] << str[3] << endl;
//        else
//            cout << "19" << str[0] << str[1] << "-" << str[2] << str[3] << endl;
//    }
//    system("pause");
//    return  0;
//}
//

//L1-076 降价提醒机器人
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <iomanip>
//int main()
//{
//    int num = 0;
//    double price;
//    cin >> num >> price;
//    double temp;
//    vector <double>cost;
//    for (int i = 0; i < num; i++)
//    {
//        cin >> temp;
//        cost.push_back(temp);
//        if (cost[i] < price)
//            cout << "On Sale! " << fixed << setprecision(1) << cost[i] << endl;
//    }
//
//    system("pause");
//    return 0;
//}

////L1-077 大笨钟的心情
//#include <iostream>
//using namespace std;
//#include<vector>
//int main()
//{
//    vector <int>Mood;
//    int temp = 0;
//    for (int i = 0; i < 24; i++)
//    {
//        cin >> temp;
//        Mood.push_back(temp);
//    }
//    while (cin >> temp && (temp >= 0 && temp <= 23))
//    {
//        if (temp < 0 || temp>23)
//            break;
//        if (Mood[temp] > 50)
//            cout << Mood[temp] << " Yes" << endl;
//        else
//            cout << Mood[temp] << " No" << endl;
//    }
//    system("pause");
//    return 0;
//}
//

//L1-078 吉老师的回归
// #include <iostream>
//using namespace std;
//#include <vector>
//#include <string>
//int judge(const string& str)
//{
//    int pos = -1;
//    pos = str.find("easy");
//    if (pos != -1)
//        return pos;
//    else
//    {
//        pos = str.find("qiandao");
//        if (pos != -1)
//            return pos;
//    }
//    return pos;
//}
//int main()
//{
//    int num, complete;
//    cin >> num >> complete;
//    vector<string> str;
//    string input;
//    getchar();
//    for (int i = 0; i < num; i++)
//    {
//        
//        getline(cin, input);
//        str.push_back(input);
//        if (judge(str[i]) == -1)
//            complete--;
//        if (complete == -1)
//        {
//            cout << str[i] << endl;
//            return 0;
//        }
//    }
//    cout << "Wo AK le" << endl;
//    system("pause");
//    return 0;
//}
//L1-080 乘法口诀数列
//#include <stdio.h>
//int main()
//{
//    int a1, a2, n;
//    scanf("%d %d %d", &a1, &a2, &n);
//    int arr[n];
//    arr[0] = a1;
//    arr[1] = a2;
//    int slow = 0, fast = 1, count = 2;
//    int digit[100];
//    while (count <= n)
//    {
//        int temp = arr[slow] * arr[fast];
//        int num = 0;
//        while (temp)
//        {
//            digit[num] = temp % 10;
//            num++;
//            temp /= 10;
//        }
//        if (num == 0)
//        {
//            arr[count] = 0;
//            count++;
//        }
//        for (int i = num - 1; i >= 0; i--)
//        {
//            arr[count] = digit[i];
//            count++;
//        }
//        fast++;
//        slow++;
//    }
//    printf("%d", arr[0]);
//    for (int i = 1; i < n; i++)
//    {
//        printf(" %d", arr[i]);
//    }
//    return 0;
//}




//L1-081 今天我要赢
//#include<stdio.h>
//int main()
//{
//    printf("I'm gonna win! Today!\n");
//    printf("2022-04-23");
//        return 0;
//}

//L1-082 种钻石
//#include <iostream>
//using namespace std;
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    cout << a / b << endl;
//    system("pause");
//    return 0;
//}

//L1-083 谁能进图书馆
//#include <iostream>
//using namespace std;
//int main()
//{
//    int ban, company, visitor01, visitor02;
//    cin >> ban >> company >> visitor01 >> visitor02;
//    if (visitor01 >= ban && visitor02 >= ban)
//    {
//        cout << visitor01 << "-Y " << visitor02 << "-Y" << endl;
//        cout << "huan ying ru guan" << endl;
//    }
//    else if (visitor01 >= ban && visitor02 < ban)
//    {
//        if (visitor01 >= company)
//        {
//            cout << visitor01 << "-Y " << visitor02 << "-Y" << endl;
//            cout << "qing 1 zhao gu hao 2" << endl;
//        }
//        else
//        {
//
//            cout << visitor01 << "-Y " << visitor02 << "-N" << endl;
//            cout << "1: huan ying ru guan" << endl;
//        }
//    }
//    else if (visitor02 >= ban && visitor01 < ban)
//    {
//        if (visitor02 >= company)
//        {
//            cout << visitor01 << "-Y " << visitor02 << "-Y" << endl;
//            cout << "qing 2 zhao gu hao 1" << endl;
//        }
//        else
//        {
//
//            cout << visitor01 << "-N " << visitor02 << "-Y" << endl;
//            cout << "2: huan ying ru guan" << endl;
//        }
//    }
//    else
//    {
//        cout << visitor01 << "-N " << visitor02 << "-N" << endl;
//        cout << "zhang da zai lai ba" << endl;
//    }
//    system("pause");
//    return 0;
//}

//L1-084 拯救外星人
//#include<iostream>
//using namespace std;
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    long long int ret = 1;
//    for (int i = 1; i <= a + b; i++)
//        ret *= i;
//    cout << ret << endl;
//    system("pause");
//    return 0;
//}


//L1-085 试试手气
//#include <iostream>
//using namespace std;
//int main()
//{
//    int arr[6][6];
//    for (int i = 0; i < 6; i++)
//    {
//        for (int j = 1; j < 7; j++)
//            arr[i][j-1] = j;
//    }
//    int dot[6];
//    cin >> dot[0] >> dot[1] >> dot[2] >> dot[3] >> dot[4] >> dot[5];
//    int count;
//    getchar();
//    cin >> count;
//    while (count--)
//    {
//        for (int i = 0; i < 6; i++)
//        {
//            arr[i][dot[i] - 1] = 0;
//            for (int j = 5; j >= 0; j--)
//            {
//                if (arr[i][j] != 0)
//                {
//                    dot[i] = arr[i][j];
//                    break;
//
//                }
//            }
//        }
//    }
//    cout << dot[0] <<" " << dot[1] << " " << dot[2] << " " << dot[3] << " " << dot[4] << " " << dot[5] << endl;
//    system("pause");
//    return 0;
//}


//L1-086 斯德哥尔摩火车上的题
//#include <iostream>
//using namespace std;
//#include <string>
//
//string Change(string& str)
//{
//    string ret;
//    for (int i = 1; str[i] != '\0'; i++)
//    {
//        if ((str[i] - '0') % 2 == (str[i - 1] - '0') % 2)
//        {
//            int max = (str[i] - '0') > (str[i - 1] - '0') ? (str[i] - '0') : (str[i - 1] - '0');
//            ret += (max + '0');
//        }
//    }
//    return ret;
//}
//
//int main()
//{
//    string str1;
//    string str2;
//    cin >> str1;
//    cin >> str2;
//    string ret1;
//    string ret2;
//    ret1 = Change(str1);
//    ret2 = Change(str2);
//    int ret = ret1.compare(ret2);
//    if (ret == 0)
//        cout << ret1 << endl;
//    else
//    {
//        cout << ret1 << endl;
//        cout << ret2 << endl;
//    }
//    system("pause");
//    return 0;
//}

//L1-087 机工士姆斯塔迪奥
//#include <iostream>
//using namespace std;
//#include <vector>
//int main()
//{
//    int row, col, Q;
//    cin >> row >> col >> Q;
//    int flag;
//    int input = 0;
//    vector<int>vc(100001);
//    vector<int>vl(100001);
//    int countc = 0, countr = 0;
//    for (int i = 0; i < Q; i++)
//    {
//        cin >> flag >> input;
//        if (flag && vc[input] != 1)
//        {
//            countc++;
//            vc[input] = 1;
//        }
//        else if (flag == 0 && vl[input] != 1)
//        {
//            countr++;
//            vl[input] = 1;
//        }
//    }
//
//    int ans = col * row - countc * row - countr * col + countc * countr;
//    cout << ans << endl;
//    system("pause");
//    return 0;
//}



//L1-089 最好的文档
//#include <iostream>
//using namespace std;
//int main()
//{
//    cout << "Good code is its own best documentation." << endl;
//    return 0;
//}

////L1 - 090 什么是机器学习
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int a, b;
//    cin >> a >> b;
//    int ans = a + b;
//    cout << ans - 16 << endl << ans - 3 << endl << ans - 1 << endl << ans << endl;
//    system("pause");
//    return 0;
//}

//L1-091 程序员买包子
//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//    int N, M, K;
//    string X;
//    cin >> N >> X >> M >> K;
//    if (K == N)
//        cout << "mei you mai " << X << " de" << endl;
//    else if (K == M)
//        cout << "kan dao le mai " << X << " de" << endl;
//    else
//        cout << "wang le zhao mai " << X << " de" << endl;
//    system("pause");
//    return 0;
//}


//L1-092 进化论
//#include <iostream>
//using namespace std;
//int main()
//{
//    int N;
//    cin >> N;
//    int a, b, ans;
//    for (int i = 0; i < N; i++)
//    {
//        cin >> a >> b >> ans;
//        if (a * b == ans)
//            cout << "Lv Yan" << endl;
//        else if (a + b == ans)
//            cout << "Tu Dou" << endl;
//        else
//            cout << "zhe du shi sha ya!" << endl;
//    }
//    system("pause");
//    return 0;
//}

//L1-093 猜帽子游戏
//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int N;
//    cin >> N;
//    int hat[N];
//    for (int i = 0; i < N; i++)
//        cin >> hat[i];
//    int people = 0;
//    cin >> people;
//    int color[N];
//
//    for (int i = 0; i < people; i++)
//    {
//        int count0 = 0;
//        int flag = 0;
//        for (int j = 0; j < N; j++)
//        {
//            cin >> color[j];
//            if (!color[j])
//                count0++;
//        }
//        if (count0 == N)
//        {
//            cout << "Ai Ya" << endl;
//            continue;
//        }
//        for (int k = 0; k < N; k++)
//        {
//            if (color[k] != 0 && color[k] != hat[k])
//            {
//                cout << "Ai Ya" << endl;
//                flag = 1;
//                break;
//            }
//        }
//        if (flag != 1)
//            cout << "Da Jiang!!!" << endl;
//
//    }
//    system("pause");
//    return 0;
//}

//L1-094 剪切粘贴
//#include <iostream>
//using namespace std;
//#include <string>
//int main()
//{
//    string S;
//    cin >> S;
//    int N;
//    cin >> N;
//    for (int i = 0; i < N; i++)
//    {
//        int xs, xd;
//        cin >> xs >> xd;
//        string ss, se;
//        cin >> ss >> se;
//        string temp;
//        
//        temp.append(S, xs - 1, xd - xs+1);
//        S.erase(xs - 1, (xd - xs)+1);
//        string start_end;
//        start_end = ss;
//        start_end += se;
//        int start = -1;
//        for (int j= 0; j < S.size();j++)
//        {
//            if (S[j] == ss[0])
//            {
//                string Primary;
//                Primary.append(S, j, start_end.size());
//                int ret = Primary.compare(start_end);
//                if (ret == 0)
//                {
//                    start = j;
//                    break;
//                }
//
//            }
//        }
//        int end = start+ss.size();
//        if (start != -1 && end != -1 && start + ss.size()==end)
//            S.insert(end, temp);
//        else
//            S.append(temp);
//    }
//    cout << S << endl;
//    system("pause");
//    return 0;
//}


//L1-088 静静的推荐
//#include <iostream>
//using namespace std;
//#include <set>
//#include <utility>
//int main()
//{
//    int num, recommend, interview;
//    cin >> num >> recommend >> interview;
//    multiset<pair<int, int>> s;
//    s.insert(pair<int, int>(2, 10));
//    s.insert(pair<int, int>(5, 20));
//    s.insert(pair<int, int>(3, 30));
//    s.insert(pair<int, int>(3, 50));
//    for (set<pair<int, int>>::const_iterator it = s.begin(); it != s.end(); it++)
//        cout << (*it).first << " " << (*it).second << endl;;
//    cout << endl;
//    system("pause");
//    return 0;
//}


// 分数14/20;
//#include <iostream>
//using namespace std;
//#include <set>
//#include <utility>
//int main()
//{
//    int num, recommend, interview;
//    cin >> num >> recommend >> interview;
//
//    multiset<pair<int, int>> ms;
//    set<int> s;
//    int count = 0;
//
//    for (int i = 0; i < num; i++)
//    {
//        int ladder, pat;
//        cin >> ladder >> pat;
//        if (ladder >= 175)
//        {
//            s.insert(ladder);
//            ms.insert(pair<int, int>(ladder, pat));
//        }
//    }
//
//    for (int i = 0; i < recommend; i++)
//    {
//        for (set<int>::iterator its = s.begin(); its != s.end(); its++)
//        {
//            int flag = 0, signal = 0;
//            for (multiset<pair<int, int>>::iterator it = ms.begin(); it != ms.end(); )
//            {
//                
//                if ((*it).first == (*its) && flag ==0)
//                {
//                    count++;
//                    it=ms.erase(it); 
//                    flag = 1;
//
//                }
//                else if ((*it).first == (*its) && (*it).second >= interview)
//                {
//                    count++;
//                    it=ms.erase(it);
//                    signal = 1;
//                }
//                if (signal == 0 && it != ms.end())
//                    it++;
//                else if (it == ms.end() ||(*it).first > (*its) )
//                    break;
//                
//            }
//
//        }
//    }
//    cout << count << endl;
//    system("pause");
//    return 0;
//}


//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[300];
//	int num, recommend, interview;
//	cin >> num >> recommend >> interview;
//	int count = 0;
//	while(num--)
//	{
//		int ladder_score, pat;
//		cin >> ladder_score >> pat;
//		if (ladder_score >= 175)
//		{
//			if (pat >= interview)
//				count++;
//			else if (arr[ladder_score] < recommend)
//			{
//				arr[ladder_score]++;
//				count++;
//			}
//		}
//	}
//	cout << count << endl;
//	system("pause");
//	return 0;
//}
