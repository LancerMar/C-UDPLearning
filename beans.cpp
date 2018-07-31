#include<stdint.h>
#include<basetsd.h>


struct test1
{
	UINT16 u16PackHead;
	UINT32  u32InitState;
};

struct IPconfig
{
	int port;
	char ip[16];
};