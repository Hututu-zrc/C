#pragma once
#define N 1000
typedef int SLdatatype;
#include<stdio.h>
#include<stdlib.h> 

////��̬˳���
//typedef struct Seqlist
//{
//	SLdatatype a[N];
//	int size;//��ʾ�������洢���˶��ٸ�����
//	int capacity;//��ʾ
//}SL;
//
//
//
////�ӿں������������ ����STL�ߣ������Ժ󽲽�
////��̬˳���Ĵ�С�̶����ˣ����ÿ���
//void SeqlistLnit(SL* ps);
//void SeqlistPushBack(SL* ps, SLdatatype x);
//void SeqlistPopBack(SL* ps);
//void SeqlistPushFront(SL* ps, SLdatatype x);
//void SeqlistPopFront(SL* ps);
//


//��̬˳���  
//������ͷ�ļ���ʾ���Ǵ����ĺ����Լ��ṹ��Ķ���
typedef struct Seqlist //����һ���ṹ�����洢����
{
	SLdatatype* a;//����ָ��洢��һ���ĵ�ַ
	int size;//��ʾ�������洢���˶��ٸ�����
	int capacity;//��ʾ����ʵ���ܴ洢��������󣨵�λ�Ǹ�����
}SL;



//�ӿں������������ ����STL�ߣ������Ժ󽲽�
//
void SeqlistLnit(SL* ps);
void SeqlistPushBack(SL* ps, SLdatatype x);
void SeqlistDestory(SL* ps);

void SeqlistPopBack(SL* ps);
void SeqlistPushFront(SL* ps, SLdatatype x);
void SeqlistPopFront(SL* ps);