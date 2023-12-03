#include "head.h"
void menu()
{
	printf("\n******** 1.Add       2.Del    ********\n");
	printf("******** 3.Search    4.Modify ********\n");
	printf("******** 5.Sort      6.Show   ********\n");
	printf("******** 7.exit               ********\n");
}

void InitContact(Ct& con)
{
	assert(&con);
	con.count = 0;
	memset(con.data, 0, sizeof(con.data));
}

void Add(Ct &con)
{
	assert(&con);
	if (con.count == MAX)
	{
		printf("通讯录已满，无法添加！！！\n");
		return;
	}
	printf("请输入你要添加人的姓名：");
	scanf("%s", con.data[con.count].name);
	printf("请输入你要添加人的年龄：");
	scanf("%d", &con.data[con.count].age);
	printf("请输入你要添加人的性别：");
	scanf("%s", con.data[con.count].sex);
	printf("请输入你要添加人的电话：");
	scanf("%s", con.data[con.count].tele);
	printf("请输入你要添加人的地址：");
	scanf("%s", con.data[con.count].adress);
	con.count++;
	printf("添加成功\n");
}

void Show(Ct& con)
{
	assert(&con);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字","年龄","性别","电话", "地址");
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
	printf("请输入你想要删除人的姓名：");
	char temp[100];
	scanf("%s", temp);
	int ret = Findbyname(con, temp);
	if (ret == -1)
		printf("查无此人！！！\n");
	else
	{
		for (int j = ret; j < con.count-1; j++)
		{
			con.data[j] = con.data[j + 1];
		}
		con.count--;
		printf("删除成功\n");
	}	
}

void Search(Ct& con)
{
	assert(&con);
	printf("请输入您想要查找的人：");
	char temp[100];
	scanf("%s", temp);
	int ret = Findbyname(con, temp);
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	if (ret == -1)
		printf("查无此人！！！\n");
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
	printf("请输入你想要修改的人的名字：");
	char temp[100];
	scanf("%s", temp);
	int ret = Findbyname(con, temp);
	PI* tmp=(PI*)malloc(sizeof(PI));
	printf("请输入修改后的姓名：");
	scanf("%s",tmp->name);
	strcpy(con.data[ret].name, tmp->name);
	printf("请输入修改后的年龄：");
	scanf("%d", &tmp->age);
	con.data[ret].age = tmp->age;
	printf("请输入修改后的性别：");
	scanf("%s", tmp->sex);
	strcpy(con.data[ret].sex, tmp->sex);
	printf("请输入修改后的电话：");
	scanf("%s", tmp->tele);
	strcpy(con.data[ret].tele, tmp->tele);
	printf("请输入修改后的地址：");
	scanf("%s",tmp->adress);
	strcpy(con.data[ret].adress, tmp->adress);
	printf("修改完成\n");

}
static int compare(const void *a,const void *b)
{
	return strcmp(((PI*)a)->name,((PI*)b)->name);
}
void Sort(Ct& con) //按照名字排序
{
	assert(&con);
	qsort(con.data, con.count, sizeof(PI), compare);
	printf("排序成功\n");
}

void ConserveCon(Ct& con)
{

}
