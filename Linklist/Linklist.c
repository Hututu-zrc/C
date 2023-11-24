#define _CRT_SECURE_NO_WARNINGS
#include "Linklist.h"

SLNode* SLCreateNode(SLDatetype x)
{
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));//����һ���ռ����
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;//�����ݷŵ��¿ռ�����
	newnode->next = NULL;//���¿ռ�������ָ�븳Ϊ��
	return newnode;
}
void SLprint(SLNode* p)//��ӡ����
		//���ﲻ��Ҫ2��ָ�룬����ֻ��ȥ���ʣ�������ȥ�ı�
{
	SLNode* cur = p;
	//���Ǵ�����һ��SLNode*���͵�ָ�����cur ȥ�洢���ǵĵ�ַp
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;//curѭ��������
	}
	printf("NULL\n");
}
void SLPushBack(SLNode** pp, SLDatetype x)//β��
{	//����������ָ��ĵ�ַ��������Ҫʹ�ö���ָ��ȥ����
	//Ϊ�˷�ֹ��һ����ַΪ�գ������ȴ���һ���ռ�
	SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));//����һ���ռ����
	newnode->data = x;//��β������ݷŵ��¿ռ�����
	newnode->next = NULL;//���¿ռ�������ָ�븳Ϊ��
	if (*pp == NULL)//�����һ��ָ��Ϊ�գ����ǲ���βָ�룬ֱ�ӰѴ����ռ�ĵ�ַ����*pp
	{
		*pp = newnode;//*pp����������洫������һ��ָ��ĵ�ַ����&plist
		//newnode�ǽṹ��ĵ�ַ���ѽṹ��ĵ�ַ����*pp,��ʵ��ָ��plist�ĵ�ַ
	}
	else
	{	//��ʱ*pp!=NULL�����ǰ�ԭ��*pp�ĵ�ַ��tail
		SLNode* tail = *pp;//&plist�ĵ�ַ�������󣬿�ʼ�����ǵ�β��ַ
		//������tail�ṹ���ָ�룬����Ҫ�����ǽṹ��ĵ�ַ������Ҫʹ�ö���ָ��
		while (tail->next != NULL)
		{
			tail = tail->next;//�ҵ�β��ַ
		}
		tail->next = newnode;//����ԭ����βָ��ָ��գ������ڸ�Ϊ�����¿ռ�ĵ�ַ
	}
}
void SLPushFront(SLNode** phead, SLDatetype x)//ͷ��
{
	//�����޹��Ƿ�ָ��ΪNULL���÷���ͬ������
	//����Ķ���ָ�룬�ı�ͷָ��plist��ָ�򣬰�plistָ��ĵ�ַ���ݸ�newnode
	SLNode* newnode=SLCreateNode(x);
	newnode->next = *phead;
	*phead = newnode;//�ٰ�����newnode��ָ�봫�ݸ�*phead
}
void SLpopBack(SLNode** pphead)//*pphead����plist
{
	//����һ��ķ�ʽ
	if (*pphead == NULL)//û��һ���ڵ�
	{
		return;
	}
	//�ֱ�һ��ķ�ʽ
	// asserte(*pphead!=NULL��
	//һ���ڵ㣬
	if ((*pphead)->next == NULL)
	{
		//����*pphead��plist��
		free(*pphead);//���Ϊ�գ��ͷŵ�һ���ڵ�
		*pphead = NULL;//��󣬰�ͷָ��ĸ�ΪNULL��
	}
	else//һ�����ϵĽڵ�
	{
		//�������ڵĴ���������⣬��ɾ���һ���ڵ�����ǵ�*pphead��ָ��û�б�ΪNULL
		//�������ǽ������޸�
		//����һ�������ȣ�*pphead�������ǵ�һ���ڵ㣬�ѵ�һ���ڵ��tail
		// ���������±���back�洢tail����һ��
		//���Ƕ�back����һ�������жϣ����ΪNULL����ֹͣѭ��
		//��ʱ��back�������һ����tail���ڵ����ڶ���
		//���ǽ������ڶ�����ΪNULL�����ͷŵ����һ��ָ��ռ䣬�ﵽɾ����Ч��
		SLNode* tail = *pphead;
		SLNode* back = tail->next;
		while (back->next)
		{
			tail = tail->next;
		}
		tail->next = NULL;
		free(back);

		////�����������Ǵ���һ������prev����tail->next��Ϊ��ʱ
		////���ǽ�tail����perv��Ȼ����tail��Ϊtail-next
		////��tail�������һ����ʱ�������ͷ�tail������prevҲ���ǵ����ڶ�����next��ΪNULL
		//SLNode* tail = *pphead;
		//SLNode* prev = NULL;
		//while (tail->next)
		//{
		//	prev = tail;
		//	tail = tail->next;
		//}
		//prev->next = NULL;//��һ������ɾ�������һ������ʱ��Ҳ���ǵ�һ���ڵ㣬
		// //����û��ǰ��һ���ڵ��prev������prev��NULL�������÷Ƿ�������
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