#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <Windows.h>
main()
{
	int option;
	void maxx(), Enquiry(), Add(), Delete();
	//void Filecopy();
	while (1)
	{
		//system("cls");
		printf("\n----------�ɼ�����----------\n");
		puts("1.��Ϣ��ѯ:\n");
		puts("2.��Ϣ���:\n");
		puts("3.��Ϣɾ��:\n");
		puts("4.��߷�:\n");
		puts("0.�˳�ϵͳ������\n");
		puts("--------------------------");
		printf("���ѡ��:");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			Enquiry();
			break;
		case 2:
			Add();
			break;
		case 3:
			Delete();
			break;
		case 4:
			maxx();
			break;
		case 0:
			puts("ллʹ�ã��ټ�������");
			exit(0);
		default:
			puts("����������������룡����");
		}
		//Sleep(2000);
	}
}