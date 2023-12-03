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
		printf("����������Ҫ�Ĺ���ѡ�");
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
			printf("�˳�ͨѶ¼\n");
			exit(0);
		default:
			printf("����������������룡����\n");
		}
	} while (input);
	return 0;
}