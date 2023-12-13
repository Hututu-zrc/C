#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#define Max_VexNum_Num 13

int sign[Max_VexNum_Num] = { 0 };
char alpha[Max_VexNum_Num + 1] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','\0' };

typedef struct ArcNode
{
	int adjvex;
	struct ArcNode* nextarc;
}ArcNode;
typedef struct VNode
{
	char data;
	ArcNode* firstarc;
}VNode, AdjList[Max_VexNum_Num];

typedef struct
{
	AdjList HeadNode;
	int vexnum, arcnum;
}ALGraph;

void DFS(ALGraph& G, int v);

void DFSTraverse(ALGraph& G);

int LocateVex(ALGraph& G, char temp)
{
	for (int i = 0; i < G.vexnum; i++)
	{
		if (temp == G.HeadNode[i].data)
			return i;
	}
	return -1;
}

ArcNode* Search_Back(ArcNode* p)
{
	if (p == NULL)
		return p;
	while (p->nextarc != NULL)
		p = p->nextarc;
	return p;

}
bool CreateGraph(ALGraph& G)
{
	char tep1, tep2;
	int i, j;
	for (int k = 0; k < G.arcnum; k++)
	{
		scanf("%c%c", &tep1, &tep2);
		getchar();
		i = LocateVex(G, tep1);
		j = LocateVex(G, tep2);


		//����������ʹ�õ�β�巨
		ArcNode* p1 = new ArcNode;  //����һ���µı߽��*p1
		p1->adjvex = j;  //�ڽӵ����Ϊj 
		p1->nextarc = NULL;
		//���Ǵ���һ���µĽ�㣬���������ǵ��ڽӵ㣬Ȼ��ӵ����ǵ�i���ĺ���
		if (G.HeadNode[i].firstarc == NULL)
			G.HeadNode[i].firstarc = p1;
		else
		{
			ArcNode* temp = Search_Back(G.HeadNode[i].firstarc);
			temp->nextarc = p1;
		}

		ArcNode* p2 = new ArcNode;
		p2->adjvex = i;  //�ڽӵ����Ϊi
		p2->nextarc = NULL;
		if (G.HeadNode[j].firstarc == NULL)
			G.HeadNode[j].firstarc = p2;
		else
		{
			ArcNode* temp = Search_Back(G.HeadNode[j].firstarc);
			temp->nextarc = p2;
		}

	}
	return true;
}

void DFSTraverse(ALGraph& G)
{
	for (int i = 0; i < G.vexnum; i++)
	{
		if (sign[i] != 1)
			DFS(G, i);
	}
}

void DFS(ALGraph& G, int v)
{
	sign[v] = 1;
	printf("%c", alpha[v]);
	ArcNode* p ;
	for (p =G.HeadNode[v].firstarc; p != NULL; p = p->nextarc)
	{
		if (sign[p->adjvex] != 1)
			DFS(G, p->adjvex);
	}
}

int main()
{
	char arr[Max_VexNum_Num + 1] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','\0' };
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
	printf("����ڽӱ�");
	for (int i = 0; i < G.vexnum; i++)
	{
		printf("%c", G.HeadNode[i].data);
		for (p = G.HeadNode[i].firstarc; p != NULL; p = p->nextarc)
			printf("->%d", p->adjvex);
		printf("\n");
	}
	//DFS�����������
	printf("DFS:");
	DFSTraverse(G);
	printf("\n��ͼ�Ľ������ǣ�%d\n", G.vexnum);
	printf("��ͼ�ıߵĸ����ǣ�%d\n", G.arcnum);
	return 0;
}

////����
//AL
//AF
//AC
//AB
//BM
//BH
//BG
//BD
//BC
//DE
//GK
//GI
//GH
//HK
//JM
//JL
//LM