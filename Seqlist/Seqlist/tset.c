#include"Seqlist.h"
void TestSeqlist1()
{
	SL s1;//创建顺序表
	SeqlistInit(&s1);
	SeqlistPushBack(&s1, 1);
	SeqlistPushBack(&s1, 2);
	SeqlistPushBack(&s1, 3);
	SeqlistPushBack(&s1, 4);
	SeqlistPushBack(&s1, 5);
	Seqlistprint(&s1);
	SeqlistPopBack(&s1);
	SeqlistPopBack(&s1);


	
	Seqlistprint(&s1);
	SeqlistDestory(&s1);
}

//这里test文件，我们用来写main函数以及我们创建的函数使用
int main()
{
	TestSeqlist1();
	
	return 0;
}
