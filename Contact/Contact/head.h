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
	int count;//��¼�ж��ٸ���ϵ��
	int capacity;//��¼ͨѶ¼�������ж��ٸ�
}Ct;

void menu();
void InitContact(Ct& con);
void Add(Ct &con);
void Show(Ct& con);
void Del(Ct& con);
void Search(Ct& con);
void Modify(Ct& con);
void Sort(Ct& con);
//��������
void ConserveCon(Ct & con);
//�ϴ�����
void LoadContact(Ct& con);
//����
PI* ExtendCapacity(Ct &con);