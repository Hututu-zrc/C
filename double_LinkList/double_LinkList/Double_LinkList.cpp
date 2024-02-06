#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
typedef struct LinkList
{
	int val;
	struct LinkList* pre;
	struct LinkList* next;
}ListNode, * ListPointer;

ListPointer LinkListCreate()
{
	ListPointer head = (ListPointer)malloc(sizeof(ListNode));
	head->pre = NULL;
	head->next = NULL;
	head->val = 0;
	return head;
}
void LinkListAdd(int val,ListPointer& head)
{
	ListPointer NewNode = (ListPointer)malloc(sizeof(ListNode));
	NewNode->val = val;
	if (head->next == NULL)
	{
		NewNode->next = head->next;
		NewNode->pre = head;
		head->next = NewNode;
	}
	else
	{
		NewNode->next = head->next;
		NewNode->pre = head;
		head->next = NewNode;
		NewNode->next->pre = NewNode;
	}
}
void LinkListPrint(ListPointer& head)
{
	ListPointer cur = head;
	while (cur->next)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}	
	printf("%d\n", cur->val);
	while (cur)
	{
		printf("%d ", cur->val);
		cur = cur->pre;
	}
	
}
void DestroyLink(ListPointer &head) {//为了避免内存泄露，每次创建链表运行完程序应将创建的链表销毁，避免内存泄露
	ListPointer cur=head->next;
	while (cur != head && head->next)
	{
		cur = head->next;
		head->next = cur->next;
		cur->next = NULL;
		cur->pre = NULL;
		free(cur);
	}
	head->next = NULL;
	free(head);
}
int main()
{
	ListPointer head;
	head=LinkListCreate();
	LinkListAdd(1, head);
	LinkListAdd(2, head);
	LinkListAdd(3, head);
	LinkListPrint(head);
	DestroyLink(head);
	return 0;
}