#define _CRT_SECURE_NO_WARNINGS 1

#include "chess_game.h"

void InitBoard(char board[ROW][COL], int row, int col)//���ö�ά�����ӡ����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//�������ÿո���䣬������Ӿ��ϵ�Ч��
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)//�̶��������Ĵ�ӡ�ָ���
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//1. ��ӡһ�е�����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//2. ��ӡ�ָ���
//		if (i < row - 1)
//			printf("---|---|---\n");
//	}
//}

//���װ棬�����������任��ӡ�ָ���Ϣ
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//1. ��ӡһ�е�����
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2. ��ӡ�ָ���
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
//��Ϸ���У����������'*'��ʾ������������'#'
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�������\n");
	while (1)
	{
		printf("������Ҫ�µ�����:>");
		scanf("%d%d", &x, &y);
		//�ж�x,y����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//����ʹ��'*'������' '���ﵽ�Ӿ��ϵ�����Ч��
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
		}
		else
		{
			printf("����Ƿ�������������!\n");//����Ƿ�ָ���ǣ������������곬Խ����
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

		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}
//����1��ʾ��������
//����0����ʾ����û��

int IfFull(char board[ROW][COL], int row, int col)//�ú�������������ģ�ƽ����׼��
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//û��
			}
		}
	}
	return 1;//����
}

char Ifwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int flag = 1;
	int n = 0;
	//����
	for (i = 0; i < row; i++)
	{
		while (n < col - 1)
		{
			if (board[i][n] != board[i][n + 1])//ͨ�������ж�Ԫ�أ��������򷵻�������������һ������
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
	//����
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
	//�����Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	//�ж��Ƿ�ƽ��
	if (1 == IfFull(board, ROW, COL))
	{
		return 'Tie';
	}
	//����
	return 'c';
}