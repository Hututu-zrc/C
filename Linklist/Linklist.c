#define _CRT_SECURE_NO_WARNINGS
#include "Linklist.h"

SLNode* SLCreateNode(SLDatetype x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));//扩容一个空间出来
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;//把数据放到新空间里面
	newnode->next = NULL;//把新空间的里面的指针赋为空
	return newnode;
}
void SLprint(SLNode* p)//打印链表
		//这里不需要2级指针，我们只是去访问，并不是去改变
{
	SLNode* cur = p;
	//我们创建了一个SLNode*类型的指针变量cur 去存储我们的地址p
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;//cur循环往后走
	}
	printf("NULL\n");
}
void SLPushBack(SLNode** pp, SLDatetype x)//尾插
{	//传进来的是指针的地址，我们需要使用二级指针去接收
	//为了防止第一个地址为空，我们先创建一个空间
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));//扩容一个空间出来
	newnode->data = x;//把尾插的数据放到新空间里面
	newnode->next = NULL;//把新空间的里面的指针赋为空
	if (*pp == NULL)//如果第一个指针为空，我们不找尾指针，直接把创建空间的地址赋给*pp
	{
		*pp = newnode;//*pp代表的是外面传进来的一级指针的地址，即&plist
		//newnode是结构体的地址，把结构体的地址赋给*pp,即实参指针plist的地址
	}
	else
	{	//此时*pp!=NULL，我们把原来*pp的地址给tail
		SLNode* tail = *pp;//&plist的地址传进来后，开始找我们的尾地址
		//这里是tail结构体的指针，后面要更改是结构体的地址，不需要使用二级指针
		while (tail->next != NULL)
		{
			tail = tail->next;//找到尾地址
		}
		tail->next = newnode;//我们原来的尾指针指向空，像现在改为我们新空间的地址
	}
}
void SLPushFront(SLNode** phead, SLDatetype x)//头插
{
	//这里无关是否指针为NULL，该方法同样适用
	//传输的二级指针，改变头指针plist的指向，把plist指向的地址传递给newnode
	SLNode* newnode=SLCreateNode(x);
	newnode->next = *phead;
	*phead = newnode;//再把我们newnode的指针传递给*phead
}
void SLpopBack(SLNode** pphead)//*pphead就是plist
{
	//温柔一点的方式
	if (*pphead == NULL)//没有一个节点
	{
		return;
	}
	//粗暴一点的方式
	// asserte(*pphead!=NULL）
	//一个节点，
	if ((*pphead)->next == NULL)
	{
		//这里*pphead是plist，
		free(*pphead);//如果为空，释放第一个节点
		*pphead = NULL;//最后，把头指针的赋为NULL；
	}
	else//一个以上的节点
	{
		//我们现在的代码存在问题，当删完第一个节点后，我们的*pphead的指针没有变为NULL
		//上面我们将进行修改
		//方法一：，首先，*pphead就是我们第一个节点，把第一个节点给tail
		// 我们利用新变量back存储tail的下一个
		//我们对back的下一个进行判断，如果为NULL，则停止循环
		//此时，back处于最后一个，tail处于倒数第二个
		//我们将倒数第二个置为NULL，在释放掉最后一个指针空间，达到删除的效果
		SLNode* tail = *pphead;
		SLNode* back = tail->next;
		while (back->next)
		{
			tail = tail->next;
		}
		tail->next = NULL;
		free(back);

		////方法二：我们创建一个变量prev，当tail->next不为空时
		////我们将tail赋给perv，然后让tail变为tail-next
		////当tail到达最后一个的时候，我们释放tail，并将prev也即是倒数第二个的next变为NULL
		//SLNode* tail = *pphead;
		//SLNode* prev = NULL;
		//while (tail->next)
		//{
		//	prev = tail;
		//	tail = tail->next;
		//}
		//prev->next = NULL;//这一句我们删除到最后一个结点的时候，也就是第一个节点，
		// //我们没有前面一个节点给prev，这里prev是NULL，解引用非法访问了
		//free(tail);
	}

}
void SLPopFront(SLNode** pphead)
{
	//assert(*pphead != NULL);
	SLNode* next = (*pphead)->next;
	free(*pphead);
	*pphead = next;
}