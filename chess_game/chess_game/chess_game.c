#define _CRT_SECURE_NO_WARNINGS
#include"chess_game.h"
#include<stdio.h>
void InitBoard(char board[ROW][COL], int row, int col)//���ö�ά�����ӡ3*3�Ŀո��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//��ʼ��Ϊ�ո�
		}
	}
}
//�׶��Ե�һ�汾
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//��ӡ�ָ���Ϣ
//		if(i<row-1)
//		printf("---|---|---\n");
//	}
//}
//���װ�
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;

	for (i = 0; i < row; i++)
	{
		//��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);//���ȣ�ѭ����ӡÿһ�е�ÿһ��
			if (j < col - 1)
				printf("|");//��ӡһ��Ԫ�صĺ󣬴�ӡÿһ�е�����ָ��
		}
		printf("\n");//��ӡһ�к󣬻���
		//��ӡ�ָ���Ϣ
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)//��ӡ��һ�к󣬻��к��ӡ����ķָ���
			{
				printf("---");
				if (j< col - 1)
					printf("|");//����ָ����У���������ָ��
			}
			printf("\n");//��ӡ��󻻵���һ�д�ӡԪ��
		}
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");
	while (1)
	{
		printf("����������:>");
		scanf("%d %d", &x, &y);
		//���귶Χ�ĺϷ����ж�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//���x��y��Χ��1~3������д����ʵ�ʲ�����Ҫ��������������������ԣ�(x-1)��(y-1)
			{
				board[x - 1][y - 1] = '*';//ע�����ﲻ�ǡ�==�������ǡ�=��
				break;
			}
			else
			{
				printf("���걻ռ�ã���ѡ������λ�����壡\n");
			}
		}
		else
		{
			printf("����Ƿ������������룡\n");//����Ƿ�ָ���������������곬�������ǵ����̡�
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������\n");
	while (1)
	{
		
		x = rand() % row;//0~2
		y = rand() % col;//0~2
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//ע�����ﲻ�ǡ�==�������ǡ�=��
			break;
		}
	}
	
}
//�������˾ͷ��أ�û���ͷ���0
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
	//���ж�����������ͬ�ķ���
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//��
	int j = 0;
	for (j = 0; j < col; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
		{
			return board[1][j];
		}
	}
	//�Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//û��Ӯ���ж�ƽ��
	if (IfFull(board, row, col))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'c';
}