#include <stdlib.h>
#include <stdio.h>
#include <winsock2.h>
#include <string.h>
#include "conio.h"
#include <time.h>
#include <string>
#include "iostream"
#include<beans.cpp>
#include "json.h"
//#include "interpretationBean.cpp"


//ȫ�֣����建������С
#define		BUFLEN        512
//�汾����
#define		WSVERS        MAKEWORD(2, 2)

//����win32�Ŀ�
#pragma comment(lib,"ws2_32.lib")         // ����winsock 2.2 Llibrary

using namespace std;



struct test 
{
	UINT64  u64SendPos;
};

DWORD WINAPI UDPServerStart(LPVOID lpParameter)
{

	IPconfig* pThreadData = (IPconfig*)lpParameter;
	cout << "IP: " << pThreadData->ip << endl;
	cout << "PORT: " << pThreadData->port << endl;

	int port = pThreadData->port;

	WSADATA wsaData;
	SOCKET RecvSocet;

	sockaddr_in RecvAddr;
	//sockaddr_in SendAddr;
	sockaddr_in SenderAddr;
	int SenderAddrSize = sizeof(SenderAddr);

	//int port = 9091;
	char RecvBuf[BUFLEN];

	//���յ��ַ���
	int countChar;


	WSAStartup(MAKEWORD(2, 2), &wsaData);

	RecvSocet = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	RecvAddr.sin_family = AF_INET;
	RecvAddr.sin_port = htons(port);
	RecvAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);


	bind(RecvSocet, (SOCKADDR *)&RecvAddr, sizeof(RecvAddr));
	test1* t;

	//LPVOID t;
	//�м�������ʱ�˳�
	/*while (_kbhit())*/
	while (true)
	{
		

		cout << "Receiving Data..." << endl;
		countChar = recvfrom(RecvSocet, RecvBuf, BUFLEN, 0, (SOCKADDR *)&SenderAddr, &SenderAddrSize);

		cout << "Finish receiving Data: " << RecvBuf << endl;

		test* t;
		t = (test*)RecvBuf;

		cout<<"u16PackType: "<<t->u64SendPos<<endl;
		//cout << "u64SendPos: " << t-> << endl;

		////�ṹ��ָ�룬�Զ��������ݵĴ���
		//t = (test1*)RecvBuf;

		//cout<<t->u16test<<endl;

		//clock_t start, end;
		//start = clock();
		//test1 tt;
		//
		////todo:��������

		//
		//Json::Reader reader;
		///*Json::CharReaderBuilder b;
		//Json::CharReader* reader(b.newCharReader());*/
		//Json::Value root;



		//if (reader.parse(RecvBuf, root))
		//{
		//	tt.u32test = root["u32test"].asInt();
		//	tt.u16test = root["u16test"].asInt();
		//}

		//cout << "u32test: " << tt.u32test << endl;
		//cout << "u16test: " << tt.u16test << endl;

		//todo:��������


		//��������
		//char sendMsg[1024] = "already Deal with Data :";
		//strcat_s(sendMsg, RecvBuf);


		//sendto(RecvSocet, sendMsg, sizeof(sendMsg), 0, (SOCKADDR *)&SenderAddr, SenderAddrSize);

		//cout << "SendingMsg: " << sendMsg << endl;

		//end = clock();
		////ʱ����㣬cpuʱ��ת��ʵʱ��
		//cout << (float)(end - start) / CLOCKS_PER_SEC * 1000.0 << "ms" << endl;
	}

	closesocket(RecvSocet);
	WSACleanup();

	return 0L;
}


/**
* @brief UDP�ͻ������ݷ���
* @param msg[]    ��Ҫ���͵�����
*
* @return �Ƿ��ͳɹ�
*     -<em>0</em> �ɹ�
*/
int UdpSend(char ip[], int port, char msg[])
{
	SOCKET SendSocket;

	sockaddr_in RecvAddr;
	int nServAddLen = sizeof(RecvAddr);

	char Sendbuf[BUFLEN];

	SendSocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
	RecvAddr.sin_family = AF_INET;
	RecvAddr.sin_port = htons(port);
	RecvAddr.sin_addr.S_un.S_addr = inet_addr(ip);

	cout << "Sending Data to :" << ip << endl;

	sendto(SendSocket, msg, BUFLEN, 0, (SOCKADDR *)&RecvAddr, nServAddLen);

	cout << "finish Sending" << endl;

	closesocket(SendSocket);
	return 0;
}