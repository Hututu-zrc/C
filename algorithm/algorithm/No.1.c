#define _CRT_SECURE_NO_WARNINGS
//#pragma once
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include <assert.h>
//#define COUNT 10
//
////ֱ�Ӳ�������
////������д����������ʽ���������ǣ��ṹ�������int�����鶯̬���䣬ʹ������˳���д
//typedef struct Num
//{
//	int digit;
//	int length;
//	struct Num* next;
//}num;
//
//int Judge(num* head, int front, int back)
//{
//	for (int i = 0; i < front; i++)
//		head = head->next;
//	num* Back = head->next;
//	if (head->digit <= Back->digit)
//		return 0;
//	else
//		return 1;
//}
//num* Locate(num* head, int ret)
//{
//	for (int i = 0; i < ret; i++)
//		head = head->next;
//	return head;
//}
//void InsertSort(num *head)
//{
//	for (int n = 2; n <= (head)->length; n++)
//	{
//		if (Judge(head, n - 1, n))
//		{
//			//��ʵʹ�������д������Ҫ�ڱ�λ�����������ʵ��û��Ҫ
//			num* front = Locate((head), n - 1);
//			num* back = Locate((head), n);
//			(head)->digit = back->digit;
//			front->next = front->next->next;
//			num* sign = head;
//			while (back->digit > sign->digit)
//				sign = sign->next;
//			num* tmp = head;
//			while (tmp!=(sign))
//				tmp = tmp->next;
//			back->next = tmp->next;
//			tmp->next = back;
//		}
//	}
//}
//int main()
//{
//	num* head = (num*)malloc(sizeof(num));
//	assert(head);
//	head->digit=head->length= 0;
//	head->next = NULL;
//	num* p = head;
//	for (int i = COUNT; i>0; i--)
//	{
//		num* tmp = (num*)malloc(sizeof(num));
//		assert(tmp);
//		tmp->digit = i;
//		tmp->length = 0;
//		head->length++;
//		tmp->next = NULL;
//		p->next = tmp;
//		p = p->next;
//	}
//	InsertSort(head);
//	num* print = head->next;
//	for (int i = 0; i < head->length; i++)
//	{
//		printf("%d ", print->digit);
//		print = print->next;
//	}
//	return 0;
//}

#include <stdio.h>
int totalFruit(int* fruits, int fruitsSize)
{
    int length = 0;
    int max = 0;
    int start = 0;//��������ʼ�±�
    //�����ж�Ԫ��
    int one = fruits[0], two = fruits[1];
    if(fruitsSize==1)
    	return 1;
    for (int end = 0; end < fruitsSize; end++)
    {
        int flag = 0;
        while (fruits[end] == one || fruits[end] == two)
        {
            length++;
            //��ֹԽ��
            if (end < fruitsSize)
                end++;
            else
            {
                //������Ϊ���ж��������µ�Ԫ�ؽ���������Ϊend>fruitsSize��ʱ�����
                flag = 1;
                break;
            }
        }

        if (max < length)
        {
            max = length;
        }
        if (flag == 0 && end < fruitsSize)
        {
            int i = 0;
            //���������ҵ���fruits[end-1]����ʼ�±꣬���ұ�עΪstart
            for (i = end - 2; i >= 0; i--)
            {
                if (fruits[i] != fruits[end - 1])
                {
                    start = i + 1;
                    break;
                }
            }
            //ˢ�³���
            length = end - start + 1;
            //�ж�fruit[end-1]����һ��Ԫ����ȣ�����һ��Ԫ�ؽ����滻
            if (fruits[end - 1] == one)
                two = fruits[end];
            else
                one = fruits[end];

        }

    }
    return max;
}
int main()
{
	char arr[10000];
	int fruits[10000];
    int fruitsSize = 0;
    fgets(arr, 10000, stdin);
    int i=0;
    for (i = 10; arr[i] != '\0'; i++)
    {
        if (arr[i] == ',')
            continue;
        if (arr[i] == ']')
            break;
        fruits[fruitsSize] = arr[i] - '0';
        fruitsSize++;

    }
	
    int ret = totalFruit(fruits, fruitsSize);
    printf("%d", ret);
}
