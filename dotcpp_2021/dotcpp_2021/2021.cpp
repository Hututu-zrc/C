#define _CRT_SECURE_NO_WARNINGS

//1.�����������
#include <stdio.h>
//int compare(const void *a,const void *b) 
//{
//	return (*(int*)a-*(int*)b);
//}
//int main()
//{
//	int N;
//	int arr[N];
//	scanf("%d",&N);
//	for(int i=0;i<N;i++)
//		scanf("%d",&arr[i]);
//	int  sum=0;
//	for(int i=N-1;i>0;i--)
//	{
//		sum+=i;
//	} 
//	sum*=2;
//	sum+=N+1;
//	qsort(arr,N,sizeof(int),compare);
//	int data[10000];
//	for(int i=0;i<N;i++)
//		data[i]=arr[i];
//	int under=N-1;
//	
//	
//	return 0;
//}
#include <stdio.h>
#include <string.h>

void remove_extra_spaces(char *str) {
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        // ���������Ŀո�
        while (str[i] == ' ' && str[i + 1] == ' ') {
            i++;
        }

        str[j++] = str[i];
    }

    str[j] = '\0';
}

int main() {
    char text[1000];

    printf("������һ��Ӣ���ı���");
    fgets(text, sizeof(text), stdin);

    // ȥ������ո�
    remove_extra_spaces(text);

    printf("�������ı�Ϊ��%s\n", text);

    return 0;
}
