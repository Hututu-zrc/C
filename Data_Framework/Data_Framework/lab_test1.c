#include "List.h"
int main()
{
	SL L;
	int input=0,n,e;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			InitSeqList(&L);
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