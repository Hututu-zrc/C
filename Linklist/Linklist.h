#pragma once
#include <stdio.h>
#include<stdlib.h>
typedef int SLDatetype;

typedef struct SListnode
{
	SLDatetype data;
	struct SListnode* next;//ָ����һ��ͬ���͵�ָ��

}SLNode;

void SLprint(SLNode* p);
SLNode* SLCreateNode(SLDatetype x);//����һ�����
void SLPushBack(SLNode** p, SLDatetype x);//β��
void SLPushFront(SLNode** p, SLDatetype x);//ͷ��
void SLpopBack(SLNode** p);//βɾ��ҲҪ�������ָ�룬
//��Ϊ����ɾ�գ�ɾ�յ�ʱ����Ҫ�ı�plist
void SLPopFront(SLNode** p, SLDatetype x);//ͷɾ���϶�Ҫ����ָ�룬��ΪҪ�ı�plist

