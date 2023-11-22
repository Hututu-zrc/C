#include "head.h"
void menu();
void InitContact(Ct& con);
void Add(Ct& con);
void Del(Ct& con);
void Search(Ct& con);
void Modify(Ct& con);
void Sort(Ct& con);
int main()
{

	int input = 0;
	Ct con;
	InitContact(con);
	do
	{
		menu();
		printf("请输入你想要的功能选项：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add(con);
			break;
		case 2:
			Del(con);
			break;
		case 3:
			Search(con);
			break;
		case 4:
			Modify(con);
			break;
		case 5:
			Sort(con);
			break;
		case 6:
			Show(con);
			break;
		case 7:
			printf("退出通讯录\n");
			exit(0);
		default:
			printf("输出错误，请重新输入！！！\n");
		}
	} while (input);
	return 0;
}