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
		printf("\n----------成绩管理----------\n");
		puts("1.信息查询:\n");
		puts("2.信息添加:\n");
		puts("3.信息删除:\n");
		puts("4.最高分:\n");
		puts("0.退出系统！！！\n");
		puts("--------------------------");
		printf("你的选择:");
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
			puts("谢谢使用，再见！！！");
			exit(0);
		default:
			puts("输入错误，请重新输入！！！");
		}
		//Sleep(2000);
	}
}