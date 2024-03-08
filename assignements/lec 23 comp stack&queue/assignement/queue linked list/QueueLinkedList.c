#include "STD_TYPES.h"
#include <stdlib.h>
#include <stdio.h>
#include "QueueLinkedList.h"





Node_t* front;
Node_t* rear;





void Init(void)
{
	Node_t* front=NULL;
	Node_t* rear=NULL;
	
}	
uint8 IsEmpty(void)
{
	uint8 retval;
	if(front==NULL)
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
	uint8 count=0;
	Node_t* ptr=front;
	while(ptr!=NULL)
	{
		ptr=ptr->Link;
		count++;
    }
	return count;
	
}	

uint32 Peek(void)
{
	if(!IsEmpty())
	{
		return front->Info;
	}
	else
	{
		printf("the queue is empty \n");
	}
	
}	


void Insert(uint32 Val)
{
	
	Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
	Temp->Info= Val;
    Temp->Link=NULL;
	if(front==NULL&&rear==NULL)
	{
		front=rear=Temp;
	}
	rear->Link=Temp;
	
	rear=Temp;
	
}	
uint32 Delete(void)

{
	uint32 retval;
		
	if(!IsEmpty())
	{
		 Node_t* Temp = front;
		 retval= front->Info;
		front=front->Link;
		free(Temp);
	}
	else
	{
		printf("the queue is empty \n");
	}
	return retval;
}

void Display(void)
{
	
	Node_t* ptr=front;
		if(front == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else
	{
	      while(ptr!=NULL)
	    {
		
		      printf("%d\t",ptr->Info);
		      ptr=ptr->Link;
		}
			printf("\n");
    }
}	
	