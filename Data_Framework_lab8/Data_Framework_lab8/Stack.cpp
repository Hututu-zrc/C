#include<stdio.h>
#include<malloc.h>
#define MaxVertexNum 20
#define MAX 100



typedef char Vertextype;
typedef struct ArcNode
{
	int        adjvex;
	struct ArcNode* nextarc;
} ArcNode;

typedef struct VNode
{
	Vertextype    data;
	ArcNode* firstarc;
}VNode, AdjList[MaxVertexNum];

typedef struct
{
	AdjList    vertices;
	int        vexnum, arcnum;
	int        kind;
}ALGraph;

void Bian(ALGraph& G, int i, int j) {
	ArcNode* p, * q;
	p = (ArcNode*)malloc(sizeof(ArcNode));
	p->adjvex = j;
	p->nextarc = G.vertices[i].firstarc;
	G.vertices[i].firstarc = p;
}


void CreateUDG(ALGraph& G)
{
	G.vexnum = 14;
	G.arcnum = 20;
	//顶点信息 
	G.vertices[1].data = 'A';  G.vertices[1].firstarc = NULL;
	G.vertices[2].data = 'B';  G.vertices[2].firstarc = NULL;
	G.vertices[3].data = 'C';  G.vertices[3].firstarc = NULL;
	G.vertices[4].data = 'D';  G.vertices[4].firstarc = NULL;
	G.vertices[5].data = 'E';  G.vertices[5].firstarc = NULL;
	G.vertices[6].data = 'F';  G.vertices[6].firstarc = NULL;
	G.vertices[7].data = 'G';  G.vertices[7].firstarc = NULL;
	G.vertices[8].data = 'H';  G.vertices[8].firstarc = NULL;
	G.vertices[9].data = 'I';  G.vertices[9].firstarc = NULL;
	G.vertices[10].data = 'J';  G.vertices[10].firstarc = NULL;
	G.vertices[11].data = 'K';  G.vertices[11].firstarc = NULL;
	G.vertices[12].data = 'L';  G.vertices[12].firstarc = NULL;
	G.vertices[0].data = 'O';  G.vertices[0].firstarc = NULL;
	G.vertices[13].data = 'V';  G.vertices[13].firstarc = NULL;


	//边 
	Bian(G, 12, 6);
	Bian(G, 11, 6);
	Bian(G, 10, 12);
	Bian(G, 9, 12);
	Bian(G, 9, 11);
	Bian(G, 9, 10);
	Bian(G, 8, 13);
	Bian(G, 7, 13);
	Bian(G, 6, 8);
	Bian(G, 5, 7);
	Bian(G, 4, 5);
	Bian(G, 3, 8);
	Bian(G, 3, 7);
	Bian(G, 3, 5);
	Bian(G, 2, 3);
	Bian(G, 1, 12);
	Bian(G, 1, 4);
	Bian(G, 1, 3);
	Bian(G, 1, 2);
	Bian(G, 0, 9);
	Bian(G, 0, 1);

}

void PrintUDG(ALGraph G)
{
	int i, j;
	for (i = 0; i < G.vexnum; i++) {
		printf("%d:", i);
		ArcNode* p;
		p = G.vertices[i].firstarc;
		while (p != NULL) {
			printf("->%d", p->adjvex);
			p = p->nextarc;
		}
		printf("\n");
	}
}


//栈的实现
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 20
typedef int ElemType;
typedef int State;
typedef struct {   //顺序栈的存储结构
	ElemType data[MAXSIZE];   //用数组存放数据，最大为MAXSIZE，作为栈满条件
	int top;   //用作栈顶指针
}SqStack;

//初始化顺序栈
State initStack(SqStack* S) {
	S->top = -1;   //将栈顶指针置为-1，即将栈作为还是空的时候
	return OK;
}

//获得顺序栈的长度
int getLength(SqStack S) {
	return (S.top) + 1;   //根据数组下标的规则，数组中的长度为指针+1个元素
}

//清空顺序栈
State clearStack(SqStack* S) {
	S->top = -1;   //将栈顶指针重新设置为-1，即此时表示栈空
	return OK;
}

//判断顺序栈是否为空
State isEmpty(SqStack S) {
	if (S.top == -1) {   //如果此时栈顶指针为-1表示栈此时为空，非-1则表示非空
		return TRUE;
	}
	else {
		return FALSE;
	}
}

//入栈
State push(SqStack* S, ElemType* e) {
	if (S->top == MAXSIZE - 1) {   //根据数组下标的特点，当指针指向最后一个元素时为MAXSIZE-1，此时栈满
		printf("栈满，无法入栈\n");
		return ERROR;   //栈满说明空间已满已经不可以再入栈
	}
	else {    //如果栈非满则执行添加过程
		S->top++;   //栈顶指针+1指向一个新的顶部空间
		S->data[S->top] = *e;   //将现在指向的这个新的空的栈顶空间元素置为指定元素（后进先出）
		return OK;
	}
}

//出栈
State pop(SqStack* S, ElemType* e) {
	if (S->top == -1) {   //当栈顶指针指向-1，说明栈空，则无法出栈
		printf("栈空，无法出栈\n");
		return ERROR;
	}
	else {   //如果栈非空则执行出栈程序
		*e = S->data[S->top];   //将当前栈顶元素的指针赋给可供返回查看的e
		S->top--;   //栈顶元素出栈后，栈顶指针向下走一格，表示新的栈顶元素
		return OK;
	}
}

//获取栈顶元素（只供查看，不出栈）
State getTop(SqStack S, ElemType* e) {
	if (S.top == -1) {   //当栈顶指针指向-1，说明栈空，栈顶元素为空
		printf("栈空，无栈顶元素\n");
		return ERROR;
	}
	else {   //当栈非空的时候，则将栈顶元素赋值给可供返回查看的e，但是栈顶元素并不出栈
		*e = S.data[S.top];   //将栈顶元素赋值给e，栈顶指针top不变
		return OK;
	}
}

//遍历打印顺序栈
State printStack(SqStack S) {
	if (S.top == -1) {   //当栈顶指针指向-1，说明栈空，无栈元素可供打印
		printf("栈空\n");
		return ERROR;
	}
	int i = 0;   //计数器，记录当前是第几个元素
	while (S.top != -1) {
		i++;   //栈顶指针还未到-1，则说明当前栈顶指针有元素，计数器+1
		printf("栈顶向下第%d个元素为：%d\n", i, S.data[S.top]);  //当前栈顶指针的元素打印出
		S.top--;   //栈顶指针向下走一格，继续进行循环打印
	}
	return OK;
}


int TopologicalSort(ALGraph G, int indegree[])
{
	//FindInDegree(G, indegree);
	SqStack S;
	initStack(&S);
	int i;
	for (i = 0; i < G.vexnum; i++)
	{
		if (!indegree[i])	push(&S, &i);
	}
	int count = 0;
	while (!isEmpty(S))
	{
		pop(&S, &i);
		printf("%c ", G.vertices[i].data);
		count++;
		ArcNode* p;
		for (p = G.vertices[i].firstarc; p != NULL; p = p->nextarc)
		{
			int k = p->adjvex;
			if (!(--indegree[k]))	push(&S, &k);
		}
	}
	if (count < G.vexnum)	return ERROR;
	else return OK;
}


int main()
{
	ALGraph G;
	int v;
	CreateUDG(G);
	PrintUDG(G);
	int indegree[14] = { 0 ,1, 1,2,1,2,2,2,2, 1,1,1,3,2 };
	printf("\n");
	TopologicalSort(G, indegree);
	printf("\n");
	return 0;
}
