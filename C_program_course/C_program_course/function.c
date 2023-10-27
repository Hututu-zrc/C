#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void maxx()
{
	FILE* fp;
	char line[100],max_stu[200];
	char str_xh[20], stu_xm[20];
	int m_sco, e_sco, l_sco, max_sco = 0;;
	//srand((unsigned int)time(NULL));
	fp = fopen("F:\\C_program\\c1_suo.txt","r");
	
	if (fp == NULL)
	{
		printf("c1_suo.txt.open err\n");
		exit(0);
	}
	
	fgets(line, 200, fp);
	while (!feof(fp))
	{
		sscanf(line, "%s\t%s\t%d\t%d\t%d",str_xh, stu_xm,&m_sco, &e_sco, &l_sco);
		if (max_sco < (m_sco + e_sco + l_sco))
		{
			max_sco = m_sco + e_sco + l_sco;
			strcpy(max_stu, line);
		}
		
		fgets(line, 200, fp);
	}
	printf("最高分的同学是:\n%s\n", max_stu);
	fclose(fp);

}
void Enquiry()
{
	FILE* fp;
	char line[100];
	char str_xh[20], stu_xm[20],inquire[10];
	int m_sco, e_sco, l_sco,signal=0;
	fp = fopen("F:\\C_program\\c1_suo.txt", "r");
	if (fp == NULL)
	{
		printf("c1_suo.txt.open err\n");
		exit(0);
	}
	printf("请输入你要查询的同学：");
	scanf("%s", inquire);
	fgets(line, 200, fp);
	while (!feof(fp))
	{
		sscanf(line, "%s\t%s\t%d\t%d\t%d", str_xh, stu_xm, &m_sco, &e_sco, &l_sco);
		if (strcmp(stu_xm, inquire) == 0)
		{
			printf("%s\t%s\t%d\t%d\t%d", str_xh, stu_xm, m_sco, e_sco, l_sco);
			signal = 1; break;
		}
			
		fgets(line, 200, fp);
	}
	if(signal==0)
		printf("找不到该学生！\n");
	fclose(fp);
}
void Add()
{
	FILE* fp;
	char str_xh[20], stu_xm[20];
	int m_sco, e_sco, l_sco;
	fp = fopen("F:\\C_program\\c1_suo.txt", "a");
	if (fp == NULL)
	{
		printf("c1_suo.txt.open err\n");
		exit(0);
	}
	printf("请输入你要添加的信息：");
	scanf("%s %s %d%d%d", str_xh, stu_xm, &m_sco, &e_sco, &l_sco);
	fprintf(fp, "%s\t%s\t%d\t%d\t%d\n", str_xh, stu_xm, m_sco, e_sco, l_sco);
	fclose(fp);
}
void Delete()
{
	FILE* fp,*fp1;
	char temp[100], line[200];
	char str_xh[20], stu_xm[20];
	int m_sco, e_sco, l_sco;
	fp = fopen("F:\\C_program\\c1_suo.txt", "r");
	if (fp == NULL)
	{
		printf("c1_suo.txt open err\n");
		exit(0);
	}
	fp1 = fopen("F:\\C_program\\c1_sco.txt", "w");
	if (fp1 == NULL)
	{
		printf("c1_sco.txt open err\n");
		exit(0);
	}
	printf("请输入你要删除的同学名字：");
	scanf("%s", temp);
	fgets(line, 200, fp);

	while (!feof(fp))
	{
		sscanf(line, "%s\t%s\t%d\t%d\t%d", str_xh, stu_xm, &m_sco, &e_sco, &l_sco);
		if (strcmp(stu_xm, temp) != 0)
		{
			fprintf(fp1,line);
		}
		fgets(line, 200, fp);
	}
	fclose(fp);
	fclose(fp1);
	system("del F:\\C_program\\c1_suo.txt");
	system("copy F:\\C_program\\c1_sco.txt F:\\C_program\\c1_suo.txt");

}
