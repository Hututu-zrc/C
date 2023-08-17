#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//这个是rand(),strad()的头文件
#include<time.h>//这个是时间戳的头文件
//开始输出页面
//游戏主体
// {
// 1.随机数的生成
// 2.玩家猜错后的提示
// 3.
// }
//游戏结束及报错页面

void menu()
{
	printf("******************************\n");
	printf("******    1. play        *****\n");
	printf("******    0. exit        *****\n");
	printf("******************************\n");
}


//0~RAND_MAX(32767)
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;//该rand()的范围过大，利用除法的余数进行缩小打到我们所要的范围
	while (1)//玩家不可能一次猜中，所以利用循环让玩家一直尝试，并提示玩家，直至猜中，游戏结束
	{
		printf("请开始猜数字：");
		scanf("%d", &guess);
		if (guess < ret)
			printf("猜小啦\n");
		else if (guess > ret)
			printf("猜大啦\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));//利用时间戳是该游戏设计的难点
	int input=0;
	do//这个是判断玩家是否确实玩游戏。以及玩家不按规定输入后，使用循环，让玩家再次尝试输入。
		//输入成功后，跳转到游戏主体game()
	{
		menu();
		printf("请输入数字：");
		scanf("%d", &input);
		switch (input) //注意：Switch语句里面要有整形表达式
		//利用Switch的选择语句会比if更方便
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("请按规定输入！！！\n");
			break;
		}
	}
	while (input);
	return 0;
}

