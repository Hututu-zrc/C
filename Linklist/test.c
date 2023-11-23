#define _CRT_SECURE_NO_WARNINGS
#include "Linklist.h"
void Testlist1()
{
	SLNode* plist = NULL;//头指针，里面没有储存数据，只有地址；
	//我们传输的是plist的地址，该地址的空间里面还储存着地址，
	// 我们&plist，找到plist的地址，改变这个地址对应空间里面储存的地址
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