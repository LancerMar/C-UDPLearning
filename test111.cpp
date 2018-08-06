#include "iostream"
#include <windows.h>
#include<UDPTools.h>
#include<beans.cpp>
#include "tools.h"


#include <iostream>
#include <fstream>

using namespace std;

DWORD WINAPI ThreadProc(LPVOID lpParameter)
{
	for (int i = 0; i < 100; ++i)
	{
		cout << "子线程:i = " << i << endl;
		Sleep(10);
	}
	return 0L;
}

struct student
{
	char name[20];
	int num;
	int age;
	char sex;
};

int main()
{
	//DatRead();
	//DateWrite();
	////文件的读写
	//TextWrite();

	//cout << "文件写入成功" << endl;
	//TextRead();

	//cout << "读取文件成功" << endl;

	//

	//system("pause");



	IPconfig ipcnfig1;
	strcpy(ipcnfig1.ip, "127.0.0.1");
	ipcnfig1.port = 4001;



	HANDLE thread = CreateThread(NULL, 0, UDPServerStart, &ipcnfig1, 0, NULL);
	//关闭线程
	CloseHandle(thread);


	/*for (int i = 0; i < 5; ++i)
	{
		cout << "主线程:i = " << i << endl;
		Sleep(100);
	}*/



	system("pause");

	string str = "hello";
	int a, b, c;
	cout << "100-1000 flowers: " << endl;

	for (int i = 100; i < 999; i++)
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if (a*a*a + b * b*b + c * c*c == i)
		{
			cout << i << endl;
		}
	}

	WORD wVersionRequest;
	wVersionRequest = MAKEWORD(2, 2);
	cout << wVersionRequest << endl;

	system("pause");
	return 0;
}