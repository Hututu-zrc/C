#define _CRT_SECURE_NO_WARNINGS
#include"Scan_Mine.h"
void menu()
{
	printf("******************************\n");
	printf("******    1. play        *****\n");
	printf("******    0. exit        *****\n");
	printf("******************************\n");
}
void game()
{	//11行的原因是扫描边，角是会越界，为了不造成越界，所以改为11行
	char mine[ROWS][COLS] = { '0 '};//存放地雷的信息
	char show[ROWS][COLS] = { '0' };//存放扫描出的雷的信息
	//上面是不完全初始化，我们要专门写一个IntBoard函数来初始化
	//mine初始化是全放为'0'
	IntBoard(mine,ROWS,COLS,'0');
	//show全放为'*',我们一般操作判断玩家是否踩雷，在mine上判断。
	//有雷炸死，无雷直接计算周围雷数，再将show上面的字符改一下
	IntBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMine(mine,ROW,COL);//用来生成雷
	
	DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);




}
int main()
{
	int input = 0;
	//设置随机数的值
	srand((unsigned int)time(NULL));
	do
	{
		menu();//打印菜单
		printf("请选择:->");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重试！\n");
			break;
		}
	} while (input);
	return  0;
}

	////方法二
	//return(board[x - 1][y] +
	//	board[x - 1][y - 1] +
	//	board[x][y - 1] +
	//	board[x + 1][y] +
	//	board[x + 1][y + 1] +
	//	board[x][y + 1] +
	//	board[x - 1][y + 1] - 8 * '0');

//后续实践效果
//1.标记功能:检测出来雷的位置，换上新的标记
//2.展开功能：
// 首先排查出来一片无雷空白
//{1.该坐标没有雷
// 2.该坐标周边8个位置没有雷（此时，会重复排查，所以有了第三步）
// 3.该坐标没有被排查过
//}