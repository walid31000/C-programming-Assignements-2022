#include<stdio.h>
#include "STD_TYPES.h"
int main ()
{
	uint32 ID;
	uint8 i;
	typedef struct
	{
		uint32 Math;
		uint32 language;
		uint32 physics;
		uint32 chemistry;
	}student;
	
	student arr[10];
	for(i=0;i<10;i++)
	{
		arr[i].Math=5*i+10;
		arr[i].language=20*i+10;
		arr[i].physics=3*i+4;
		arr[i].chemistry=6+(10*i);
	}
	printf("enter student ID :\n");
	scanf("%d",&ID);
	if((ID<0)||(ID>10))
	printf("wrong ID ");
    else
	{
		printf("Math grad :%d\n",arr[ID-1].Math);
		printf("language grad :%d\n",arr[ID-1].language);
		printf("physics grad :%d\n",arr[ID-1].physics);
		printf("chemistry grad :%d\n",arr[ID-1].chemistry);
		
		
	}


}	