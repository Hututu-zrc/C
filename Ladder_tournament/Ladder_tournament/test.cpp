#define _CRT_SECURE_NO_WARNINGS


//L1——打印沙漏
#include <stdio.h> 
#define Blank(b)  for (int m = 0; m < b / 2; m++) printf(" ");
int main()
{
    int input;
    char ch;
    scanf("%d %c", &input, &ch);
    int count = 1, temp = input, i = 3;
    //算出最大的层数（计算的是，出去上半部分里面中间打印一个的层次）
    while (temp > 0)
    {
        temp -= 2 * i;
        i += 2;
        count++;
    }
//打印上半部分
    for (int j = count - 1; j >= 1; j--)
    {
        int blank = 2 * (count - 1) - 2 * j;
        Blank(blank);
        for (int k = 2 * j - 1; k > 0; k--)
            printf("%c", ch);
        printf("\n");
    }
    //打印下半部分
    for (int j = 2; j <= count - 1; j++)
    {
        int blank = 2 * (count - 1) - 2 * j;
        Blank(blank);
        for (int k = 0; k < 2 * j - 1; k++)
            printf("%c", ch);
        printf("\n");
    }
    printf("%d\n", input - 2 * (count - 1) * (count - 1) + 1);
}