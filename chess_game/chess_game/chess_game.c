#define _CRT_SECURE_NO_WARNINGS
#include"chess_game.h"
#include<stdio.h>
void InitBoard(char board[ROW][COL], int row, int col)//利用二维数组打印3*3的空格表
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//初始化为空格
		}
	}
}
//阶段性第一版本
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//打印分割信息
//		if(i<row-1)
//		printf("---|---|---\n");
//	}
//}
//进阶版
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)
	{
		//打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//首先，循环打印每一行的每一列
			if (j < col - 1)
				printf("|");//打印一个元素的后，打印每一列的纵向分割符
		}
		printf("\n");//打印一行后，换行
		//打印分割信息
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)//打印完一行后，换行后打印横向的分隔符
			{
				printf("---");
				if (j< col - 1)
					printf("|");//横向分隔符中，加入纵向分割符
			}
			printf("\n");//打印完后换到下一行打印元素
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家落子\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		//坐标范围的合法性判断
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//这个x，y范围是1~3，我们写程序实际操作，要按照数组的索引来。所以，(x-1)，(y-1)
			{
				board[x - 1][y - 1] = '*';//注意这里不是“==”，而是“=”
				break;
			}
			else
			{
				printf("坐标被占用，请选择其他位置下棋！\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");//坐标非法指的是玩家输入的坐标超出了我们的棋盘。
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑落子\n");
	while (1)
	{
		
		x = rand() % row;//0~2
		y = rand() % col;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//注意这里不是“==”，而是“=”
			break;
		}
	}
	
}
//棋盘满了就返回，没满就返回0
int IfFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char Ifwin(char board[ROW][COL], int row, int col)
{
	//行判断又有三个相同的符号
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//列
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//没人赢，判断平局
	if (IfFull(board, row, col))
	{
		return 'Q';
	}
	//游戏继续
	return 'c';
}