#include "STD_TYPES.h"
#include<stdio.h>

#include "QueueArray.h"

uint32 QueueArray[Array_Size];
sint32 F,R;





void Init(void)
{
	
	F=-1;
	R=-1;
	
}	
uint8 IsEmpty(void)
{
	uint8 retval;
     if((F==-1)||(F==R+1))
	 {
        retval= 1;
	 }		
	else
	{
		retval= 0;
	}
	return retval;
}	
uint8 IsFull(void)
{
	uint8 retval;
	if(R==Array_Size-1)
	{
		retval=1;
	}	
	else
	{
		retval=0;
	}
    return retval;	
	
}	
uint8 GetSize(void)
{
	 return R-F+1;
	
	
}	
void Insert(uint32 Val)
{
	if (!IsFull())
	{
	   if(F==-1)
	   {
		   F=0;
	   }  
	   R++;
	  QueueArray[R]=Val; 
	}

	else
	{
		printf("Queue is full\n");
	}
}	  
	   
	   
	
uint32 Delete(void)
{
		 uint32 retval;
	
	if (!IsEmpty())
	{

	  retval=QueueArray[F];
	  F++;
	}
	else
		{
		printf("Queue is Empty\n");
     	}
	return retval;
	
	
}	
uint32 Peek(void)
{
	
			 uint32 retval;
	
	if (!IsEmpty())
	{

	  retval=QueueArray[F];
	  
	}
	else
		{
		printf("Queue is Empty\n");
     	}
	return retval;
	
	
}
	

void Display(void)
{
	
	uint8 i;
	for(i=F;i<=R;i++)
	{
		printf("%d\t",QueueArray[i]);
	}
}	
	