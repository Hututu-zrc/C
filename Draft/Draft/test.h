#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define N 1000
#define Expand 10
typedef int Elemtype;
typedef struct
{
	char name[20];
	char stunumber[12];
	char gender[5];
	int age;

}Data;
typedef struct
{
	Elemtype* elem;
	int length;
	int listsize;

}SL;

void InitSeqList();
void DleteSeqList();
void InsertSeqList();
void ShowSeqList();
void menu();