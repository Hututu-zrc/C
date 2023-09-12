#pragma once
#define N 1000
typedef int SLdatatype;
#include<stdio.h>
#include<stdlib.h> 

////静态顺序表
//typedef struct Seqlist
//{
//	SLdatatype a[N];
//	int size;//表示数组里面储存了多少个数据
//	int capacity;//表示
//}SL;
//
//
//
////接口函数，命名风格 跟着STL走，方便以后讲解
////静态顺序表的大小固定死了，不好控制
//void SeqlistLnit(SL* ps);
//void SeqlistPushBack(SL* ps, SLdatatype x);
//void SeqlistPopBack(SL* ps);
//void SeqlistPushFront(SL* ps, SLdatatype x);
//void SeqlistPopFront(SL* ps);
//


//动态顺序表  
//这里是头文件显示我们创建的函数以及结构体的对象
typedef struct Seqlist //创建一个结构体来存储数据
{
	SLdatatype* a;//创建指针存储第一个的地址
	int size;//表示数组里面储存了多少个数据
	int capacity;//表示数组实际能存储的容量多大（单位是个数）
}SL;



//接口函数，命名风格 跟着STL走，方便以后讲解
//
void SeqlistLnit(SL* ps);
void SeqlistPushBack(SL* ps, SLdatatype x);
void SeqlistDestory(SL* ps);

void SeqlistPopBack(SL* ps);
void SeqlistPushFront(SL* ps, SLdatatype x);
void SeqlistPopFront(SL* ps);