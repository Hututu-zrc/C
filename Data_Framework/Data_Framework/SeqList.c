#include "List.h"
void menu()
{
	printf("1.init功能\n");
	printf("2.insert功能\n");
	printf("3.delete功能\n");
	printf("4.showlist功能\n");
	printf("5.退出使用\n");
	printf("请选择你想要的功能：");
}
void InitSeqList(SL*L)
{
	L->elem = (Elemtype*)malloc(N * sizeof(Elemtype));
	if (!(L->elem))exit(0);
	L->length = 21;
	L->listsize = Expand;
	printf("请输入21个数据:");
	for (int i = 0; i <21; i++)
	{
		scanf("%d", &(L->elem[i]));
	}
}

void InsertSeqList(SL* L, int n,Elemtype e)
{
	SL* newbase; Elemtype end;
	if (n<1 || n>L->length + 1)return 0;
	if (L->length == L->listsize)
	{
		newbase = (Elemtype*)realloc(L->elem, (N + Expand) * sizeof(Elemtype));
		if (!newbase)exit(0);
		L->elem = newbase;
		L->listsize += Expand;
	}
	end = L->length;
	while (end >= n-1)
	{
		L->elem[end] = L->elem[end - 1];
		--end;
	}
	L->elem[n - 1] = e;
	L->length++;
}
void DleteSeqList(SL* L, int n,Elemtype e)
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
void ShowSeqList(SL*L)
{
	for (int i = 0; i < L->length; i++)
		printf("%d ", L->elem[i]);
	printf("\n");
}