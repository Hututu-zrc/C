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
//		printf("表已空，不能再删除！\n");
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
//	printf("请选择您想要执行的操作：\n");
//	printf("如果想要执行insert操作，请按格式输入：1+待插入位序+待插入的值\n");
//	printf("如果想要执行delete操作，请按格式输入：2+待删除位序+0\n");
//	printf("如果想要结束程序，请按格式输入：3+0+0\n");
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
//		printf("请输入的数据无效，请按提示输入！");
//	goto loop;
//
//
//	return 0;
//}