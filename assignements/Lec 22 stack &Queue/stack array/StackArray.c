#include "../../STD_TYPES.h"
#include<stdio.h>
#include"StackArray.h"

uint32 StackBlock[STACK_SIZE];
uint8 Top;


void Init(void)
{
	Top=-1;
}

uint8 IsEmpty(void)
{
	uint8 ReturnVal;
	
	if(Top==-1)
		ReturnVal= 1;
	else
		ReturnVal= 0;
	
	return ReturnVal;
}

uint8 IsFull(void)
{
	uint8 ReturnVal;
	
	if(Top==STACK_SIZE-1)
		ReturnVal= 1;
	else
		ReturnVal= 0;
	
	return ReturnVal;
}
uint8 GetSize(void)
{
	return Top+1;
}

uint32 Peek(void)
{
	//check if stack is not empty
	if(!IsEmpty())
	{
		return StackBlock[Top];
	}
	else
	{
		printf("Stack is empty\n");
	}
}

void Push(uint32 Val)
{
	if(!IsFull())
	{
		Top++;
		StackBlock[Top]=Val;
	}
	else
	{
		printf("Stack is full\n");
	}
}

uint32 Pop(void)
{
	uint32 ReturnVal;
	
		if(!IsEmpty())
	{
		ReturnVal= StackBlock[Top];
		Top--;
	}
	else
	{
		printf("Stack is empty\n");
	}
	return ReturnVal;
}

void Display(void)
{
	sint8 i;
	
	printf("The stack is: \n");
	for(i=Top;i>=0;i--)
	{
		printf("%d\n",StackBlock[i]);
	}
	
}