//#include "head2.h"
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//typedef int ElemType;
//typedef struct LNode {
//	ElemType data;
//	LNode* next;
//}LNode, * LinkList;
//
//int CreateList(LinkList& L)
//{
//	LNode* p;
//	L = (LNode*)malloc(sizeof(LNode));
//	L->next = NULL;
//	for (int i = 21; i >= 1; i--)
//	{
//		p = (LNode*)malloc(sizeof(LNode));
//		p->data = i;
//		p->next = L->next;
//		L->next = p;
//		printf("%d", p->data);
//	}
//	return 1;
//}
//
//
//int ShowList(LinkList L)
//{
//	LNode* p;
//	p = L->next;
//	while (p)
//	{
//		printf("%d", p->data);
//		p = p->next;
//	}
//	return 1;
//}
//
//
//int insertList(LinkList& L, int i, ElemType e)
//{
//	LNode* p, * s;
//	int j;
//	p = L->next;
//	j = 1;
//	while (p && j <= i - 1)
//	{
//		p = p->next;
//		j++;
//	}
//	s = (LNode*)malloc(sizeof(LNode));
//	s->data = e;
//	s->next = p->next;
//	p->next = s;
//	return 1;
//}
//
//
//int deleteList(LinkList& L, int i)
//{
//	int j;
//	LNode* p, * q;
//
//	if (L->next == NULL)
//		printf("���ѿգ�������ɾ����\n");
//	else
//	{
//		p = L->next;
//		j = 1;
//		while (p->next && j <= i - 1)
//		{
//			p = p->next;
//			j++;
//		}
//		q = p->next;
//		p->next = q->next;
//		free(q);
//
//	}
//	return 1;
//
//}
//
//
//int main()
//{
//	LinkList List;
//	int op, loc, data;
//
//	CreateList(List);
//	ShowList(List);
//loop:
//	printf("��ѡ������Ҫִ�еĲ�����\n");
//	printf("�����Ҫִ��insert�������밴��ʽ���룺1+������λ��+�������ֵ\n");
//	printf("�����Ҫִ��delete�������밴��ʽ���룺2+��ɾ��λ��+0\n");
//	printf("�����Ҫ���������밴��ʽ���룺3+0+0\n");
//
//	scanf("%d+%d+%d", &op, &loc, &data);
//	if (op == 1)
//	{
//		insertList(List, loc, data);
//		ShowList(List);
//
//	}
//	else if (op == 2)
//	{
//		deleteList(List, loc);
//		ShowList(List);
//	}
//	else if (op == 3)
//		return 0;
//	else
//		printf("�������������Ч���밴��ʾ���룡");
//	goto loop;
//
//
//	return 0;
//}