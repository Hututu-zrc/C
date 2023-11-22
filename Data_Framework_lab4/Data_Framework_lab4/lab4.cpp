#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define Max_TREE_SIZE 100
typedef char ElemType;
typedef ElemType SqBiTree[Max_TREE_SIZE];

void CreateTree(SqBiTree &T)
{
	
	T[0] = 'A';
	T[1] = 'B';
	T[2] = 'D';
	T[3] = 'E';
	T[4] = 'F';
	T[5] = 'H';	
	T[6] = 'J';
	T[7] = 'K';
	T[8] = 'L';
	T[11] = 'M';
	
}
void PreOrder(SqBiTree &T,int n)
{
	if (T[n]==0)
	{
		return;
	}
	printf("%c ", T[n]);
	PreOrder(T, (n + 1) * 2 - 1);
	PreOrder(T, 2 * (n + 1));
}
void InOrder(SqBiTree &T,int n)
{
	if (T[n] == 0)
	{
		return;
	}
	InOrder(T, (n + 1) * 2 - 1);
	printf("%c ", T[n]);
	InOrder(T, 2 * (n + 1));
}
void BackOrder(SqBiTree &T,int n)
{
	if (T[n] == 0)
	{
		return;
	}
	BackOrder(T, (n + 1) * 2 - 1);
	BackOrder(T, 2 * (n + 1));
	printf("%c ", T[n]);
	
	
}
int main()
{
	SqBiTree T = { 0 };
	CreateTree(T);
	printf("这棵树的先序遍历序列为：");
	PreOrder(T, 0);
	printf("\n这棵树的中序遍历序列为：");
	InOrder(T, 0);
	printf("\n这棵树的后序遍历序列为：");
	BackOrder(T,0);
	return 0;
}



































#include<stdio.h>
#include<stdio.h>
#define MAXSIZE 100
typedef char Elemtype;
typedef Elemtype SqTree[MAXSIZE];

//void CreateTree(SqTree& T) {
//	for (int i = 0; i < MAXSIZE; i++) {
//		T[i] = '\0';
//	}
//	T[0] = '-';
//	T[1] = '+';
//	T[2] = '/';
//	T[3] = 'a';
//	T[4] = '*';
//	T[5] = 'e';
//	T[6] = 'f';
//	T[9] = 'b';
//	T[10] = '-';
//	T[21] = 'c';
//	T[22] = 'd';
//}
//
//void preorder(SqTree T, int n) {
//	if (T[n - 1] != '\0') {
//		printf("%c ", T[n - 1]);
//		preorder(T, 2 * n);
//		preorder(T, (2 * n + 1));
//	}
//}
//
//void inorder(SqTree T, int n) {
//	if (T[n - 1] != '\0') {
//		inorder(T, (2 * n));
//		printf("%c ", T[n - 1]);
//		inorder(T, (2 * n + 1));
//	}
//}
//
//void postorder(SqTree T, int n) {
//	if (T[n - 1] != '\0') {
//		postorder(T, 2 * n);
//		postorder(T, (2 * n + 1));
//		printf("%c ", T[n - 1]);
//	}
//}
//
//int main() {
//	SqTree Tree;
//	CreateTree(Tree);
//	printf("这棵树的先序遍历为:");
//	preorder(Tree, 1);
//	printf("\n这棵树的中序遍历为:");
//	inorder(Tree, 1);
//	printf("\n这棵树的后序遍历为:");
//	postorder(Tree, 1);
//	printf("\n");
//	return 0;
//}