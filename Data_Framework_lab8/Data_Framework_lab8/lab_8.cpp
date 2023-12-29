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
////栈的实现
//#define OK 1
//#define ERROR 0
//#define TRUE 1
//#define FALSE 0
//#define MAXSIZE 20
//typedef int ElemType;
//typedef int State;
//typedef struct {   //顺序栈的存储结构
//	ElemType data[MAXSIZE];   //用数组存放数据，最大为MAXSIZE，作为栈满条件
//	int top;   //用作栈顶指针
//}SqStack;
//
////初始化顺序栈
//State initStack(SqStack* S)
//{
//	S->top = -1;   //将栈顶指针置为-1，即将栈作为还是空的时候
//	return OK;
//}
//
////获得顺序栈的长度
//int getLength(SqStack S) {
//	return (S.top) + 1;   //根据数组下标的规则，数组中的长度为指针+1个元素
//}
//
////清空顺序栈
//State clearStack(SqStack* S) {
//	S->top = -1;   //将栈顶指针重新设置为-1，即此时表示栈空
//	return OK;
//}
//
////判断顺序栈是否为空
//State isEmpty(SqStack S) {
//	if (S.top == -1) {   //如果此时栈顶指针为-1表示栈此时为空，非-1则表示非空
//		return TRUE;
//	}
//	else {
//		return FALSE;
//	}
//}
//
////入栈
//State push(SqStack* S, ElemType* e) {
//	if (S->top == MAXSIZE - 1) {   //根据数组下标的特点，当指针指向最后一个元素时为MAXSIZE-1，此时栈满
//		printf("栈满，无法入栈\n");
//		return ERROR;   //栈满说明空间已满已经不可以再入栈
//	}
//	else {    //如果栈非满则执行添加过程
//		S->top++;   //栈顶指针+1指向一个新的顶部空间
//		S->data[S->top] = *e;   //将现在指向的这个新的空的栈顶空间元素置为指定元素（后进先出）
//		return OK;
//	}
//}
//
////出栈
//State pop(SqStack* S, ElemType* e) {
//	if (S->top == -1) {   //当栈顶指针指向-1，说明栈空，则无法出栈
//		printf("栈空，无法出栈\n");
//		return ERROR;
//	}
//	else {   //如果栈非空则执行出栈程序
//		*e = S->data[S->top];   //将当前栈顶元素的指针赋给可供返回查看的e
//		S->top--;   //栈顶元素出栈后，栈顶指针向下走一格，表示新的栈顶元素
//		return OK;
//	}
//}
//
////获取栈顶元素（只供查看，不出栈）
//State getTop(SqStack S, ElemType* e) {
//	if (S.top == -1) {   //当栈顶指针指向-1，说明栈空，栈顶元素为空
//		printf("栈空，无栈顶元素\n");
//		return ERROR;
//	}
//	else {   //当栈非空的时候，则将栈顶元素赋值给可供返回查看的e，但是栈顶元素并不出栈
//		*e = S.data[S.top];   //将栈顶元素赋值给e，栈顶指针top不变
//		return OK;
//	}
//}
//
////遍历打印顺序栈
//State printStack(SqStack S) {
//	if (S.top == -1) {   //当栈顶指针指向-1，说明栈空，无栈元素可供打印
//		printf("栈空\n");
//		return ERROR;
//	}
//	int i = 0;   //计数器，记录当前是第几个元素
//	while (S.top != -1) {
//		i++;   //栈顶指针还未到-1，则说明当前栈顶指针有元素，计数器+1
//		printf("栈顶向下第%d个元素为：%d\n", i, S.data[S.top]);  //当前栈顶指针的元素打印出
//		S.top--;   //栈顶指针向下走一格，继续进行循环打印
//	}
//	return OK;
//}
//
//
//
//
//
////下面是邻接表的实现
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
//		//接下来我们使用的尾插法
//		ArcNode* p1 = new ArcNode;  //生成一个新的边结点*p1
//		p1->adjvex = j;  //邻接点序号为j 
//		p1->nextarc = NULL;
//		//我们创建一个新的结点，里面存放我们的邻接点，然后接到我们的i结点的后面
//		if (G.HeadNode[i].firstarc == NULL)
//			G.HeadNode[i].firstarc = p1;
//		else
//		{
//			ArcNode* temp = Search_Back(G.HeadNode[i].firstarc);
//			temp->nextarc = p1;
//		}
//
//		//ArcNode* p2 = new ArcNode;
//		//p2->adjvex = i;  //邻接点序号为i
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
//	printf("输出邻接表：");
//	for (int i = 0; i < G.vexnum; i++)
//	{
//		printf("%c", G.HeadNode[i].data);
//		for (p = G.HeadNode[i].firstarc; p != NULL; p = p->nextarc)
//			printf("->%d", p->adjvex);
//		printf("\n");
//	}
//	//DFS深度优先搜索
//	printf("DFS:");
//	DFSTraverse(G);
//	printf("\n我的辅助数组是：");
//	int k = 0;
//	while (arr[k])
//	{
//		printf("%c ", arr[k]);
//		k++;
//	}
//	printf("\n该图的结点个数是：%d\n", G.vexnum);
//	printf("该图的边的个数是：%d\n", G.arcnum);
//	printf("拓扑排序的序列是：");
//	TopLogicalSort(G);
//	printf("\n");
//	return 0;
//}
//
//////输入
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