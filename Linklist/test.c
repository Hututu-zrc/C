#define _CRT_SECURE_NO_WARNINGS
#include "Linklist.h"
void Testlist1()
{
	SLNode* plist = NULL;//ͷָ�룬����û�д������ݣ�ֻ�е�ַ��
	//���Ǵ������plist�ĵ�ַ���õ�ַ�Ŀռ����滹�����ŵ�ַ��
	// ����&plist���ҵ�plist�ĵ�ַ���ı������ַ��Ӧ�ռ����洢��ĵ�ַ
	SLPushBack(&plist, 1);
	SLPushBack(&plist, 2);
	SLprint(plist);
	SLPushFront(&plist, 6);
	SLPushFront(&plist, 2);
	SLprint(plist);
}
void Testlist2()
{

	SLNode* plist = NULL;
	SLPushFront(&plist, 6);
	SLPushFront(&plist, 2);
	SLprint(plist);
	SLpopBack(&plist);
}
int main()
{
	//Testlist1();
	Testlist2();
	return 0;
}