#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//汉诺塔问题，每次只能取出一个圆盘
void move(char x,char y)//单独定义，一次移动一个圆盘的函数，方便使用
{
	printf(" %c->%c ", x, y);
}
void Hanoi(int n, char a, char b, char c)
//a为起始位置，b为中转位置，c为目的位置
{
	if (n == 1)//只有一个圆盘时，只需要移动一次
	{
		move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//采用递归思想
		//先取出A上面的n-1个圆盘放置在c上；
		move(a, c);
		//再将最大的圆盘放置在C上面
		Hanoi(n - 1, b, a, c);
		//再将B上面的n-1个盘子，通过A移动到C上面
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	Hanoi(num, 'A', 'B','C');
	return 0;
}