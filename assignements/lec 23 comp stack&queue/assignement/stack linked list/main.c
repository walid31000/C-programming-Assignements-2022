#include "../../STD_TYPES.h"

#include"StackLinkedList.h"
#include<stdio.h>
int main()
{
	uint32 PushVal;
	uint8 i;
	Init();
	for(i=0;i<5;i++)
	{	
	     printf("enter a new value to push :");
	     scanf("%d",&PushVal);
	    Push(PushVal);
	}
	Display();
	printf("the stack size is %d\n",GetSize());
	
	for(i=0;i<3;i++)
	{	
	     printf("the popped value =%d\n",Pop());
	}
	Display();
	printf("the stack size is %d\n",GetSize());
	printf("the peek of stack is %d\n", Peek());
	for(i=0;i<2;i++)
	{	
	     printf("the popped value =%d\n",Pop());
	}
	Display();
}