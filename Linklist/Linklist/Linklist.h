#pragma once
#include <stdio.h>
#include<stdlib.h>
typedef int SLDatetype;

typedef struct SListnode
{
	SLDatetype data;
	struct SListnode* next;//指向下一个同类型的指针

}SLNode;

void SLprint(SLNode* p);
SLNode* SLCreateNode(SLDatetype x);//创造一个结点
void SLPushBack(SLNode** p, SLDatetype x);//尾插
void SLPushFront(SLNode** p, SLDatetype x);//头插
void SLpopBack(SLNode** p);//尾删，也要传输二级指针，
//因为可能删空，删空的时候需要改变plist
void SLPopFront(SLNode** p, SLDatetype x);//头删，肯定要二级指针，因为要改变plist

