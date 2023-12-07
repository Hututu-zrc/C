#include "head.h"
void menu()
{
	printf("\n******** 1.Add     2.Del    ********\n");
	printf("******** 3.Search    4.Modify ********\n");
	printf("******** 5.Sort      6.Show   ********\n");
	printf("******** 7.exit               ********\n");
}

void InitContact(Ct& con)//��̬����
{
	assert(&con);
	con.count = 0;
	con.data = (PI*)calloc(MAX,sizeof(PI));
	if (con.data == NULL)
	{
		printf("InitContact:%s\n", strerror(errno));
		exit(0);
	}
	con.capacity = MAX;
	LoadContact(con);
}
void LoadContact(Ct& con)
{
	assert(&con);
	FILE* pfread = fopen("D:\\����\\Correspondence.txt", "rb");
	if ( pfread == NULL)
	{
		perror("LoadContact");
		exit(0);
	}
	PI tmp = { 0 };
	while (fread(&tmp, sizeof(PI), 1, pfread) == 1)
	{
		if (con.count == con.capacity)
			ExtendCapacity(con);
		con.data[con.count] = tmp;
		con.count++;
	}
	
	
	fclose(pfread);
	pfread = NULL;
}
void Add(Ct &con)
{
	assert(&con);
	if (con.count == MAX)
	{
		printf("ͨѶ¼������������!!!\n");
		con.data=ExtendCapacity(con);
		printf("���Ժ�");
		for (int i = 0; i < 10; i++)
		{
			printf("*");
			Sleep(0.01);
		}
		printf("\n���ݳɹ�!!!\n");
	}
	printf("��������Ҫ����˵�������");
	scanf("%s", con.data[con.count].name);
	printf("��������Ҫ����˵����䣺");
	scanf("%d", &con.data[con.count].age);
	printf("��������Ҫ����˵��Ա�");
	scanf("%s", con.data[con.count].sex);
	printf("��������Ҫ����˵ĵ绰��");
	scanf("%s", con.data[con.count].tele);
	printf("��������Ҫ����˵ĵ�ַ��");
	scanf("%s", con.data[con.count].adress);
	con.count++;
	printf("��ӳɹ�\n");
}

void Show(Ct& con)
{
	assert(&con);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����","����","�Ա�","�绰", "��ַ");
	for (int i = 0; i <con.count; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", con.data[i].name, 
			con.data[i].age,
			con.data[i].sex, 
			con.data[i].tele,
			con.data[i].adress);
	}
}
static int Findbyname(Ct con, char* temp)
{
	for (int i = 0; i < con.count; i++)
	{
		if (!strcmp(con.data[i].name, temp))
		{
			return i;
		}
	}
	return -1;
}
void Del(Ct& con)
{
	assert(&con);
	printf("����������Ҫɾ���˵�������");
	char temp[100];
	scanf("%s", temp);
	int ret = Findbyname(con, temp);
	if (ret == -1)
		printf("���޴��ˣ�����\n");
	else
	{
		for (int j = ret; j < con.count-1; j++)
		{
			con.data[j] = con.data[j + 1];
		}
		con.count--;
		printf("ɾ���ɹ�\n");
	}	
}

void Search(Ct& con)
{
	assert(&con);
	printf("����������Ҫ���ҵ��ˣ�");
	char temp[100];
	scanf("%s", temp);
	int ret = Findbyname(con, temp);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	if (ret == -1)
		printf("���޴��ˣ�����\n");
	else
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", con.data[ret].name, 
			con.data[ret].age,
			con.data[ret].sex, 
			con.data[ret].tele,
			con.data[ret].adress);
	}

}
void Modify(Ct& con)
{
	assert(&con);
	printf("����������Ҫ�޸ĵ��˵����֣�");
	char temp[100];
	scanf("%s", temp);
	int ret = Findbyname(con, temp);
	PI* tmp=(PI*)malloc(sizeof(PI));
	printf("�������޸ĺ��������");
	scanf("%s",tmp->name);
	strcpy(con.data[ret].name, tmp->name);
	printf("�������޸ĺ�����䣺");
	scanf("%d", &tmp->age);
	con.data[ret].age = tmp->age;
	printf("�������޸ĺ���Ա�");
	scanf("%s", tmp->sex);
	strcpy(con.data[ret].sex, tmp->sex);
	printf("�������޸ĺ�ĵ绰��");
	scanf("%s", tmp->tele);
	strcpy(con.data[ret].tele, tmp->tele);
	printf("�������޸ĺ�ĵ�ַ��");
	scanf("%s",tmp->adress);
	strcpy(con.data[ret].adress, tmp->adress);
	printf("�޸����\n");

}
static int compare(const void *a,const void *b)
{
	return strcmp(((PI*)a)->name,((PI*)b)->name);
}
void Sort(Ct& con) //������������
{
	assert(&con);
	qsort(con.data, con.count, sizeof(PI), compare);
	printf("����ɹ�\n");
}

void ConserveCon( Ct& con)
{
	assert(&con);
	//���ļ�
	FILE* pf = fopen("D:\\����\\Correspondence.txt", "wb");
	if (pf == NULL)
	{
		perror("ConserveCon");
		return;
	}
	//д���ļ�--�������ļ�
	for (int i = 0; i < con.count; i++)
	{
		fwrite(con.data + i, sizeof(PI), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

PI* ExtendCapacity(Ct& con)
{
	assert(&con);
	PI* temp;
	temp = (PI*)realloc(con.data, sizeof(PI) * (con.capacity + Extend));
	if (temp == NULL)
	{
		printf("����ʧ��!!!\n");
		exit(0);
	}
	con.capacity += Extend;
	return temp;
}