//#include <iostream>
//using namespace std;
//#include <cstdio>
//#include <cstdlib>
//#include <Windows.h>
//
//
////int main()
////{
////	printf("hehe");
////	system("mode con cols=100 lines=30");//���ô��ڵĴ�С
////	system("title ̰����");//���������Ĵ��ڵ�����
////	COORD pos = { 10,20 };
////	CONSOLE_CURSOR_INFO cursor_info = { 0 };//����ṹ�壬�����йؿ���̨������Ϣ
////	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);//GetStdHandle�õ�һ�����
////	GetConsoleCursorInfo(handle, &cursor_info);//�����й�ָ������̨��Ļ�������Ĺ���С�Ϳɼ��Ե���Ϣ
////	cursor_info.bVisible = false;
////	cursor_info.dwSize = 100;
////	SetConsoleCursorInfo(handle, &cursor_info);//����ָ������̨��Ļ�������Ĺ��Ĵ�С�Ϳɼ���
////	system("pause");
////	return 0;
////}
//
//
////void SetPos(int x, int y)
////{
////	//����豸���
////	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
////	//���ù���λ��
////	COORD pos = { x,y };
////	//����õ�������ʼλ�ã������λ�ÿ�ʼ����ӡ
////	//��������ж�����ֱ�Ӹ��ǵ������¶�λ��(x,y)��ӡ��Ҳ�Ḳ�ǵ�֮ǰ�Ķ���
////	//������������λ����Ϣ���ڹ̶���λ�ô�ӡ
////	SetConsoleCursorPosition(handle, pos);
////}
////int main()
////{
////	SetPos(100, 100);
////	cout << "hello" << endl;
////	system("pause");
////	return 0;
////}
//
//#define KEY_PRESS(vk) (GetAsyncKeyState(vk)& 0x1 ?1:0)
//
//int main()
//{
//	while (1)
//	{
//		if (KEY_PRESS('A'))
//		{
//			cout << 'A' << endl;
//		}
//		else if (KEY_PRESS('B'))
//		{
//			cout << 'B' << endl;
//		}
//		else if (KEY_PRESS('C'))
//		{
//			cout << 'C' << endl;
//		}
//		else if (KEY_PRESS('D'))
//		{
//			cout << 'D' << endl;
//		}
//
//
//	}
//	return 0;
//}
//
////#include <clocale>
////int main()
////{
////	/*LC_COLLATE
////	LC_CTYPE
////	LC_MONETARY
////	LC_NUMERIC
////	LC_TIME
////	LC_ALL - ������������޸�*/
////	setlocale(LC_ALL, "");
////	wchar_t ch1 = L'��';
////	wchar_t ch2 = L'��';
////	wchar_t ch3 = L'%';
////	wprintf(L"%Lc\n", ch1);
////	wprintf(L"%Lc\n", ch2);
////	wprintf(L"%Lc\n", ch3);
////	cout << "ab" << endl;
////	return 0;
////
////}