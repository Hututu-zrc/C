#include "test.h"

int main()
{
	SL L; Data na[100];
	int input = 0, n, e;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			InitSeqList(&L, &na);
			printf("\n");
			break;
		case 2:
			printf("请输入要插入的位置和数据：");
			scanf("%d %d", &n, &e);
			InsertSeqList(&L, n, e);
			ShowSeqList(&L);
			printf("\n");
			break;
		case 3:
			printf("请输入要删除的位置：");
			scanf("%d", &n);
			DleteSeqList(&L, n);
			ShowSeqList(&L);
			printf("\n");
			break;
		case 4:
			ShowSeqList(&L);
			printf("\n");
			break;
		case 5:
			exit(0);
		default:
			puts("选择错误，请重试！！！");
		}
	} while (input);
}

void menu()
{
	printf("1.init功能(初始化顺序表，并且赋值)\n");
	printf("2.insert功能(在某个位置插入元素)\n");
	printf("3.delete功能(删除某个位置元素)\n");
	printf("4.showlist功能(打印顺序表的元素和表长)\n");
	printf("5.退出使用\n");
	printf("请选择你想要的功能：");
}
void InitSeqList(SL* L,Data*na)
{
	L->elem = (Elemtype*)malloc(N * sizeof(Elemtype));
	if (!(L->elem))exit(0);
	int amount;
	printf("请问你想要输入多少个数据："); scanf("%d", &amount);
	L->length = amount;
	L->listsize = Expand;
	FILE* fp;
	char *ch;
	fp = fopen("D:\\桌面\\计科一区花名册.txt", "r");

	}

}

void InsertSeqList(SL* L, int n, Elemtype e)
{
	SL* newbase; Elemtype pos;
	if (n<1 || n>L->length + 1)return 0;
	if (L->length == L->listsize)
	{
		newbase = (Elemtype*)realloc(L->elem, (N + Expand) * sizeof(Elemtype));
		if (!newbase)exit(0);
		L->elem = newbase;
		L->listsize += Expand;
	}
	pos = L->length;
	while (pos >= n - 1)
	{
		L->elem[pos] = L->elem[pos - 1];
		--pos;
	}
	L->elem[n - 1] = e;
	L->length++;
}
void DleteSeqList(SL* L, int n, Elemtype e)
{
	Elemtype erase = n;
	e = L->elem[erase - 1];
	while (erase < L->length)
	{
		L->elem[erase - 1] = L->elem[erase];
		++erase;
	}
	L->length--;
}
void ShowSeqList(SL* L)
{
	printf("现在的表长为:%d\n", L->length);
	for (int i = 0; i < L->length; i++)
		printf("%d ", L->elem[i]);
	printf("\n");
}