#include "STD_TYPES.h"
#include <stdlib.h>
#include <stdio.h>
#include "QueueCircularLinkedList.h"


Node_t* rear;

void Init(void)
{
	
	rear=NULL;
	
}	
uint8 IsEmpty(void)
{
	uint8 retval;
	if(rear==NULL)
	{
		retval=1;
	}
	else
	{
		retval=0;
	}
	return retval;
}	
		


void Insert(uint32 Val)
{
  	Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
	Temp->Info= Val;
	if(!IsEmpty())
	{
    Temp->Link=rear->Link;
     rear->Link=Temp;
     rear=Temp;  
	}
	else
	{
		
		rear=Temp;
		rear->Link=Temp;
	 }
	
}	
uint32 Delete(void)
{
	uint32 retval;
	if(!IsEmpty())
	{
		if(rear->Link==rear)//check if its the only node
		{
			Node_t* Temp = rear;
		   retval= Temp->Info;
			
			rear=NULL;
			free(Temp);
		}
		else
		   {
			  Node_t* Temp =rear->Link ;
		       retval= Temp->Info;
			
			  rear->Link=Temp->Link;
			  free(Temp);
	
		    }
	}
    
	
	else
	{
		printf("the queue is empty \n");
	}
	return retval;
}
	
	
	
	
	
	
uint32 Peek(void)
{
	uint32 retval;
	if(!IsEmpty())
	{
		return rear->Link->Info;
	}
	else
	{
		printf("the queue is empty \n");
	}
	
}	

void Display()
{
	Node_t* ptr;
	if(rear==NULL)
	{
		printf("the queue is empty \n");
	}
	else
	{
		ptr=rear->Link;
		do
		{
			printf("%d\t",ptr->Info);
			ptr=ptr->Link;
		}while(ptr!=rear->Link);
	}
}


uint8 GetSize()
{
		Node_t* ptr;
		uint8 count;
	if(rear==NULL)
	{
		printf("the queue is empty \n");
	}
	else
	{
		ptr=rear->Link;
		do
		{
			count++;
			ptr=ptr->Link;
		}while(ptr!=rear->Link);
	}
	return count;
}
	