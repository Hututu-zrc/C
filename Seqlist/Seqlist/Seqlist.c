#include"Seqlist.h"
//������ļ�����������ϸ�ı�д����ĺ�������

//�������ǽ�����˳���ĵ�ַ�����޸�˳���
void SeqlistInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqlistDestory(SL* ps)
{
	free(ps->a);
	ps -> a = NULL;
	ps->capacity = ps->size = 0;
}

void SeqlistPushBack(SL* ps, SLdatatype x)//β��һ������
//�������
//1��˳���û�пռ�
//2���ռ䲻��������
//3���ռ��㹻��ֱ�Ӳ���
{	if (ps->size == ps->capacity)//�����ж������Ƿ���ȣ���ȵ�ʱ������ѡ������
	{
		//������ǵ�capacityΪ0��������Ч�����������жϣ�������ʱ����2������
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		//����ֻ�ǽ���ֵ��������˸��ģ��������ǽ��Կռ��������
		//realloc����������ǿռ䣬������ǵĿռ�Ϊ�գ�realloc��mallocһ����Ч����������
		SLdatatype* tmp = (SLdatatype*)realloc(ps->a, newcapacity * sizeof(SLdatatype));
		if (tmp == NULL)//���������ǵĿռ�ʱ�������Ƿ�ɹ�
		{
			printf("realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;//���������ݳɹ���ַ������ַa
		ps->capacity = newcapacity;//�������ǵ�capacity����ֵ
	}
	ps->a[ps->size] = x;
	//����ʹ�õ���˳������Խ�x�ĵ�ַ����һ��size�ĵ�ַ
	//˳���ĵ�ַ�İ���˳�����ģ������ԶϿ�������size++����
	ps->size++;
}
void Seqlistprint(SL* ps)
{
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}


void SeqlistPopBack(SL* ps)//ɾ�����һ������
{
	//����һ��
	if (ps->size > 0)//��������pa->size--;���п��ƣ�����������ɸ�ֵ������Խ�������
	{
		ps->a[ps->size - 1];//ʵ���������飬������Ҫ���±��1
		ps->size--;
	}
	////��������
	//assert(ps->size > 0);//����������ֱ����ֹ���򣬲��һᱨ�����������ֵĵط�
	//ps->size--;
	
}
void SeqlistPushFront(SL* ps, SLdatatype x);
void SeqlistPopFront(SL* ps);