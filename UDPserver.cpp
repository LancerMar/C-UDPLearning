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
//#pragma region UDPServerʵ��
//
//int UDPServer::ServerStart()
//{
//	
//}
//
//#pragma endregion
//
//#pragma region UDPClientʵ��
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
//	//��ʼ��Socket��������
//	WSADATA wsaData;
//	//��ʼ��Socket����
//	SOCKET RecvSocet;
//	//���÷����ַ
//	sockaddr_in RecvAddr;
//	int port = 9091;
//	//�������ݻ�������С
//	int BufLen = 1024;
//
//	//��ʼ�����ݻ�����
//	char RecvBuf[1024];
//
//	//���ݷ��͵�ַ
//	sockaddr_in SenderAddr;
//	//�������ݷ��͵�ַ�Ĵ�С
//	int SenderAddrSize = sizeof(SenderAddr);
//
//	//MAKEWORD(2, 2):ָ����������ʹ�õ�Socket�汾�����и�λ�ֽ�ָ�����汾����λ�ֽ�ָ�����汾
//	//&wsaData:ָ��WSADATA���ݽṹ��ָ�룬��������Socketsʵ�ֵ�ϸ��
//	//result:0�ɹ���������Ӧʧ�ܵ�ֵ
//	int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
//
//
//	//AF_INET:���ʣ��������ã�
//	//SOCK_DGRAM�����ݱ��׽��֣�������UDP��
//	//IPPROTO_UDP��UDPͨ��
//	RecvSocet = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
//
//
//	//socket�󶨶˿ڣ����Ұ�0.0.0.0�����յ��˿��źź�ֵ��ַ
//	RecvAddr.sin_family = AF_INET;
//	//�������ֽ�˳��ת��Ϊ�����ֽ�˳�򣨲�ͬ������ͨ��"��windows��Linux"��
//	RecvAddr.sin_port = htons(port);
//	RecvAddr.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
//
//	//�󶨣��������ݶ����������ݵ�ַ��
//	bind(RecvSocet, (SOCKADDR *)&RecvAddr, sizeof(RecvAddr));
//
//	cout << "Receiving Data..." << endl;
//
//	//RecvBuf:������յ����ֽ�
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

