#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>//�����rand(),strad()��ͷ�ļ�
#include<time.h>//�����ʱ�����ͷ�ļ�
//��ʼ���ҳ��
//��Ϸ����
// {
// 1.�����������
// 2.��Ҳ´�����ʾ
// 3.
// }
//��Ϸ����������ҳ��

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
	int ret = rand() % 100 + 1;//��rand()�ķ�Χ�������ó���������������С��������Ҫ�ķ�Χ
	while (1)//��Ҳ�����һ�β��У���������ѭ�������һֱ���ԣ�����ʾ��ң�ֱ�����У���Ϸ����
	{
		printf("�뿪ʼ�����֣�");
		scanf("%d", &guess);
		if (guess < ret)
			printf("��С��\n");
		else if (guess > ret)
			printf("�´���\n");
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));//����ʱ����Ǹ���Ϸ��Ƶ��ѵ�
	int input=0;
	do//������ж�����Ƿ�ȷʵ����Ϸ���Լ���Ҳ����涨�����ʹ��ѭ����������ٴγ������롣
		//����ɹ�����ת����Ϸ����game()
	{
		menu();
		printf("���������֣�");
		scanf("%d", &input);
		switch (input) //ע�⣺Switch�������Ҫ�����α��ʽ
		//����Switch��ѡ�������if������
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("�밴�涨���룡����\n");
			break;
		}
	}
	while (input);
	return 0;
}

