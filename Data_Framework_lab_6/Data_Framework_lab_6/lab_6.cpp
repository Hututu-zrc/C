#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define Max_VexNum_Num 13

typedef struct ArcNode
{
	int adjvex;
	struct ArcNode* nextarc;
}ArcNode;
typedef struct VNode
{
	char data;
	ArcNode* firstarc;
}VNode,AdjList[Max_VexNum_Num];

typedef struct
{
	AdjList HeadNode;
	int vexnum, arcnum;
}ALGraph;

int LocateVex(ALGraph& G, char temp)
{
	for (int i = 0; i < G.vexnum; i++)
	{
		if (temp == G.HeadNode[i].data)
			return i;
	}
	return -1;
}

bool CreateGraph(ALGraph &G)
{
	char tep1,tep2;
	int i, j;
	for (int k = 0; k < G.arcnum; k++)
	{
		scanf("%c %c", &tep1, &tep2);
		getchar();
		i = LocateVex(G, tep1);
		j = LocateVex(G, tep2);
		/*ArcNode temp1;
		temp1.adjvex = i;
		temp1.nextarc = G.HeadNode[i].firstarc;
		G.HeadNode[i].firstarc = &temp1;
		ArcNode temp2;
		temp2.adjvex = j;
		temp2.nextarc = G.HeadNode[j].firstarc;
		G.HeadNode[j].firstarc = &temp2;*/
		ArcNode* p1 = new ArcNode;  //生成一个新的边结点*p1
		p1->adjvex = j;  //邻接点序号为j 
		//头插法将新结点*p1插入顶点vi的边表头部 
		p1->nextarc = G.HeadNode[i].firstarc;
		G.HeadNode[i].firstarc = p1;
		ArcNode* p2 = new ArcNode;
		p2->adjvex = i;  //邻接点序号为i
		//头插法插入p2 ,因为是无向网，所以是两条 
		p2->nextarc = G.HeadNode[j].firstarc;
		G.HeadNode[j].firstarc = p2;
	}
	return true;
}

int main()
{
	char arr[Max_VexNum_Num + 1] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','\0'};
	ALGraph G;
	ArcNode* p;
	for (int i = 0; i < Max_VexNum_Num; i++)
	{
		G.HeadNode[i].data = arr[i];
		G.HeadNode[i].firstarc = NULL;
	}
	G.vexnum = Max_VexNum_Num;
	G.arcnum = 17;
	CreateGraph(G);
	printf("输出邻接表：");
	for (int i = 0; i < G.vexnum; i++)
	{
		printf("%c", G.HeadNode[i].data);
		for (p = G.HeadNode[i].firstarc; p != NULL; p = p->nextarc)
			printf("->%d", p->adjvex);
		printf("\n");
	}
	
	return 0;

}