#include "head2.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
typedef int Elemtype;

typedef struct SListNode
{
	Elemtype data;
	struct SListNode* next;//ָ����һ��ͬ���͵�ָ��

}LNode, * LinkList;

void CreateList(LinkList &L)
{
	L = (LNode*)malloc(sizeof(LNode));
	L->next = NULL;
	LNode* temp;
	LNode* temp2;
	for (int i = 21; i>=1; i--)
	{
		temp = (LNode*)malloc(sizeof(LNode));
		temp->data = i;
		temp->next = L->next;
		L->next = temp;
	}
}
void ShowList(LinkList L)
{
	LNode* temp;
	temp = L->next;
	while (temp)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void InsertList(LinkList &L,int loc,int data)
{
	LNode* temp = (LNode*)malloc(sizeof(LNode));
	temp->data = data;
	LNode* temp2=L;
	int i = 0;
	while (temp2&&i<loc-1)
	{
		temp2 = temp2->next;
		i++;
	}
	temp->next = temp2->next;
	temp2->next = temp;
}
void DeleteList(LinkList &L,int loc)
{
	LNode* temp = (LNode*)malloc(sizeof(LNode));
	if (L->next == NULL)
	{
		printf("�˱�Ϊ��");
	}
	else
	{
		temp = L;
		int i = 0;
		while (i < loc-1&&temp->next)
		{
			temp = temp->next;
			i++;
		}
		LNode* p = temp->next;
		temp->next = p->next;
		free(p);
	}
	
}
int main()
{

	LinkList List;
	int op, loc, data;
	CreateList(List);
	ShowList(List);
	loop:
	printf("��ѡ������Ҫ�Ĺ��ܣ�\n");
	printf("���Ҫѡ�����������밴���¸�ʽ���룺1+������λ��+�������ֵ\n");
	printf("���Ҫѡ��ɾ���������밴���¸�ʽ���룺2+��ɾ����λ��\n");
	printf("���Ҫѡ����ֹ�������밴���¸�ʽ���룺3+0+0\n");
	scanf("%d+%d+%d",&op,&loc,&data);
	if (op == 1)
	{
		InsertList(List, loc, data);
		ShowList(List);
	}
	else if (op == 2)
	{
		DeleteList(List, loc);
		ShowList(List);
	}
	else if (op == 3)
	{
		return 0;
	}
	else
	{
		printf("������Ч���밴Ҫ�����룡");
	}
	goto loop;
	return 0;

}