#define _CRT_SECURE_NO_WARNINGS
#include"Scan_Mine.h"
void menu()
{
	printf("******************************\n");
	printf("******    1. play        *****\n");
	printf("******    0. exit        *****\n");
	printf("******************************\n");
}
void game()
{	//11�е�ԭ����ɨ��ߣ����ǻ�Խ�磬Ϊ�˲����Խ�磬���Ը�Ϊ11��
	char mine[ROWS][COLS] = { '0 '};//��ŵ��׵���Ϣ
	char show[ROWS][COLS] = { '0' };//���ɨ������׵���Ϣ
	//�����ǲ���ȫ��ʼ��������Ҫר��дһ��IntBoard��������ʼ��
	//mine��ʼ����ȫ��Ϊ'0'
	IntBoard(mine,ROWS,COLS,'0');
	//showȫ��Ϊ'*',����һ������ж�����Ƿ���ף���mine���жϡ�
	//����ը��������ֱ�Ӽ�����Χ�������ٽ�show������ַ���һ��
	IntBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	SetMine(mine,ROW,COL);//����������
	DisplayBoard(show, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine,show,ROW,COL);




}
int main()
{
	int input = 0;
	//�����������ֵ
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������������ԣ�\n");
			break;
		}
	} while (input);
}

	////������
	//return(board[x - 1][y] +
	//	board[x - 1][y - 1] +
	//	board[x][y - 1] +
	//	board[x + 1][y] +
	//	board[x + 1][y + 1] +
	//	board[x][y + 1] +
	//	board[x - 1][y + 1] - 8 * '0');

