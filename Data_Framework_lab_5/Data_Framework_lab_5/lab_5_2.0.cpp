//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//typedef char Elemtype;
//typedef struct BinaryTree
//{
//	Elemtype data;
//	struct BinaryTree* leftchild;
//	struct BinaryTree* rightchild;
//}Bn, * Bt;
//void CreatBinaryTree(Bt& T)
//{
//	Elemtype ch;
//	scanf("%c", &ch);
//	//getchar();
//	if (ch == ' ' || ch == '\n')
//	{
//		(T) = NULL;
//	}
//	else
//	{
//		(T)->data = ch;
//		(T)->leftchild = (Bt)malloc(sizeof(Bn));
//		(T)->rightchild = (Bt)malloc(sizeof(Bn));
//		assert(((T)->leftchild) && ((T)->rightchild));
//		CreatBinaryTree((T)->leftchild);
//		CreatBinaryTree((T)->rightchild);
//	}
//}
////�������
//void PreOrder(Bn* T)
//{
//	if (T == NULL)
//		return;
//	else
//	{
//		printf("%c", T->data);
//		PreOrder(T->leftchild);
//		PreOrder(T->rightchild);
//	}
//}
////�������
//void InOrder(Bn* T)
//{
//	if (T == NULL)
//		return;
//	else
//	{
//		InOrder(T->leftchild);
//		printf("%c", T->data);
//		InOrder(T->rightchild);
//	}
//}
////�������
//void PostOrder(Bn* T)
//{
//	if (T == NULL)
//		return;
//	else
//	{
//		PostOrder(T->leftchild);
//		PostOrder(T->rightchild);
//		printf("%c", T->data);
//	}
//}
//
//int main()
//{
//	Bn t;
//	Bn* T = &t;
//	CreatBinaryTree(T);
//	printf("���������");
//	PreOrder(T);
//	printf("\n");
//	printf("���������");
//	InOrder(T);
//	printf("\n");
//	printf("���������");
//	PostOrder(T);
//
//	return 0;
//}
//
//////