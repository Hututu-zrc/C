#include "List.h"
void menu()
{
	printf("1.init����(��ʼ��˳������Ҹ�ֵ)\n");
	printf("2.insert����(��ĳ��λ�ò���Ԫ��)\n");
	printf("3.delete����(ɾ��ĳ��λ��Ԫ��)\n");
	printf("4.showlist����(��ӡ˳����Ԫ�غͱ�)\n");
	printf("5.�˳�ʹ��\n");
	printf("��ѡ������Ҫ�Ĺ��ܣ�");
}
void InitSeqList(SL*L)
{
	L->elem = (Elemtype*)malloc(N * sizeof(Elemtype));
	if (!(L->elem))exit(0);
	int amount;
	printf("��������Ҫ������ٸ����ݣ�"); scanf("%d", &amount);
	if(amount>0)
		printf("������%d������:",amount);
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
		printf("���,������\n");

}
void ShowSeqList(SL*L)
{
	printf("���ڵı�Ϊ:%d\n", L->length);
	for (int i = 0; i < L->length; i++)
		printf("%d ", L->elem[i]);
	printf("\n");
}