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
void SeqlistCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)//�����ж������Ƿ���ȣ���ȵ�ʱ������ѡ������
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
}

void SeqlistPushBack(SL* ps, SLdatatype x)//β��һ������
//�������
//1��˳���û�пռ�
//2���ռ䲻��������
//3���ռ��㹻��ֱ�Ӳ���
{	
	SeqlistCheckCapacity(ps);
	ps->a[ps->size] = x;//������ϣ�ֱ����size�����������
	//���һ��Ԫ��λ����size������ʵ�ʴ���ĵ�ַ��ps->a[ps->size-1]
	// ����β�����������һ��Ԫ�صĺ���β�壬Ҳ����ps->a[ps->size]
	//����ʹ�õ���˳������Խ�x�ĵ�ַ����һ��size�ĵ�ַ
	//˳���ĵ�ַ�İ���˳�����ģ������ԶϿ�������size++����
	ps->size++;//����һ
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
		
		ps->a[ps->size - 1]=0;//ʵ���������飬������Ҫ���±��1
		ps->size--;
	}
	////��������
	//assert(ps->size > 0);//����������ֱ����ֹ���򣬲��һᱨ�����������ֵĵط�
	//ps->size--;
	
}
void SeqlistPushFront(SL* ps, SLdatatype x)//ͷ������һ������
{
	//�������
	SeqlistCheckCapacity(ps);
	//Ų������
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	//��������
	ps->a[0] = x;
	ps->size++;
}
void SeqlistPopFront(SL* ps)//ͷ��ɾ��һ������
{
	if (ps->size > 0)
	{
		//Ų������
		int begin = 1;
		while (begin < ps->size)
		{
			ps->a[begin - 1] = ps->a[begin];
			++begin;
		}
	}
	//����һ�����ݺ󣬳��ȼ�һ
	ps->size--;
}

void SeqlistInsert(SL* ps, int pos, SLdatatype x)
{
	//�������
	SeqlistCheckCapacity(ps);
	int end = ps->size;//end�����һ����Ԫ�صĵ�ַ
	while(end>=pos-1)//�������posλ�ò��룬pos�ĵ�ַΪpos-1
	//end����С������pos-1
	{
		ps->a[end] = ps->a[end-1];
		--end;
	}
	ps->a[pos - 1] = x;
	ps->size++;
}
void SeqlistErase(SL* ps, int pos)
{
	int erase = pos;//������õ�˼·�ǽ�posλ�õ�����ֱ�Ӹ��ǵ�
	while (erase <ps->size )
	{
		ps->a[erase - 1] = ps->a[erase];
		++erase;
	}
	ps->size--;
}