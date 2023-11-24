#define _CRT_SECURE_NO_WARNINGS
#include"chess_game.h"
void menu()
{
	printf("******************************\n");
	printf("******    1. play        *****\n");
	printf("******    0. exit        *****\n");
	printf("******************************\n");
}
void game()
{
	
	char board[ROW][COL] = { 0 };
	//初始化棋盘的函数
	InitBoard(board,ROW, COL);//按照游戏设定，我们先做出一个符合要求的二元数组
	DisplayBoard(board, ROW, COL);//利用我们设定的数组，开始打印棋盘和分隔符，做出棋盘的游戏画面
	//下棋
	char ret = 0;
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = Ifwin(board, ROW, COL);
		if (ret != 'c')
			break;
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = Ifwin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("玩家获得游戏胜利!\n");
	}
	else if (ret == '#')
	{
		printf("电脑获得游戏胜利!\n");
	}
	else
	{
		printf("游戏平局！\n");
	}
	DisplayBoard(board, ROW, COL);

}
int main()
{
	//首先，我们思路：
	//1.打印菜单
	//2.打印菜单后，玩家按规定输入后，判断是否开始游戏（使用switch语句）
	// 此时考虑玩家如果不按规定输入，我们则需要考虑循环，给玩家重复选择的机会（while语句）
	//3.玩家选择开始游戏后，如果游戏完成结束后，玩家想再次体验。
	//  此时我们也应考虑使用循环，让玩家再次体验游戏
	//4.玩家选择退出，我们结束游戏
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择:-> ");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重试！\n");
			break;
		}
	} while (input);

	return 0;
}