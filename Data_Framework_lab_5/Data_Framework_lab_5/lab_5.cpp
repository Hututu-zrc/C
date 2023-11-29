#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>

typedef char Elemtype;
typedef struct BinaryTree
{
	Elemtype data;
	struct BinaryTree* rightchild;
	struct BinaryTree* leftchild;
}Bt;
void  CreateNode(Bt *T)
{
	Elemtype ch;
	scanf("%c", &ch);
 	getchar();
	if (ch == ' ')
		T = NULL;
	else
	{
		Bt* ptr = (Bt*)malloc(sizeof(Bt));
		if (ptr == NULL)
		{
			printf("�����ڵ�ʧ�ܣ�\n");
			exit(0);
		}
		ptr->leftchild = ptr->rightchild = NULL;
		T = ptr;
		//assert(ptr);
		ptr->data = ch;
		printf("�������������");
		CreateNode(ptr->leftchild);
		printf("�������������");
		CreateNode(ptr->rightchild);
	}
}

//�������
void preOrder(Bt* T)
{
	if (T == NULL)
		return;
	else
	{
		printf("%c", T->data);
		preOrder(T->leftchild);
		preOrder(T->rightchild);
	}
}
//�������
void InOrder(Bt* T)
{
	if (T == NULL)
		return;
	else
	{
		InOrder(T->leftchild);
		printf("%c", T->data);
		InOrder(T->rightchild);
	}
}
//��������
void PostOrder(Bt* T)
{
	if (T == NULL)
		return;
	else
	{
		PostOrder(T->leftchild);
		PostOrder(T->rightchild);
		printf("%c", T->data);
	}
}

int main()
{
	Bt *T=(Bt*)malloc(sizeof(Bt));
	Bt* t=T;
	printf("���������㣺");
	CreateNode(T);
	printf("���������\n");
	preOrder(t);
	printf("\n");
	printf("���������\n");
	InOrder(t);
	printf("\n");
	printf("���������\n");
	PostOrder(t);
	return 0;
}

