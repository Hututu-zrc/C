#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//
typedef struct LNode {
	int stnumber;
	int score;
	struct LNode* next;

} LNode, * LinkList;

void CreateList(LinkList phead, int n) {
	LinkList p = phead;
	while (p->next) {
		p = p->next;
	}
	for (int i = 0; i < n; i++) {
		LinkList s = (LinkList)malloc(sizeof(LNode));
		p->next = s;
		scanf("%d %d", &s->stnumber, &s->score);
		s->next = NULL;
		p = p->next;
	}
}
void InitList(LNode** L) 
{
	*L = (LinkList)malloc(sizeof(LNode));
	(*L)->next = NULL;
}
void MergeList_L(LinkList La, LinkList Lb, LinkList* Lc) {
	LinkList pa = La->next;
	LinkList pb = Lb->next;
	LinkList pc;
	*Lc = pc = La;
	//下面是将La赋给Lc，然后循环比较，把小的赋给Lc->next。注意：这里也将小的后面的链表一起赋给Lc->next
	while (pa && pb) {
		if (pa->stnumber <= pb->stnumber) {
			pc->next = pa;
			pc = pa;
			pa = pa->next;

		}
		else {
			pc->next = pb;
			pc = pb;
			pb = pb->next;
		}
	}
	pc->next = pa ? pa : pb;
	free(Lb);
}

void print(LinkList Lc) {
	LinkList p = Lc->next;
	while (p != NULL) {
		printf("%d %d\n", p->stnumber, p->score);
		p = p->next;
	}
}

void DestroyList(LinkList L) {
	LinkList pp = L;
	while (pp) {
		L = L->next;
		free(pp);
		pp = L;
	}
}



int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	LinkList La=NULL, Lb=NULL, Lc=NULL;
	InitList(&La);
	InitList(&Lb);
	CreateList(La, n);
	CreateList(Lb, m);
	MergeList_L(La, Lb, &Lc);
	print(Lc);
	DestroyList(Lc);
	return 0;
}