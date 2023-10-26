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
			printf("������Ҫ�����λ�ú����ݣ�");
			scanf("%d %d", &n, &e);
			InsertSeqList(&L, n, e);
			ShowSeqList(&L);
			printf("\n");
			break;
		case 3:
			printf("������Ҫɾ����λ�ã�");
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
			puts("ѡ����������ԣ�����");
		}
	} while (input);
}

void menu()
{
	printf("1.init����(��ʼ��˳������Ҹ�ֵ)\n");
	printf("2.insert����(��ĳ��λ�ò���Ԫ��)\n");
	printf("3.delete����(ɾ��ĳ��λ��Ԫ��)\n");
	printf("4.showlist����(��ӡ˳����Ԫ�غͱ�)\n");
	printf("5.�˳�ʹ��\n");
	printf("��ѡ������Ҫ�Ĺ��ܣ�");
}
void InitSeqList(SL* L,Data*na)
{
	L->elem = (Elemtype*)malloc(N * sizeof(Elemtype));
	if (!(L->elem))exit(0);
	int amount;
	printf("��������Ҫ������ٸ����ݣ�"); scanf("%d", &amount);
	L->length = amount;
	L->listsize = Expand;
	FILE* fp;
	char *ch;
	fp = fopen("D:\\����\\�ƿ�һ��������.txt", "r");

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
	printf("���ڵı�Ϊ:%d\n", L->length);
	for (int i = 0; i < L->length; i++)
		printf("%d ", L->elem[i]);
	printf("\n");
}