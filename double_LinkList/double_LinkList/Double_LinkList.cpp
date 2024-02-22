#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
typedef struct LinkList
{
	int val;
	struct LinkList* pre;
	struct LinkList* next;
}ListNode, * ListPointer;

ListPointer LinkListCreate()
{
	ListPointer head = (ListPointer)malloc(sizeof(ListNode));
	assert(head);
	head->pre = NULL;
	head->next = NULL;
	head->val = 0;
	return head;
}
void LinkListAdd(int val,ListPointer& head)
{
	ListPointer NewNode = (ListPointer)malloc(sizeof(ListNode));
	assert(NewNode);
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
	ListPointer cur = head->next;
	while (cur->next)
	{
		printf("%d ", cur->val);
		cur = cur->next;
	}	
	printf("%d\n", cur->val);
	while (cur->pre)
	{
		printf("%d ", cur->val);
		cur = cur->pre;
	}
	
}
bool Listempty(ListPointer &head)
{
	if (head->next == NULL)
		return true;
	else
		return false;
}
void List_pushback(ListPointer& head,int val)
{
	ListPointer temp = head;
	while (temp->next != NULL)
		temp = temp->next;
	ListPointer newnode = (ListPointer)malloc(sizeof(ListNode));
	assert(newnode);
	temp->next = newnode;
	newnode->pre = temp;
	newnode->next = NULL;
	newnode->val = val;
}

void List_popback(ListPointer& head)
{
	ListPointer temp = head;
	while (temp->next->next != NULL)
		temp = temp->next;
	ListPointer tmp = temp->next;
	tmp->pre = NULL;
	temp->next = NULL;
	free(tmp);
}
void List_pushfront(ListPointer& head, int val)
{
	ListPointer newnode = (ListPointer)malloc(sizeof(ListNode));
	assert(newnode);
	newnode->next = head->next;
	newnode->pre = head;
	head->next = newnode;
	newnode->next->pre = newnode;
	newnode->val = val;
}

void List_popfront(ListPointer&head)
{
	ListPointer temp = head->next;
	head->next = head->next->next;
	head->next->pre = head;
	free(temp);
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
void List_Insert(ListPointer& head, int pos,int val)
{
	ListPointer temp = head;
	while (temp != NULL && pos--)
	{
		temp = temp->next;
	}
	if (pos != -1)
	{
		printf("插入位置非法，请重新操作！！！");
		return;
	}
	
	ListPointer newnode = (ListPointer)malloc(sizeof(ListNode));
	assert(newnode);
	newnode->next = temp->next;
	newnode->next->pre = newnode;
	newnode->pre = temp;
	temp->next = newnode;
	newnode->val = val;
}

void List_erase(ListPointer& head, int pos)
{
	ListPointer temp = head;
	while (temp != NULL && pos--)
	{
		temp = temp->next;
	}
	ListPointer tmp = temp->next;
	temp->next = temp->next->next;
	temp->next->pre = temp;
	free(tmp);
	tmp->next = NULL;
	tmp->pre = NULL;
}
int List_find_pos(ListPointer& head, int val)
{
	ListPointer temp = head->next;
	int pos = 0;
	while (  temp!=NULL&& temp->val != val)
	{
		temp = temp->next; 
		pos++;
	}
	if (temp != NULL)
		return pos;
	else
		return -1;
}
int main()
{
	ListPointer head;
	head=LinkListCreate();
	LinkListAdd(1, head);
	List_pushback(head, 3);
	List_popback(head);
	List_pushfront(head, 2);
	List_popfront(head);
	List_Insert(head, 0, 5);
	List_Insert(head, 1, 4);
	List_Insert(head, 2, 3);
	List_erase(head, 0);
	LinkListPrint(head);
	bool ret = Listempty(head);
	printf("\n");
	if (ret == true)
		printf("链表为空！！！\n");
	else
		printf("链表不为空！！！\n");
	int ans = List_find_pos(head, 6);
	if (ans != -1)
		printf(" 3的位置是 ： %d\n", ans);
	else
		printf("查不到！！！\n");
	DestroyLink(head);
	return 0;
}