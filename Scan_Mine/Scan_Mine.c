#define _CRT_SECURE_NO_WARNINGS
#include"Scan_Mine.h"
void IntBoard(char mine[ROWS][COLS], int rows, int cols,char ret)//char ret 可以打印两个棋盘里面的符号
{	//创建两个数组，来存放符号
	int i = 0;
	int j = 0;
	for (i = 0; i <rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			mine[i][j] = ret;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------------扫雷游戏开始-------------\n");
	printf("\n");
	for (j = 0; j <=col; j++)
	{
		printf("%d  ", j);
	}
	printf("\n");
	printf("------------------------------");
	printf("\n");
	for (i = 1; i <= row; i++)
	{

		printf("%d |", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c  ",board[i][j]);
		}
		printf("\n");
		
	}
	printf("\n");
	printf("------------扫雷游戏开始-------------\n");
	printf("\n");
}

void SetMine(char mine[ROWS][COL], int row, int col)
{
	int count = COUNT;
	while (count)
	{
		//模上一个数的结果肯定小于模上的数
		//此时结果为0~8，我们需要加上1，得到1~9
		int x = rand() % row+1;
		int y = rand() % col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


 int get_mine(char mine[ROWS][COLS], int x, int y)
{	//方法一
	int i = 0;
	int j = 0;
	int sum = 0;
	for (i = -1; i <= 1; i++)
	{
		for (j = -1; j <= 1; j++)
		{
			//注意！！！我们存放的是ACSCII值，不是整形
			sum += mine[x+i][y+j] - '0';//但是，ASCCI里面'0' ,'1'之间只相差一个 所以，'1'-'0'=1；
		}
	}
	return sum;
	/*return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';*/
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - COUNT)//(win<row*col-COUNT)计算的是整个棋盘除了雷以外的非雷个数
	{
		printf("请输入排查的坐标：");
		scanf("%d %d", &x, &y);
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (show[x][y] != '*')
				{
					printf("该坐标已经被排查过，请勿重复排查！！！\n");
				}
				if (mine[x][y] == '1')//如果玩家输入坐标有雷
				{
					
					printf("很遗憾，你被炸死！！！\n");
					DisplayBoard(mine, ROW, COL);
					break;
				}
				else//玩家输出坐标没有雷，我们应该输出周围的八个坐标里面有几个雷
				{
					//累计循环次数到达非雷个数时，又没有被炸死。所以，所有的雷全部找出，获得游戏胜利
					int ret = get_mine(mine, x, y);//定义一个新的函数，计算雷的数量，并使用ret接受
					//注意！！！，我们最后输入到show二维数组里面必须是字符
					show[x][y] = ret + '0';//所以，利用我上面的结论加上一个'0'得到的就是字符
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("坐标非法，请重新输入！！！");
			}
		if (win == row * col - COUNT)
		{
			printf("恭喜你，排雷成功！！！\n");
			DisplayBoard(mine, ROW, COL);
		}

	}
}
