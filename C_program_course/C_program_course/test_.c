//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<math.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	FILE* fp,*fp1;
//	srand((unsigned int)time(NULL));
//	fp = fopen("F:\\C_program\\c1.txt","r");
//	char line[100];
//	if (fp == NULL)
//	{
//		printf("c1.txt.open err\n");
//		exit(0);
//	}
//	fp1 = fopen("F:\\C_program\\c1_suo.txt", "w");
//	if (fp1 == NULL)
//	{
//		printf("c1_suo.txt.openerr\n");
//		exit(0);
//	}
//	fgets(line, 200, fp);
//	int sz = strlen(line)-1;
//	while (!feof(fp))
//	{
//		line[strlen(line) - 1] = '\0';
//		//printf(line);
//		if(strlen(line)<sz)
//			fprintf(fp1, "%s\t\t%d\t%d\t%d\n", line, rand() % 41 + 60, rand() % 41 + 60, rand() % 41 + 60);//写入另一个文件
//		else
//			fprintf(fp1, "%s\t%d\t%d\t%d\n", line, rand() % 41 + 60, rand() % 41 + 60, rand() % 41 + 60);//写入另一个文件
//		fgets(line, 200, fp);
//	}
//	fclose(fp);
//	fclose(fp1);
//	return 0;
//}