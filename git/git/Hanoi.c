#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ŵ�����⣬ÿ��ֻ��ȡ��һ��Բ��
void move(char x,char y)//�������壬һ���ƶ�һ��Բ�̵ĺ���������ʹ��
{
	printf(" %c->%c ", x, y);
}
void Hanoi(int n, char a, char b, char c)
//aΪ��ʼλ�ã�bΪ��תλ�ã�cΪĿ��λ��
{
	if (n == 1)//ֻ��һ��Բ��ʱ��ֻ��Ҫ�ƶ�һ��
	{
		move(a, c);
	}
	else
	{
		Hanoi(n - 1, a, c, b);//���õݹ�˼��
		//��ȡ��A�����n-1��Բ�̷�����c�ϣ�
		move(a, c);
		//�ٽ�����Բ�̷�����C����
		Hanoi(n - 1, b, a, c);
		//�ٽ�B�����n-1�����ӣ�ͨ��A�ƶ���C����
	}
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	Hanoi(num, 'A', 'B','C');
	return 0;
}