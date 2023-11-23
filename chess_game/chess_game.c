#define _CRT_SECURE_NO_WARNINGS 1

#include "chess_game.h"

void InitBoard(char board[ROW][COL], int row, int col)//利用二维数组打印棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//棋盘先用空格填充，给玩家视觉上的效果
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)//固定行列数的打印分割行
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1. 打印一行的数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//2. 打印分割行
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}

//进阶版，根据行列数变换打印分割信息
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1. 打印一行的数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2. 打印分割行
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}
}
//游戏当中，玩家落子用'*'表示，电脑落子用'#'
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家落子\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d%d", &x, &y);
		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//我们使用'*'来代替' '，达到视觉上的下棋效果
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");//坐标非法指的是，玩家输入的坐标超越棋盘
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

		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
//返回1表示棋盘满了
//返回0，表示棋盘没满

int IfFull(char board[ROW][COL], int row, int col)//该函数棋盘下满后的，平局做准备
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}

char Ifwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int flag = 1;
	int n = 0;
	//横行
	for (i = 0; i < row; i++)
	{
		while (n < col - 1)
		{
			if (board[i][n] != board[i][n + 1])//通过两两判断元素，如果相等则返回三个其中任意一个数据
			{
				flag = 0;
			}
			n++;
		}
		if (1 == flag && board[i][n] != ' ')
		{
			return board[i][n];
		}
	}
	//纵行
	for (n = 0; n < col; n++)
	{
		while (i < row - 1)
		{
			if (board[i][n] != board[i + 1][n])
			{
				flag = 0;
			}
			i++;
		}
		if (1 == flag && board[i][n] != ' ')
		{
			return board[i][n];
		}
	}
	//两个对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//判断是否平局
	if (1 == IfFull(board, ROW, COL))
	{
		return 'Tie';
	}
	//继续
	return 'c';
}