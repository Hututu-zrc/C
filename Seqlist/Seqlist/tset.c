#include"Seqlist.h"
void TestSeqlist1()
{
	SL s1;//����˳���
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

//����test�ļ�����������дmain�����Լ����Ǵ����ĺ���ʹ��
int main()
{
	TestSeqlist1();
	
	return 0;
}
