#include "iostream"
#include <windows.h>
#include<UDPTools.h>
#include<beans.cpp>

using namespace std;

DWORD WINAPI ThreadProc(LPVOID lpParameter)
{
	for (int i = 0; i < 100; ++i)
	{
		cout << "���߳�:i = " << i << endl;
		Sleep(10);
	}
	return 0L;
}

int main()
{

	IPconfig ipcnfig1;
	strcpy(ipcnfig1.ip, "127.0.0.1");
	ipcnfig1.port = 9091;



	HANDLE thread = CreateThread(NULL, 0, UDPServerStart, &ipcnfig1, 0, NULL);


	//�ر��߳�
	CloseHandle(thread);


	/*for (int i = 0; i < 5; ++i)
	{
		cout << "���߳�:i = " << i << endl;
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