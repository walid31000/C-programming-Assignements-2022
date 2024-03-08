#include "../../STD_TYPES.h"
#include<stdio.h>
#include"StackArray.h"

int main()
{
	uint32 PushVal;
	uint8 i;
	Init();
	for(i=0;i<3;i++)
	{	
	     printf("enter a new value to push :");
	     scanf("%d",&PushVal);
	    Push(PushVal);
	}
	Display();
	printf("the popped value =%d\n",Pop());
	Display();
}