#include <iostream>
#include "fstream"
#include <windows.h>

#pragma comment(lib,"ws2_32.lib") 
using namespace std;

int TextWrite()
{
	char msg[] = "hello text";
	
	ofstream outfile;
	outfile.open("D:\\datatest01.txt");
	outfile << msg << endl;
	outfile << msg<<"01" << endl;

	outfile.close();
	return 0;
}

int TextRead()
{
	ifstream infile;
	infile.open("D:\\datatest01.txt");

	char str[512];
	

	while (infile.getline(str, 512))
	{
		cout << str << endl;
	}

	//cout << str << endl;
	infile.close();
	return 0;
}

struct student
{
	char name[20];
	int num;
	int age;
	char sex;
};

struct test
{
	UINT64  u64test1; 
	UINT8   u8test2[24];
	UINT8   u8test3[24 * 39];   

};
int DatWrite()
{
	student stud[3] = { "Li",1001,18,'f',"Fun",1002,19,'m',"Wang",1004,17,'f' };
	ofstream outfile("D:\\stud.dat", ios::binary);
	if (!outfile)
	{
		cerr << "open error!" << endl;
		abort();//�˳�����
	}
	for (int i = 0; i<3; i++)
		outfile.write((char*)&stud[i], sizeof(stud[i]));
	outfile.close();
	return 0;
}
test t[100000];
int DatRead()
{
	char szModuleFilePath[MAX_PATH];
	char SaveResult[MAX_PATH];
	int n = GetModuleFileNameA(0, szModuleFilePath, MAX_PATH); //��õ�ǰִ���ļ���·��
	szModuleFilePath[strrchr(szModuleFilePath, '\\') - szModuleFilePath + 1] = 0;//�����һ��"\\"����ַ���Ϊ0
	strcpy(SaveResult, szModuleFilePath);
	strcat(SaveResult, "\\t_zhud.dat");//�ڵ�ǰ·���������·��

	int size, count=0;
	FILE *fp;
	fp=fopen(SaveResult, "rb");
	if (fp == NULL)
		return -1;
	while(1)
	{
		size = fread(t+count, 1, sizeof(test), fp);
		if (size < sizeof(test))
			break;
		count++;
	}

	cout << count << endl;
}