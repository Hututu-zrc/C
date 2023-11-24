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
	//��ʼ�����̵ĺ���
	InitBoard(board,ROW, COL);//������Ϸ�趨������������һ������Ҫ��Ķ�Ԫ����
	DisplayBoard(board, ROW, COL);//���������趨�����飬��ʼ��ӡ���̺ͷָ������������̵���Ϸ����
	//����
	char ret = 0;
	while (1)
	{
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Ifwin(board, ROW, COL);
		if (ret != 'c')
			break;
		ComputerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = Ifwin(board, ROW, COL);
		if (ret != 'c')
			break;
	}
	if (ret == '*')
	{
		printf("��һ����Ϸʤ��!\n");
	}
	else if (ret == '#')
	{
		printf("���Ի����Ϸʤ��!\n");
	}
	else
	{
		printf("��Ϸƽ�֣�\n");
	}
	DisplayBoard(board, ROW, COL);

}
int main()
{
	//���ȣ�����˼·��
	//1.��ӡ�˵�
	//2.��ӡ�˵�����Ұ��涨������ж��Ƿ�ʼ��Ϸ��ʹ��switch��䣩
	// ��ʱ���������������涨���룬��������Ҫ����ѭ����������ظ�ѡ��Ļ��ᣨwhile��䣩
	//3.���ѡ��ʼ��Ϸ�������Ϸ��ɽ�����������ٴ����顣
	//  ��ʱ����ҲӦ����ʹ��ѭ����������ٴ�������Ϸ
	//4.���ѡ���˳������ǽ�����Ϸ
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:-> ");
		scanf("%d",&input);
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

	return 0;
}