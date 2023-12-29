//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#define Max_VexNum_Num 14
//
//
//
//int sign[Max_VexNum_Num] = { 0 };
//char alpha[Max_VexNum_Num + 1] = { 'A','B','C','D','E','F','G','H','I','J','K','L','O','V','\0' };
//int indegree[14] = { 1, 1,2,1,2,2,2,2, 1,1,1,3,0,2};
//
//
//
//
//typedef struct ArcNode
//{
//	int adjvex;
//	struct ArcNode* nextarc;
//}ArcNode;
//typedef struct VNode
//{
//	char data;
//	ArcNode* firstarc;
//}VNode, AdjList[Max_VexNum_Num];
//
//typedef struct
//{
//	AdjList HeadNode;
//	int vexnum, arcnum;
//}ALGraph;
//
////ջ��ʵ��
//#define OK 1
//#define ERROR 0
//#define TRUE 1
//#define FALSE 0
//#define MAXSIZE 20
//typedef int ElemType;
//typedef int State;
//typedef struct {   //˳��ջ�Ĵ洢�ṹ
//	ElemType data[MAXSIZE];   //�����������ݣ����ΪMAXSIZE����Ϊջ������
//	int top;   //����ջ��ָ��
//}SqStack;
//
////��ʼ��˳��ջ
//State initStack(SqStack* S)
//{
//	S->top = -1;   //��ջ��ָ����Ϊ-1������ջ��Ϊ���ǿյ�ʱ��
//	return OK;
//}
//
////���˳��ջ�ĳ���
//int getLength(SqStack S) {
//	return (S.top) + 1;   //���������±�Ĺ��������еĳ���Ϊָ��+1��Ԫ��
//}
//
////���˳��ջ
//State clearStack(SqStack* S) {
//	S->top = -1;   //��ջ��ָ����������Ϊ-1������ʱ��ʾջ��
//	return OK;
//}
//
////�ж�˳��ջ�Ƿ�Ϊ��
//State isEmpty(SqStack S) {
//	if (S.top == -1) {   //�����ʱջ��ָ��Ϊ-1��ʾջ��ʱΪ�գ���-1���ʾ�ǿ�
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//
////��ջ
//State push(SqStack* S, ElemType* e) {
//	if (S->top == MAXSIZE - 1) {   //���������±���ص㣬��ָ��ָ�����һ��Ԫ��ʱΪMAXSIZE-1����ʱջ��
//		printf("ջ�����޷���ջ\n");
//		return ERROR;   //ջ��˵���ռ������Ѿ�����������ջ
//	}
//	else {    //���ջ������ִ����ӹ���
//		S->top++;   //ջ��ָ��+1ָ��һ���µĶ����ռ�
//		S->data[S->top] = *e;   //������ָ�������µĿյ�ջ���ռ�Ԫ����Ϊָ��Ԫ�أ�����ȳ���
//		return OK;
//	}
//}
//
////��ջ
//State pop(SqStack* S, ElemType* e) {
//	if (S->top == -1) {   //��ջ��ָ��ָ��-1��˵��ջ�գ����޷���ջ
//		printf("ջ�գ��޷���ջ\n");
//		return ERROR;
//	}
//	else {   //���ջ�ǿ���ִ�г�ջ����
//		*e = S->data[S->top];   //����ǰջ��Ԫ�ص�ָ�븳���ɹ����ز鿴��e
//		S->top--;   //ջ��Ԫ�س�ջ��ջ��ָ��������һ�񣬱�ʾ�µ�ջ��Ԫ��
//		return OK;
//	}
//}
//
////��ȡջ��Ԫ�أ�ֻ���鿴������ջ��
//State getTop(SqStack S, ElemType* e) {
//	if (S.top == -1) {   //��ջ��ָ��ָ��-1��˵��ջ�գ�ջ��Ԫ��Ϊ��
//		printf("ջ�գ���ջ��Ԫ��\n");
//		return ERROR;
//	}
//	else {   //��ջ�ǿյ�ʱ����ջ��Ԫ�ظ�ֵ���ɹ����ز鿴��e������ջ��Ԫ�ز�����ջ
//		*e = S.data[S.top];   //��ջ��Ԫ�ظ�ֵ��e��ջ��ָ��top����
//		return OK;
//	}
//}
//
////������ӡ˳��ջ
//State printStack(SqStack S) {
//	if (S.top == -1) {   //��ջ��ָ��ָ��-1��˵��ջ�գ���ջԪ�ؿɹ���ӡ
//		printf("ջ��\n");
//		return ERROR;
//	}
//	int i = 0;   //����������¼��ǰ�ǵڼ���Ԫ��
//	while (S.top != -1) {
//		i++;   //ջ��ָ�뻹δ��-1����˵����ǰջ��ָ����Ԫ�أ�������+1
//		printf("ջ�����µ�%d��Ԫ��Ϊ��%d\n", i, S.data[S.top]);  //��ǰջ��ָ���Ԫ�ش�ӡ��
//		S.top--;   //ջ��ָ��������һ�񣬼�������ѭ����ӡ
//	}
//	return OK;
//}
//
//
//
//
//
////�������ڽӱ��ʵ��
//int LocateVex(ALGraph& G, char temp)
//{
//	for (int i = 0; i < G.vexnum; i++)
//	{
//		if (temp == G.HeadNode[i].data)
//			return i;
//	}
//	return -1;
//}
//
//ArcNode* Search_Back(ArcNode* p)
//{
//	if (p == NULL)
//		return p;
//	while (p->nextarc != NULL)
//		p = p->nextarc;
//	return p;
//
//}
//bool CreateGraph(ALGraph& G)
//{
//	char tep1, tep2;
//	int i, j;
//	for (int k = 0; k < G.arcnum; k++)
//	{
//		scanf("%c%c", &tep1, &tep2);
//		getchar();
//		i = LocateVex(G, tep1);
//		j = LocateVex(G, tep2);
//
//
//		//����������ʹ�õ�β�巨
//		ArcNode* p1 = new ArcNode;  //����һ���µı߽��*p1
//		p1->adjvex = j;  //�ڽӵ����Ϊj 
//		p1->nextarc = NULL;
//		//���Ǵ���һ���µĽ�㣬���������ǵ��ڽӵ㣬Ȼ��ӵ����ǵ�i���ĺ���
//		if (G.HeadNode[i].firstarc == NULL)
//			G.HeadNode[i].firstarc = p1;
//		else
//		{
//			ArcNode* temp = Search_Back(G.HeadNode[i].firstarc);
//			temp->nextarc = p1;
//		}
//
//		//ArcNode* p2 = new ArcNode;
//		//p2->adjvex = i;  //�ڽӵ����Ϊi
//		//p2->nextarc = NULL;
//		//if (G.HeadNode[j].firstarc == NULL)
//		//	G.HeadNode[j].firstarc = p2;
//		//else
//		//{
//		//	ArcNode* temp = Search_Back(G.HeadNode[j].firstarc);
//		//	temp->nextarc = p2;
//		//}
//
//	}
//	return true;
//}
//
//
//void DFS(ALGraph& G, int v)
//{
//	sign[v] = 1;
//	printf("%c", alpha[v]);
//	ArcNode* p;
//	for (p = G.HeadNode[v].firstarc; p != NULL; p = p->nextarc)
//	{
//		if (sign[p->adjvex] != 1)
//			DFS(G, p->adjvex);
//	}
//}
//
//void DFSTraverse(ALGraph& G)
//{
//	for (int i = 0; i < G.vexnum; i++)
//	{
//		if (sign[i] != 1)
//			DFS(G, i);
//	}
//}
//
//
//int TopLogicalSort(ALGraph G)
//{
//	//FindInDegree(G, indegree);
//	SqStack S;
//	initStack(&S);
//	int i = 0;
//	for (; i < G.vexnum; i++)
//		if (!indegree[i]) push(&S, &i);
//	int count = 0;
//	while (!isEmpty(S))
//	{
//		pop(&S, &i);
//		printf("%c ", G.HeadNode[i].data);
//		++count;
//		ArcNode* p;
//		for (p = G.HeadNode[i].firstarc; p; p = p->nextarc)
//		{
//			int k = p->adjvex;
//			if (!(--indegree[k]))
//				push(&S, &k);
//		}
//	}
//	if (count < G.vexnum)
//		return ERROR;
//	else
//		return OK;
//
//}
//
//int main()
//{
//	char arr[Max_VexNum_Num + 1] = {'A','B','C','D','E','F','G','H','I','J','K','L','O','V','\0' };
//	ALGraph G;
//	ArcNode* p;
//	for (int i = 0; i < Max_VexNum_Num; i++)
//	{
//		G.HeadNode[i].data = arr[i];
//		G.HeadNode[i].firstarc = NULL;
//	}
//	G.vexnum = Max_VexNum_Num;
//	G.arcnum = 21;
//	CreateGraph(G);
//	printf("����ڽӱ�");
//	for (int i = 0; i < G.vexnum; i++)
//	{
//		printf("%c", G.HeadNode[i].data);
//		for (p = G.HeadNode[i].firstarc; p != NULL; p = p->nextarc)
//			printf("->%d", p->adjvex);
//		printf("\n");
//	}
//	//DFS�����������
//	printf("DFS:");
//	DFSTraverse(G);
//	printf("\n�ҵĸ��������ǣ�");
//	int k = 0;
//	while (arr[k])
//	{
//		printf("%c ", arr[k]);
//		k++;
//	}
//	printf("\n��ͼ�Ľ������ǣ�%d\n", G.vexnum);
//	printf("��ͼ�ıߵĸ����ǣ�%d\n", G.arcnum);
//	printf("��������������ǣ�");
//	TopLogicalSort(G);
//	printf("\n");
//	return 0;
//}
//
//////����
////AL
////AF
////AC
////AB
////BM
////BH
////BG
////BD
////BC
////DE
////GK
////GI
////GH
////HK
////JM
////JL
////LM
//
//
//
////AB
////AC
////AD
////AL
////BC
////CE
////CG
////CH
////DE
////EG
////FH
////GV
////HV
////IJ
////IK
////IL
////JL
////KF
////LF
////OA
////OI