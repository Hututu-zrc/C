#define _CRT_SECURE_NO_WARNINGS


//L1������ӡɳ©
#include <stdio.h> 
#define Blank(b)  for (int m = 0; m < b / 2; m++) printf(" ");
int main()
{
    int input;
    char ch;
    scanf("%d %c", &input, &ch);
    int count = 1, temp = input, i = 3;
    //������Ĳ�����������ǣ���ȥ�ϰ벿�������м��ӡһ���Ĳ�Σ�
    while (temp > 0)
    {
        temp -= 2 * i;
        i += 2;
        count++;
    }
//��ӡ�ϰ벿��
    for (int j = count - 1; j >= 1; j--)
    {
        int blank = 2 * (count - 1) - 2 * j;
        Blank(blank);
        for (int k = 2 * j - 1; k > 0; k--)
            printf("%c", ch);
        printf("\n");
    }
    //��ӡ�°벿��
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