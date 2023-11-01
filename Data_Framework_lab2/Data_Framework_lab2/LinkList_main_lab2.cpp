#include "head2.h"
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
typedef int Elemtype;

typedef struct SListNode
{
	Elemtype data;
	struct SListNode* next;//指向下一个同类型的指针

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
		printf("此表为空");
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
	printf("请选择你想要的功能：\n");
	printf("如果要选择插入操作，请按以下格式输入：1+待插入位序+待插入的值\n");
	printf("如果要选择删除操作，请按以下格式输入：2+待删除的位序\n");
	printf("如果要选择终止操作，请按以下格式输入：3+0+0\n");
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
		printf("输入无效，请按要求输入！");
	}
	goto loop;
	return 0;

}