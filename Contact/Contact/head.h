#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>
#define MAX 100
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
	PI data[MAX];
	int count;
}Ct;

void menu();
void InitContact(Ct &con);
void Add(Ct &con);
void Show(Ct& con);
void Del(Ct& con);
void Search(Ct& con);
void Modify(Ct& con);
void Sort(Ct& con);