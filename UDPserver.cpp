#include<WINSOCK2.H>
#include<iostream>
#include "json.h"


#pragma comment(lib,"WS2_32.lib")

using namespace std;


//class UDPServer
//{
//	
//public:
//	int ServerStart();
//	int UDPclientSendSth();
//	//int UDPServertest001Start();
//};
//
//#pragma region UDPServer实现
//
//int UDPServer::ServerStart()
//{
//	
//}
//
//#pragma endregion
//
//#pragma region UDPClient实现
//
//int UDPServer::UDPclientSendSth()
//{
//	
//}
//
//#pragma endregion
//

struct test1
{
	UINT16 u16PackHead;
	UINT32  u32InitState;
};



//int main()
//{
//	//char *host = "127.0.0.1";
//	
//
//	//初始化Socket数据类型
//	WSADATA wsaData;
//	//初始化Socket对象
//	SOCKET RecvSocet;
//	//设置服务地址
//	sockaddr_in RecvAddr;
//	int port = 9091;
//	//设置数据缓冲区大小
//	int BufLen = 1024;
//
//	//初始化数据缓冲区
//	char RecvBuf[1024];
//
//	//数据发送地址
//	sockaddr_in SenderAddr;
//	//计算数据发送地址的大小
//	int SenderAddrSize = sizeof(SenderAddr);
//
//	//MAKEWORD(2, 2):指明程序请求使用的Socket版本，其中高位字节指明副版本、低位字节指明主版本
//	//&wsaData:指向WSADATA数据结构的指针，用来接收Sockets实现的细节
//	//result:0成功；其他对应失败的值
//	int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
//
//
//	//AF_INET:网际（常用设置）
//	//SOCK_DGRAM：数据报套接字（常用于UDP）
//	//IPPROTO_UDP：UDP通信
//	RecvSocet = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
//
//
//	//socket绑定端口，并且绑定0.0.0.0，接收到端口信号后赋值地址
//	RecvAddr.sin_family = AF_INET;
//	//将主机字节顺序转化为网络字节顺序（不同机器间通信"如windows和Linux"）
//	RecvAddr.sin_port = htons(port);
//	RecvAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
//
//	//绑定：将收数据对象与收数据地址绑定
//	bind(RecvSocet, (SOCKADDR *)&RecvAddr, sizeof(RecvAddr));
//
//	cout << "Receiving Data..." << endl;
//
//	//RecvBuf:输出接收到的字节
//	recvfrom(RecvSocet, RecvBuf, BufLen, 0, (SOCKADDR *)&SenderAddr, &SenderAddrSize);
//
//	cout << "Finish receiving Data: " << RecvBuf << endl;
//
//	string Recvstr = RecvBuf;
//
//	test1 tt;
//
//	Json::Reader reader;
//	/*Json::CharReaderBuilder b;
//	Json::CharReader* reader(b.newCharReader());*/
//	Json::Value root;
//
//
//	/*JSONCPP_STRING errs;
//	bool ok = reader->parse(RecvBuf, RecvBuf + std::strlen(RecvBuf), &root, &errs);
//*/
//	
//	if (reader.parse(Recvstr, root))
//	{
//		tt.u32InitState = root["u32InitState"].asInt();
//		tt.u16PackHead = root["u16PackHead"].asInt();
//		
//		//cout << "u32InitState: " << root["u32InitState"].isInt << endl;
//		
//		/*tt.u16PackHead = root["u16PackHead"].asInt;
//		tt.u32InitState = root["u32InitState"].asInt;*/
//	}
//
//	
//
//	cout << "u16PackHead: " << to_string(tt.u16PackHead) << endl;
//
//	cout << "u32InitState: " << to_string(tt.u32InitState) << endl;
//
//	closesocket(RecvSocet);
//	WSACleanup();
//
//	system("pause");
//
//	return 0;
//
//	//UDPServer udptest;
//
//	////HANDLE hThread = CreateThread(NULL, 0, &udptest.ServerStart, NULL, 0, NULL);
//
//	//udptest.ServerStart();
//
//	//udptest.UDPclientSendSth();
//
//
//	////CloseHandle(hThread);
//
//	//system("pause");
//	//return 0;
//
//}

