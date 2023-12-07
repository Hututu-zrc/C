#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#define MAX 3
#define Extend 25
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char adress[30];
}PI;

typedef struct Contact
{
	PI *data;
	int count;//记录有多少个联系人
	int capacity;//记录通讯录的容量有多少个
}Ct;

void menu();
void InitContact(Ct& con);
void Add(Ct &con);
void Show(Ct& con);
void Del(Ct& con);
void Search(Ct& con);
void Modify(Ct& con);
void Sort(Ct& con);
//保存数据
void ConserveCon(Ct & con);
//上传数据
void LoadContact(Ct& con);
//扩容
PI* ExtendCapacity(Ct &con);