#include "STD_TYPES.h"
#include<stdio.h>

#include "QueueArray.h"





int main()
{
	
	uint32 InsertVal,DeleteVal;
	uint8 i;
	Init();
	for(i=0;i<3;i++)
	{	
	     printf("enter a new value to insert :\n ");
	     scanf("%d",&InsertVal);
	    Insert(InsertVal);
	}
	 Display();
	 	for(i=0;i<3;i++)
	{	
	     
	    printf("\nthe deleted value =%d\n",Delete());
	}
	 Display();
	 for(i=0;i<2;i++)
	{	
	     printf("enter a new value to insert :");
	     scanf("%d",&InsertVal);
	    Insert(InsertVal);
	}
	Display();
	printf("\nthe peek of queue is %d \n",Peek());
		printf("the queue size is %d \n",GetSize());
	
	
}	