#include "head.h"
void menu();
void InitContact(Ct& con);
void Add(Ct& con);
void Del(Ct& con);
void Search(Ct& con);
void Modify(Ct& con);
void Sort(Ct& con);
void ConserveCon(Ct& con);

enum funtion
{
	ADD=1,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	EXIT

};
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
		case ADD:
			Add(con);
			break;
		case DEL:
			Del(con);
			break;
		case SEARCH:
			Search(con);
			break;
		case MODIFY:
			Modify(con);
			break;
		case SORT:
			Sort(con);
			break;
		case SHOW:
			Show(con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			exit(0);
		default:
			printf("输出错误，请重新输入！！！\n");
		}
	} while (input);
	return 0;
}