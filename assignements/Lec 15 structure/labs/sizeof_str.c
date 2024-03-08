#include<stdio.h>
#include"STD_TYPES.h"
#pragma pack(1)
int main ()
{
	typedef struct
	{
		uint16 x;
		uint32 y;
	}mystruct;
	printf("%d",sizeof(mystruct));
}