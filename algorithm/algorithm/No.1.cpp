#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <assert.h>
#define COUNT 10

//ֱ�Ӳ�������
//������д����������ʽ���������ǣ��ṹ�������int�����鶯̬���䣬ʹ������˳���д
typedef struct Num
{
	int digit;
	int length;
	struct Num* next;
}num;

int Judge(num* head, int front, int back)
{
	for (int i = 0; i < front; i++)
		head = head->next;
	num* Back = head->next;
	if (head->digit <= Back->digit)
		return 0;
	else
		return 1;
}
num* Locate(num* head, int ret)
{
	for (int i = 0; i < ret; i++)
		head = head->next;
	return head;
}
void InsertSort(num *head)
{
	for (int n = 2; n <= (head)->length; n++)
	{
		if (Judge(head, n - 1, n))
		{
			//��ʵʹ�������д������Ҫ�ڱ�λ�����������ʵ��û��Ҫ
			num* front = Locate((head), n - 1);
			num* back = Locate((head), n);
			(head)->digit = back->digit;
			front->next = front->next->next;
			num* sign = head;
			while (back->digit > sign->digit)
				sign = sign->next;
			num* tmp = head;
			while (tmp!=(sign))
				tmp = tmp->next;
			back->next = tmp->next;
			tmp->next = back;
		}
	}
}
int main()
{
	num* head = (num*)malloc(sizeof(num));
	assert(head);
	head->digit=head->length= 0;
	head->next = NULL;
	num* p = head;
	for (int i = COUNT; i>0; i--)
	{
		num* tmp = (num*)malloc(sizeof(num));
		assert(tmp);
		tmp->digit = i;
		tmp->length = 0;
		head->length++;
		tmp->next = NULL;
		p->next = tmp;
		p = p->next;
	}
	InsertSort(head);
	num* print = head->next;
	for (int i = 0; i < head->length; i++)
	{
		printf("%d ", print->digit);
		print = print->next;
	}
	return 0;
}