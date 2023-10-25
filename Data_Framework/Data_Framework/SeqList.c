#include "List.h"
void menu()
{
	printf("1.init功能(初始化顺序表，并且赋值)\n");
	printf("2.insert功能(在某个位置插入元素)\n");
	printf("3.delete功能(删除某个位置元素)\n");
	printf("4.showlist功能(打印顺序表的元素和表长)\n");
	printf("5.退出使用\n");
	printf("请选择你想要的功能：");
}
void InitSeqList(SL*L)
{
	L->elem = (Elemtype*)malloc(N * sizeof(Elemtype));
	if (!(L->elem))exit(0);
	int amount;
	printf("请问你想要输入多少个数据："); scanf("%d", &amount);
	if(amount>0)
		printf("请输入%d个数据:",amount);
	L->length =amount;
	L->listsize = Expand;
	for (int i = 0; i <amount; i++)
	{
		scanf("%d", &(L->elem[i]));
	}

}

void InsertSeqList(SL* L, int n,Elemtype e)
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
	while (pos >= n-1)
	{
		L->elem[pos] = L->elem[pos - 1];
		--pos;
	}
	L->elem[n - 1] = e;
	L->length++;
}v 
void DleteSeqList(SL* L, int n,Elemtype e)
{
	if (L->length > 0)
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
	else
		printf("表空,请重试\n");

}
void ShowSeqList(SL*L)
{
	printf("现在的表长为:%d\n", L->length);
	for (int i = 0; i < L->length; i++)
		printf("%d ", L->elem[i]);
	printf("\n");
}