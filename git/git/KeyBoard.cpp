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
////	system("mode con cols=100 lines=30");//设置窗口的大小
////	system("title 贪吃蛇");//设置启动的窗口的名称
////	COORD pos = { 10,20 };
////	CONSOLE_CURSOR_INFO cursor_info = { 0 };//这个结构体，包含有关控制台光标的信息
////	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);//GetStdHandle得到一个句柄
////	GetConsoleCursorInfo(handle, &cursor_info);//检索有关指定控制台屏幕缓冲区的光标大小和可见性的信息
////	cursor_info.bVisible = false;
////	cursor_info.dwSize = 100;
////	SetConsoleCursorInfo(handle, &cursor_info);//设置指定控制台屏幕缓冲区的光标的大小和可见性
////	system("pause");
////	return 0;
////}
//
//
////void SetPos(int x, int y)
////{
////	//获得设备句柄
////	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
////	//设置光标的位置
////	COORD pos = { x,y };
////	//这里得到的是起始位置，从这个位置开始向后打印
////	//如果后面有东西会直接覆盖掉，重新定位的(x,y)打印，也会覆盖掉之前的东西
////	//传入句柄参数和位置信息，在固定的位置打印
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
////	LC_ALL - 针对所有类项修改*/
////	setlocale(LC_ALL, "");
////	wchar_t ch1 = L'中';
////	wchar_t ch2 = L'国';
////	wchar_t ch3 = L'%';
////	wprintf(L"%Lc\n", ch1);
////	wprintf(L"%Lc\n", ch2);
////	wprintf(L"%Lc\n", ch3);
////	cout << "ab" << endl;
////	return 0;
////
////}