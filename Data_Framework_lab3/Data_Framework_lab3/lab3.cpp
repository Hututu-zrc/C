#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
typedef int Elemtype;
#define N 21

typedef struct SListNode
{
	Elemtype data;
	struct SListNode* next;//ָ����һ��ͬ���͵�ָ��

}LNode, * LinkList;

void CreateList(LinkList& L,int n)
{
	LNode* temp;
	LNode* temp2;
	L=(LNode*)malloc(sizeof(LNode));
	temp2 = L;
	temp2->data = 1;
	for (int i = 2; i<=n; i++)
	{
		temp = (LNode*)malloc(sizeof(LNode));
		temp->data = i;
		temp->next = NULL;
		temp2->next = temp;
		temp2 = temp;
	}
	temp2->next = L;
}
void ShowList(LinkList L,int n)
{
	LNode* temp;
	temp = L;
	int count = 0;
	while (temp && count<n)
	{
		printf("%d ", temp->data);
		temp = temp->next;
		count++;
	}
	printf("\n");
}
//void InsertList(LinkList& L, int loc, int data)
//{
//	LNode* temp = (LNode*)malloc(sizeof(LNode));
//	temp->data = data;
//	LNode* temp2 = L;
//	int i = 0;
//	while (temp2 && i < loc - 1)
//	{
//		temp2 = temp2->next;
//		i++;
//	}
//	temp->next = temp2->next;
//	temp2->next = temp;
//}
//void DeleteList(LinkList& L, int loc)
//{
//	LNode* temp = (LNode*)malloc(sizeof(LNode));
//	if (L->next == NULL)
//	{
//		printf("�˱�Ϊ��");
//	}
//	else
//	{
//		temp = L;
//		int i = 0;
//		while (i < loc - 1 && temp->next)
//		{
//			temp = temp->next;
//			i++;
//		}
//		LNode* p = temp->next;
//		temp->next = p->next;
//		free(p);
//	}
//
//}
int WindBlow(LinkList &L)
{
	LNode* p, *q;
	p = L;//��1
	while (p->next!=p)
	{
		p = p->next;//��2
		q = p->next;//��3
		p->next = q->next;
		free(q);
		p = p->next;
	}
	return p->data;
}
//ElemType Windblow(LinkList& L)
//{
//	LNode* p;
//	LNode* q;
//	p = L;//��1 
//	while (p->next != p)
//	{
//		p = p->next;//��2 
//		q = p->next;//��3
//
//		p->next = q->next;//3���� 
//
//		p = p->next;//��1 
//	}
//	return p->data;
//}
int main()
{

	LinkList List;
	int input=0;
	printf("���������ж��ٸ����ӣ�");
	scanf("%d", &input);
	CreateList(List,input);
	ShowList(List,input);
//loop:
//	printf("��ѡ������Ҫ�Ĺ��ܣ�\n");
//	printf("���Ҫѡ�����������밴���¸�ʽ���룺1+������λ��+�������ֵ\n");
//	printf("���Ҫѡ��ɾ���������밴���¸�ʽ���룺2+��ɾ����λ��+0\n");
//	printf("���Ҫѡ����ֹ�������밴���¸�ʽ���룺3+0+0\n");
//	scanf("%d+%d+%d", &op, &loc, &data);
//	if (op == 1)
//	{
//		InsertList(List, loc, data);
//		ShowList(List);
//	}
//	else if (op == 2)
//	{
//		DeleteList(List, loc);
//		ShowList(List);
//	}
//	else if (op == 3)
//	{
//		return 0;
//	}
//	else
//	{
//		printf("������Ч���밴Ҫ�����룡");
//	}
//	goto loop;
	int ret = WindBlow(List);
	printf("%d\n", ret);
	return 0;

}

//#include "stdio.h"
//#include "stdlib.h"
//
//
//
//typedef int ElemType;
//typedef struct LNode
//{
//	ElemType      data;
//	struct LNode* next;
//}LNode, * LinkList;
//
//
//
//void SitDown(LinkList& L, int number)
//{
//
//	LNode* p;
//	L = (LNode*)malloc(sizeof(LNode));
//	L->data = 1;
//	L->next = L;//��β���� 
//
//	for (int i = number; i >= 2; i--)
//	{
//		p = (LNode*)malloc(sizeof(LNode));
//		p->data = i;
//		p->next = L->next;
//		L->next = p;
//	}
//}
//
//
//
//void Show(LinkList L)
//{
//
//	LNode* p;
//	p = L;
//	printf("%d ", p->data);
//	p = p->next;
//
//	while (p != L)
//	{
//		printf("%d  ", p->data);
//		p = p->next;
//	}
//	printf("\n");
//}
//
//
//
//ElemType Windblow(LinkList& L)
//{
//	LNode* p;
//	LNode* q;
//	p = L;//��1 
//	while (p->next != p)
//	{
//		p = p->next;//��2 
//		q = p->next;//��3
//
//		p->next = q->next;//3���� 
//
//		p = p->next;//��1 
//	}
//	return p->data;
//}
//
//
//
////int main()
////{
////	int n, last;
////	LinkList L;
////
////	printf("���������紵���ӵ�������");
////	scanf_s("%d", &n);
////
////	SitDown(L, n);//������n��Ԫ�ص�ѭ�������� 
////	//Show(L);//��������õ�����������Ԫ�ص�ֵ 
////	last = Windblow(L);//ִ�д�紵��������ʣ�µ�һ�����ӵ���� 
////	printf("%d���������紵�����ʣ�µĺ����ǵ�%d��\n", n, last);
////
////	return 0;
////}
//int main()
//{
//	int n, last;
//	LinkList L;
//
//	printf("���������紵���ӵ�������");
//	for (n = 1; n <= 100; n++)
//	{
//
//		SitDown(L, n);//������n��Ԫ�ص�ѭ�������� 
//		//Show(L);//��������õ�����������Ԫ�ص�ֵ 
//		last = Windblow(L);//ִ�д�紵��������ʣ�µ�һ�����ӵ���� 
//		printf("%d���������紵�����ʣ�µĺ����ǵ�%d��\n", n, last);
//	}
//	return 0;
//}