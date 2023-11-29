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
			printf("创建节点失败！\n");
			exit(0);
		}
		ptr->leftchild = ptr->rightchild = NULL;
		T = ptr;
		//assert(ptr);
		ptr->data = ch;
		printf("输入的左子树：");
		CreateNode(ptr->leftchild);
		printf("输入的右子树：");
		CreateNode(ptr->rightchild);
	}
}

//先序遍历
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
//中序遍历
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
//后续遍历
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
	printf("请输入根结点：");
	CreateNode(T);
	printf("先序遍历：\n");
	preOrder(t);
	printf("\n");
	printf("中序遍历：\n");
	InOrder(t);
	printf("\n");
	printf("后序遍历：\n");
	PostOrder(t);
	return 0;
}

